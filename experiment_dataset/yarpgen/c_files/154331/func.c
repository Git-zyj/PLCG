/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154331
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
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((12334691955856653937ULL), (1418916697609183705ULL))))))));
    var_11 = ((/* implicit */signed char) var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */_Bool) ((signed char) arr_4 [i_0] [i_2]));
                    arr_11 [i_0] [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (signed char)64))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)24)) && ((_Bool)1))))) & (arr_1 [i_0] [i_4])))) ? (((((_Bool) arr_16 [i_2] [i_2] [i_2] [(unsigned short)10] [i_4 + 1])) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) var_1)) ? (708384619190360425ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_3] [i_4 + 1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_6 [i_2] [i_0]) : (arr_12 [i_0] [i_1 - 1] [i_2] [(short)0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (4540340009656411822LL)))) : (min((((/* implicit */unsigned long long int) (unsigned short)38993)), (arr_1 [i_0] [i_1 - 1])))))));
                                var_13 = ((/* implicit */signed char) min((((/* implicit */long long int) 2769383188U)), (-4211639154512413736LL)));
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (+(8636883837651120111ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) var_1);
}
