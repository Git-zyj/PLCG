/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114356
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
    for (int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) var_13);
                var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_1] [23U]))))) ? (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned short)52931)))) : ((-(((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [(_Bool)1])) : (((/* implicit */int) arr_3 [i_0] [i_0 + 1])))) : ((((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_17)))) / (((((/* implicit */_Bool) var_11)) ? (-580946463) : (((/* implicit */int) var_17))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_2] [(short)16] |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)41694)) ? (((/* implicit */int) min(((_Bool)1), (arr_5 [i_0] [i_1] [i_2])))) : (806845895)))));
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (-1128007973))) : (((((/* implicit */_Bool) var_8)) ? (var_0) : (var_3)))))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [(_Bool)1])) ? (var_16) : (((((/* implicit */_Bool) min((2147483647), (((/* implicit */int) arr_0 [i_1] [i_3]))))) ? (((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_1] [i_1] [(unsigned char)2])))) : (((/* implicit */int) max((arr_6 [i_2] [5U] [i_2]), (arr_1 [i_0]))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) 718188338U);
                        var_24 -= ((/* implicit */short) (unsigned short)23842);
                        arr_15 [i_0 + 1] [i_1] [i_2] [i_4] = (+(arr_9 [i_0] [i_2] [20U] [i_4]));
                    }
                    for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1729382256910270464ULL)) ? (((/* implicit */int) (_Bool)0)) : (var_4))), ((+(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */int) min((arr_3 [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0])))) ^ (((/* implicit */int) ((unsigned char) (_Bool)0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_13)))))))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((1498233552) ^ (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_14 [(unsigned short)22] [i_2] [i_1] [i_0]))))))) > ((~(max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_6))))))));
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            arr_22 [(short)19] [i_5] [i_5] [(short)19] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_19)))) ? (((/* implicit */int) ((_Bool) min((arr_13 [i_0] [i_0] [i_2] [i_5] [i_5] [6U]), (((/* implicit */unsigned long long int) var_19)))))) : (var_16)));
                            var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_20 [(unsigned char)7] [i_5] [i_5] [i_5] [i_2] [i_1] [(unsigned short)12])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0])))) : (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_21 [i_6] [i_5] [i_2] [i_5] [i_0]))))))) ? (arr_13 [i_0 - 1] [i_0 - 1] [i_2] [i_1] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min(((unsigned short)5356), (((/* implicit */unsigned short) arr_1 [i_1]))))) >= (((/* implicit */int) arr_5 [i_5] [i_2] [i_1])))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            var_28 = (!((!(((/* implicit */_Bool) (~(arr_8 [i_1] [i_7])))))));
                            arr_25 [(short)19] [i_5] [i_5] [i_5] [(short)19] [(short)19] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)23833)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)41702))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_0] [i_7])), (var_13)))) ? ((((_Bool)0) ? (((/* implicit */int) var_5)) : (702979924))) : (((((/* implicit */_Bool) var_8)) ? (var_15) : (var_0)))))) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_7])) : (var_15)));
                        }
                        for (int i_8 = 1; i_8 < 23; i_8 += 2) 
                        {
                            arr_29 [i_5] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22612)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 2]))) - (arr_27 [i_0 - 1] [i_1] [i_2] [i_5] [i_8]))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_28 [i_0] [i_8 - 1] [i_0] [i_5] [i_8] [i_8 - 1])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_5])))))))));
                            var_31 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0] [(short)11] [i_0])) ^ (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (((unsigned int) var_0)))), (((/* implicit */unsigned int) ((unsigned short) ((var_4) & (((/* implicit */int) (unsigned short)30242))))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_9 - 1] [i_9 - 1])))))));
                        var_33 |= ((/* implicit */unsigned long long int) ((((var_12) || (((/* implicit */_Bool) arr_30 [(unsigned char)7] [i_1] [14ULL] [i_9 - 1] [(unsigned char)7])))) ? (((/* implicit */int) arr_28 [i_0] [i_0 - 1] [i_1] [i_0 - 1] [i_2] [i_9])) : (((((/* implicit */_Bool) (unsigned short)19307)) ? (((/* implicit */int) arr_30 [i_0] [(_Bool)1] [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) var_5))))));
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (-(arr_8 [i_2] [i_1]))))));
                    }
                }
                arr_34 [i_1] = ((/* implicit */int) var_7);
                var_35 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((((_Bool)1) ? (arr_13 [i_0] [23U] [i_0 + 1] [i_1] [(_Bool)1] [i_1]) : (10310619544086231805ULL)))))) ? ((~(((/* implicit */int) (_Bool)0)))) : ((~(max((var_0), (((/* implicit */int) var_6))))))));
            }
        } 
    } 
    var_36 = ((/* implicit */short) var_11);
    var_37 = ((/* implicit */unsigned long long int) 718188338U);
}
