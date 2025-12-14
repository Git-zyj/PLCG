/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13029
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
    var_19 = ((/* implicit */int) var_16);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 3ULL))) ? (((((/* implicit */int) arr_2 [(_Bool)1] [i_1])) * (((/* implicit */int) arr_2 [i_1] [i_1])))) : (((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) (unsigned char)255))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((arr_0 [i_2]) & (((/* implicit */unsigned long long int) arr_1 [i_1] [i_0])))))));
                    var_22 = ((/* implicit */long long int) ((var_14) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) >= (((/* implicit */unsigned long long int) var_10))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_0] [9LL] [9LL] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [10U]);
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_6)));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(short)5] [(short)5] [(unsigned char)6] [i_3] [i_4])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)255))))) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_3] [i_0]))))))));
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 2; i_5 < 19; i_5 += 3) 
                {
                    arr_18 [i_1] [i_1] = ((/* implicit */int) (!(min((arr_11 [i_1] [i_1] [i_5 + 1] [i_1]), (arr_11 [i_1] [i_1] [i_1] [i_1])))));
                    var_24 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_15)) << (((1262982410021629119LL) - (1262982410021629114LL)))))) ? (((((/* implicit */_Bool) -4338135478957351128LL)) ? (arr_6 [i_0] [i_0] [4LL] [i_5]) : (arr_14 [i_1] [i_1] [i_5 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_5) || (((/* implicit */_Bool) var_1)))))))), (((((/* implicit */_Bool) min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_16 [i_1])))) ? (((((/* implicit */_Bool) arr_17 [i_5] [i_1] [i_1] [i_5])) ? (-4338135478957351128LL) : (arr_6 [i_5 + 1] [17ULL] [17ULL] [i_0]))) : ((~(var_4)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) arr_11 [i_1] [i_1] [i_6] [i_7])), (arr_6 [i_0] [i_1] [i_5 + 1] [i_6])))));
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((_Bool) var_17))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_6] [i_7]))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (var_18)))) ? ((~(13ULL))) : (((/* implicit */unsigned long long int) min((arr_14 [(unsigned short)18] [i_5] [i_6]), (((/* implicit */long long int) arr_11 [i_0] [(_Bool)1] [i_6] [i_7]))))))))))));
                                arr_23 [i_1] [i_1] [i_5] [i_6] [i_7 + 1] [i_5] [5LL] = ((/* implicit */_Bool) arr_6 [i_0] [1LL] [i_0] [1LL]);
                                var_27 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_14 [i_6 - 1] [i_5 - 1] [i_5])) ? (arr_14 [i_6 - 1] [i_5 - 1] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((arr_14 [i_6 - 1] [i_5 - 1] [2LL]) >= (((/* implicit */long long int) var_3)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_28 = ((/* implicit */int) var_18);
    var_29 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_5)), (var_0))), (var_11)));
    var_30 = ((/* implicit */long long int) var_7);
}
