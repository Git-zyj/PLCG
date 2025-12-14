/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135159
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
    var_20 *= ((/* implicit */signed char) max((((((/* implicit */long long int) 4294967295U)) < (((long long int) (short)11902)))), ((!(((_Bool) var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((/* implicit */long long int) arr_3 [i_1] [i_1])), (max((arr_2 [i_0 - 2]), (((/* implicit */long long int) var_9)))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_22 *= arr_11 [i_0] [i_1] [i_2] [i_3 + 1] [i_3];
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_4 + 1] = min((((/* implicit */long long int) ((min((var_10), (var_1))) ? (max((arr_3 [i_0 + 1] [i_0]), (((/* implicit */unsigned int) arr_5 [i_0])))) : (arr_10 [i_1])))), (max((((/* implicit */long long int) arr_9 [i_0 - 3] [i_2] [i_3 + 2] [i_4] [i_4 - 1])), (max((((/* implicit */long long int) arr_5 [i_0])), (var_8))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 - 3] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12)))) : ((+(var_12))))), (max((arr_6 [i_0] [i_0] [i_0 - 2] [i_0]), (var_12)))));
            }
        } 
    } 
    var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) >> (((((long long int) var_4)) - (316532662LL)))))) ? ((-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) var_18)) : (var_16))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
}
