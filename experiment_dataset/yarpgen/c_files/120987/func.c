/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120987
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_12 [i_1] [i_2] [i_4 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32764))));
                                var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_3 [i_4 + 2] [i_4 + 1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4 + 3] [i_4 + 1] [i_4] [i_4 + 1]))))), (((((/* implicit */_Bool) max(((unsigned short)2474), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4 - 1]))) : ((-(10187844539871389301ULL)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) (+(((int) var_9))));
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */_Bool) (unsigned short)2474)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))));
    var_19 &= max((max(((-(2147483647))), (((/* implicit */int) var_10)))), ((~(((/* implicit */int) var_13)))));
    var_20 += ((/* implicit */unsigned int) var_5);
}
