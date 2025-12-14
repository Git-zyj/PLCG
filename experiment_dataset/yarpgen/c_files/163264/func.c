/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163264
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    arr_11 [i_2] = ((/* implicit */int) 65535U);
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_19 = min((((/* implicit */int) arr_12 [i_0] [i_0] [(unsigned short)11] [i_0])), (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)72)))))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_6 [i_3]))));
                        var_21 = ((/* implicit */unsigned short) arr_3 [i_0] [(unsigned char)5]);
                        var_22 |= ((/* implicit */int) (unsigned short)25847);
                    }
                }
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_4] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 + 1] [i_0] [i_0] [i_0]))) : (arr_0 [i_1 - 2] [i_1 - 2])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * ((-(((/* implicit */int) (unsigned short)2066))))))) : (((((/* implicit */_Bool) 4294901767U)) ? (65528U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16874))))));
                    var_24 = ((/* implicit */unsigned short) ((unsigned char) 4294901768U));
                    var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294901781U)) ? (((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1]))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) arr_8 [i_1 + 1] [i_1] [i_1 - 2])) : (var_10)))));
                    var_26 ^= ((/* implicit */unsigned char) arr_8 [i_0] [i_4] [i_0]);
                    arr_17 [i_0] [i_0] [i_0] = arr_2 [i_1];
                }
                for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    var_27 |= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5] [i_0])) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) arr_18 [(short)11] [(short)8] [i_5]))))) ? (((/* implicit */int) ((4294901781U) != (((/* implicit */unsigned int) -1064648873))))) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 2])))));
                    arr_20 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_0))) ? (min((min((var_10), (((/* implicit */unsigned int) arr_1 [(unsigned short)8])))), (((/* implicit */unsigned int) (-(arr_13 [i_0] [i_0] [i_1] [i_1])))))) : (4294901768U)));
                    var_28 = ((/* implicit */int) var_3);
                    var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)13559))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1 - 1])))))) ? (((((/* implicit */_Bool) arr_15 [i_0] [(unsigned short)1] [i_1 - 1])) ? ((-(arr_15 [i_5] [i_1] [i_0]))) : (((/* implicit */unsigned int) (-(arr_14 [i_0] [i_1] [9U] [i_5])))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65024)))))));
                }
                for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        arr_29 [(unsigned char)10] [i_6] [(short)8] [i_0] [i_0] = ((/* implicit */unsigned short) var_6);
                        var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)241))));
                        arr_30 [i_0] [i_1 - 2] [i_0] [i_1 - 2] [i_7] [5] = ((/* implicit */unsigned short) arr_25 [(short)3] [(short)3] [i_7]);
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)16)) >= (((/* implicit */int) max(((unsigned short)20545), (((/* implicit */unsigned short) var_0))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_24 [i_0] [i_9] [(short)9])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))) : (min((arr_13 [(unsigned char)9] [(unsigned char)9] [i_8] [i_1 - 2]), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_22 [i_0] [i_6] [i_8] [i_9])))))))));
                                var_32 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_12 [(_Bool)1] [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)192)))));
                            }
                        } 
                    } 
                }
                var_33 = var_4;
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned int) var_6);
    var_35 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1)) && (max(((!(((/* implicit */_Bool) 718555148U)))), (((((/* implicit */int) var_7)) <= (((/* implicit */int) var_16))))))));
    var_36 = ((/* implicit */int) var_10);
}
