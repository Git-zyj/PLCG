/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149747
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (~((-(arr_0 [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) arr_8 [i_3] [i_2] [i_3] [i_3]))));
                                var_13 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_1 - 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [0U] [i_1 - 1] [i_1 - 1]))) : (var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_4] [i_1 + 2] [i_4])) ? (((/* implicit */int) arr_8 [i_2] [i_1 + 2] [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_8 [i_2] [i_1 + 2] [i_1 - 1] [(signed char)10])))))));
                                arr_13 [i_0] [i_0] [10U] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (arr_0 [i_0])))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_7 [i_0]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        var_15 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_6 [i_2] [i_2] [i_2]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_2] [i_2])))))))), (((((/* implicit */_Bool) arr_9 [i_0 - 3])) ? (((/* implicit */long long int) ((int) arr_16 [i_0] [i_1] [i_2] [i_0]))) : ((+(arr_0 [i_2])))))));
                        var_16 = ((/* implicit */unsigned long long int) arr_5 [i_1]);
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned short) (~(((((/* implicit */int) min((arr_9 [i_0 + 2]), ((short)10363)))) >> (((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1ULL)))))));
                            var_18 &= ((/* implicit */unsigned long long int) arr_8 [i_2] [i_2] [i_2] [i_2]);
                            arr_19 [i_6] [i_5] [i_0] [i_0] [i_1 + 1] [i_0 + 2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((arr_8 [i_0] [i_1 + 2] [i_2] [(short)11]), (((/* implicit */unsigned short) var_5))))) ? (min((((/* implicit */long long int) arr_16 [i_0] [i_0] [i_0] [i_0])), (arr_3 [i_0]))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (arr_2 [i_0]))))))));
                            var_19 = ((/* implicit */long long int) arr_1 [i_2] [i_5]);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [i_1 - 1] [i_0] [i_1 + 2] [5U] [i_1 + 2]))));
                            var_21 = ((/* implicit */unsigned long long int) var_7);
                            var_22 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 3]))) | ((((_Bool)1) ? (arr_15 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_2])))))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0 - 3] [i_0 - 2] [i_0 + 2]))))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_17 [i_2] [i_7]) : (arr_17 [i_0] [i_1 + 1]))) : (((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_0 + 2] [i_0] [i_1 - 1] [i_7])) != (((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [(unsigned short)12])), (arr_7 [i_7])))))))));
                            arr_24 [i_0] [i_0] = ((_Bool) ((short) arr_18 [i_0] [i_0 + 1] [i_0 + 2] [i_0]));
                        }
                        var_24 = ((/* implicit */int) min((var_2), (min((max((((/* implicit */unsigned long long int) arr_15 [i_0])), (9832324305338005310ULL))), (((/* implicit */unsigned long long int) var_10))))));
                    }
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 9)), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_27 [i_0] [i_0] [i_1 + 1] [i_2] [i_0] [i_0])), (arr_1 [i_0] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-10364), (((/* implicit */short) arr_27 [i_0 - 1] [(_Bool)1] [(_Bool)1] [i_0] [i_0] [i_0 - 1])))))) : (max((((/* implicit */unsigned long long int) arr_20 [i_0] [(short)5] [i_1] [i_2] [i_8])), (var_9)))))));
                        var_26 = ((/* implicit */unsigned short) arr_3 [i_0]);
                        var_27 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) (short)18400)))))))));
                    }
                }
                var_28 = ((/* implicit */signed char) max(((~(((((/* implicit */_Bool) arr_17 [i_0 + 2] [(unsigned short)12])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) arr_16 [i_0] [i_0 - 3] [i_0] [i_1])) ? (arr_16 [(short)0] [i_0 + 1] [i_0] [i_0]) : (arr_16 [i_0 + 1] [i_0 + 2] [(_Bool)1] [i_1])))));
            }
        } 
    } 
    var_29 -= ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))));
}
