/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188619
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) -5912020256773884915LL)) ? ((~((((_Bool)0) ? (((/* implicit */int) arr_4 [i_4] [i_3 - 1] [i_0])) : (((/* implicit */int) (short)511)))))) : (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_1]))));
                                var_18 = ((/* implicit */short) ((5912020256773884912LL) >> (((/* implicit */int) arr_3 [i_4] [i_1 - 1] [i_2 - 2]))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1 + 3] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 88034846)) ? (var_0) : (((/* implicit */long long int) arr_6 [i_0] [i_1 + 2] [i_1 + 3] [i_2]))))) ? (((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) : (13163550646882318752ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (3441080691U) : (((/* implicit */unsigned int) var_4))))))));
                }
            } 
        } 
    } 
    var_19 ^= var_9;
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((short) 5912020256773884922LL))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-79))) : (var_2))), (((/* implicit */long long int) var_3)))))));
}
