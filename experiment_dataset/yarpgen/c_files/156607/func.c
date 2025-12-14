/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156607
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
    var_20 |= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_8))))));
    var_21 = ((/* implicit */_Bool) var_16);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [(signed char)12] [(signed char)14] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_1 [i_0 - 1]) >> (((arr_1 [i_0 - 2]) - (9496953293906634685ULL))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((arr_0 [i_4 - 1]) >> (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_15))))))))));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_3]))));
                                arr_12 [i_2] [i_1] [i_0] [(_Bool)1] [i_4 - 1] = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (arr_5 [i_0 + 1] [i_0] [i_0] [i_0])))), (var_5)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((arr_6 [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_6]))))) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))) || ((!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((var_12) - (3316278741746711879ULL))))))))));
                                arr_20 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_0])) <= (((/* implicit */int) arr_10 [i_0] [i_0]))))) : (((/* implicit */int) arr_10 [i_0] [i_0]))));
                                arr_21 [i_0 - 1] [i_1] [i_0] [i_6] = (i_0 % 2 == 0) ? (max((((/* implicit */int) arr_13 [i_6] [(signed char)0])), (((((/* implicit */int) var_3)) >> (((arr_17 [i_0] [i_0] [i_0] [i_5] [i_6]) - (35130629U))))))) : (max((((/* implicit */int) arr_13 [i_6] [(signed char)0])), (((((/* implicit */int) var_3)) >> (((((arr_17 [i_0] [i_0] [i_0] [i_5] [i_6]) - (35130629U))) - (1899731446U)))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_3) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) max((max((var_5), (((/* implicit */unsigned short) var_2)))), (max((var_6), (((/* implicit */unsigned short) arr_2 [i_0] [i_1 + 1])))))))));
                    var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)59473)), (arr_11 [i_0] [17LL] [i_2]))))))), (arr_9 [i_2] [4ULL] [(short)7] [i_0])));
                }
            } 
        } 
    } 
    var_26 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned char) var_16))))) ? (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((var_13) <= (((/* implicit */unsigned long long int) var_7)))))))));
    var_27 |= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_12)))))))));
}
