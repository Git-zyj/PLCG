/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111658
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_15))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1])))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)24623))))) || (((((/* implicit */int) var_12)) == (((/* implicit */int) var_15)))))))));
    }
    for (unsigned short i_1 = 3; i_1 < 19; i_1 += 1) 
    {
        var_21 *= ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_14))))))), (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            for (short i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                {
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) arr_11 [i_1 + 1] [i_2 - 1] [i_1 + 1] [17U])))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) var_19)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 3; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_1 - 2] [i_1 - 1] [i_2 + 1] [i_2 - 1])) / (((/* implicit */int) arr_20 [i_3] [i_3] [i_3 - 1] [(unsigned short)4] [(unsigned short)4] [i_3 + 1] [i_3]))))) ? (((var_13) & (((((/* implicit */_Bool) arr_18 [i_5] [(unsigned char)16] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= ((~(arr_13 [i_1] [i_1] [i_2 + 1] [i_3] [i_4] [i_2 + 1])))))))));
                                var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_20 [i_1] [i_3] [i_2 + 1] [i_4] [i_3] [i_3] [i_5])) ? (((/* implicit */int) arr_20 [i_1] [i_2] [i_2 + 1] [(short)8] [i_2] [i_5] [i_4])) : (((/* implicit */int) var_14)))) / (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24700)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))) : (2639911584U)))) && (((/* implicit */_Bool) var_11)))))));
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [(unsigned short)9] [i_2] [i_1 - 2] [i_4])) ? (((((/* implicit */int) var_18)) - ((+(((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_13) : (var_1)))) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))))))))));
                                var_25 += ((/* implicit */unsigned short) var_16);
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3 + 3] [i_1] [i_3 + 2] [i_4])) ? (((((/* implicit */_Bool) arr_11 [i_1] [(short)1] [i_3 - 1] [i_4])) ? (arr_11 [i_3] [i_2] [i_3 + 3] [17U]) : (arr_11 [i_1] [i_1] [i_3 + 2] [i_3 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (var_11)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 ^= ((/* implicit */unsigned short) min((((/* implicit */int) arr_4 [i_1 - 2])), ((+(((/* implicit */int) arr_4 [i_1 + 1]))))));
        arr_21 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_16) : (var_16)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_11))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))))) ? (max((((unsigned int) var_4)), (((/* implicit */unsigned int) var_15)))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) | (((/* implicit */int) var_9))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_11 [i_1 - 1] [i_1 - 3] [i_1 - 3] [i_1 - 1]), (var_5)))) ? ((-(arr_11 [i_1] [i_1 + 1] [i_1 - 2] [i_1]))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_16)))));
    }
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : ((-(var_1)))))) && (((/* implicit */_Bool) var_12))));
}
