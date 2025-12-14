/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149209
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (unsigned char)2))));
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (1534909301U))))))) ? (max((1944554399U), (((/* implicit */unsigned int) -949302063)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31575)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] &= arr_2 [i_0];
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_13 ^= ((/* implicit */int) max((((unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (((/* implicit */unsigned long long int) ((_Bool) (~(var_6)))))));
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)50717)) >> (((949302062) - (949302050)))))))))))));
                        }
                        var_15 = ((/* implicit */short) max((((unsigned long long int) max((((/* implicit */int) arr_6 [i_0] [8] [1] [i_3])), (var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])), (var_4)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_11 [i_1] [i_1]))))))));
                        var_16 = ((/* implicit */unsigned char) arr_11 [i_0] [i_0]);
                        var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((min((18446744073709551608ULL), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_1])))), (((/* implicit */unsigned long long int) arr_5 [(unsigned short)0] [(unsigned short)0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)231)))))))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_13 [5] [i_2] [5] [i_2] [(short)7] [5] [i_2]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29765)) ? (((/* implicit */int) (short)-7014)) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)7993))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26790))) : (var_5)))) ? (((((/* implicit */int) arr_5 [i_6] [i_6] [(short)3])) / (((/* implicit */int) (unsigned short)16750)))) : (((((/* implicit */int) (short)-2483)) / (25)))));
                            arr_21 [i_0] [i_1] [i_0] [i_1] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 15971170142498758076ULL)) ? (arr_20 [i_0] [i_1 - 3] [9U] [i_1 - 3] [(unsigned char)7] [i_6]) : (arr_20 [(unsigned short)6] [i_1 - 4] [i_6] [i_6] [i_6] [i_6])));
                            arr_22 [i_0] [i_0] [i_2] [i_0] [i_0] [(unsigned short)3] = (((-(var_2))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_6)))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0] [i_2] [i_2] [i_7] [i_0])) && (((/* implicit */_Bool) arr_16 [(unsigned short)3]))));
                            arr_26 [(unsigned char)3] [i_1 + 1] [(unsigned char)3] [(unsigned char)3] [i_7] |= (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))));
                            var_20 = ((arr_7 [i_7] [5U] [i_2] [i_1]) * (((/* implicit */int) arr_24 [i_0] [i_0] [(_Bool)1] [i_5] [i_0] [i_5])));
                        }
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            arr_30 [9U] [i_2] [9U] [i_8] = ((/* implicit */_Bool) (-(1377893562)));
                            var_21 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0]);
                        }
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)0] = var_4;
                        var_22 *= ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_12 [(unsigned char)2] [i_1] [(unsigned char)2] [i_1]))))));
                        var_23 += ((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_0]));
                        arr_32 [4ULL] [4ULL] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)181))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31575))))) : (((/* implicit */int) var_7))));
                    }
                    for (unsigned char i_9 = 3; i_9 < 8; i_9 += 1) 
                    {
                        var_24 = ((((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) arr_33 [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) ((15273376722780500555ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4080)))))) : (((/* implicit */int) (unsigned char)60)))));
                        var_25 = ((/* implicit */int) (((~(max((arr_15 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_7 [(short)2] [i_1] [i_1] [i_1])))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)8])))));
                    }
                    arr_35 [(unsigned short)7] [i_1] [i_0] = ((/* implicit */short) (-((~(arr_34 [i_1])))));
                }
            } 
        } 
    } 
}
