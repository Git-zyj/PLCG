/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153835
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
    var_10 = ((/* implicit */_Bool) var_6);
    var_11 = ((/* implicit */short) min(((!(((/* implicit */_Bool) var_1)))), (max(((_Bool)1), ((_Bool)1)))));
    var_12 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            var_13 -= ((/* implicit */short) max((min(((unsigned short)13429), (((/* implicit */unsigned short) arr_9 [i_0 + 1] [i_0 + 1])))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0 + 1] [i_4 + 1] [i_4])) <= (((/* implicit */int) (_Bool)1)))))));
                            var_14 &= ((/* implicit */long long int) ((((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)255))))) != (((/* implicit */int) ((var_4) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) var_9)))))))))));
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((short) var_1))), (arr_3 [(unsigned char)0] [i_3]))))));
                        }
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) arr_1 [(unsigned char)11])))))));
                            arr_15 [i_1] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) min((max((min((((/* implicit */long long int) arr_0 [(_Bool)1] [(_Bool)1])), (var_1))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_14 [i_0] [i_1] [i_1]))))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65510)))))));
                            var_17 ^= ((((/* implicit */_Bool) max((((/* implicit */long long int) min((var_6), (((/* implicit */unsigned short) (short)5554))))), (((long long int) arr_11 [(unsigned short)12]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_5] [i_2] [i_1] [(_Bool)1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65514)) <= (((/* implicit */int) var_2)))))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) (((+(var_4))) <= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_1]))))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_0 + 1] [(short)1] [i_1] [(short)1] [(unsigned short)12] [i_2] [i_5])) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_1]))))));
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] [2LL] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_3] [i_5]))));
                        }
                        var_19 *= ((/* implicit */unsigned short) (_Bool)0);
                        /* LoopSeq 2 */
                        for (long long int i_6 = 1; i_6 < 16; i_6 += 3) 
                        {
                            var_20 &= var_2;
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (unsigned short)65514)) : (((/* implicit */int) ((unsigned char) (_Bool)0))))) & (((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) (_Bool)1))), (arr_13 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [(unsigned short)11])))))))));
                            var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0 + 1])))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (_Bool)1))));
                            arr_20 [i_1] = ((/* implicit */long long int) (unsigned short)65535);
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 2; i_7 < 17; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((unsigned char) var_2))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3] [i_2])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65529)) != (((/* implicit */int) arr_1 [i_2])))))));
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) var_3);
                            var_26 = ((_Bool) (short)-6276);
                        }
                        var_27 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (unsigned short)40474)) & (((/* implicit */int) (unsigned short)41781)))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            {
                                arr_31 [i_8] [i_8] [i_0] [i_2] [i_1] [i_1] [i_8] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) <= (max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63069))))))))));
                                var_28 = ((/* implicit */unsigned char) arr_1 [i_8]);
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */short) ((long long int) min(((_Bool)1), ((!((_Bool)1))))));
                }
            } 
        } 
    } 
}
