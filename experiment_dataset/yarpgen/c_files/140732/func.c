/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140732
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_16 = arr_3 [i_0] [i_1 + 1] [i_0];
            arr_6 [i_0] = arr_1 [i_0];
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                var_17 = arr_9 [i_0] [i_0] [i_0] [i_2];
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    var_18 += ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_3]);
                    var_19 = ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_3]);
                    arr_12 [i_0] [i_1 + 1] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) ((max(((+(((/* implicit */int) arr_1 [i_2])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_11 [i_0] [i_1 + 1] [i_0] [i_0] [i_0]))))))) * (min((((((/* implicit */_Bool) 4004124325U)) ? (((/* implicit */int) (short)6513)) : (((/* implicit */int) (short)-6514)))), ((~(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))));
                    arr_13 [i_0] [i_0] [i_0] [i_3] = (~(((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_11 [i_0] [i_0] [i_0] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))) : (arr_11 [i_0] [i_1] [i_0] [i_3] [i_2]))));
                    var_20 = ((/* implicit */short) ((arr_10 [i_3] [i_1 + 1] [i_2] [i_2] [i_1 + 1]) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0])))))));
                }
                var_21 += ((/* implicit */short) ((((((((/* implicit */int) (short)-6513)) | (((/* implicit */int) (short)-6484)))) + (2147483647))) >> (((/* implicit */int) max((arr_8 [i_1 + 1] [i_1 + 1] [i_2]), (arr_8 [i_1 + 1] [i_1 + 1] [i_2]))))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    arr_20 [i_5] [i_5] [i_4] [i_5] &= ((/* implicit */unsigned int) arr_8 [i_1 + 1] [i_1 + 1] [i_5]);
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        arr_23 [i_0] [i_0] [i_4] [i_5] [i_6] = ((/* implicit */short) arr_8 [i_1 + 1] [i_5] [i_0]);
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((((/* implicit */int) arr_21 [i_0] [i_4] [i_5])) + (2147483647))) << (((((((/* implicit */int) arr_21 [i_1] [i_5] [i_6])) + (29080))) - (4))))))));
                        var_23 = ((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_0 [i_0]))))) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_15 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))))));
                        var_24 = arr_4 [i_0];
                        arr_24 [i_0] [i_1] [i_5] [(short)12] [i_6] [i_0] = ((/* implicit */unsigned int) arr_19 [i_6] [i_5] [i_4] [i_0]);
                    }
                }
                for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    var_25 ^= arr_3 [i_1] [i_1] [i_4];
                    arr_28 [i_7] [i_7] [i_4] [i_7] [i_4] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_7]))))) ? (((/* implicit */int) arr_25 [i_7] [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((((/* implicit */int) (short)6)) | (((/* implicit */int) (short)32760))))));
                    var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_1 + 1] [i_1 + 1]))));
                }
                var_27 = arr_9 [i_4] [i_0] [i_0] [i_0];
            }
        }
        for (short i_8 = 2; i_8 < 13; i_8 += 2) 
        {
            arr_31 [i_0] [i_8] [i_8] = min((arr_11 [i_8] [i_0] [i_0] [i_0] [i_0]), ((~(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_15 [i_0] [i_8 - 1]), (((/* implicit */unsigned int) arr_27 [i_8 + 1] [i_8 + 1] [i_8] [i_8 - 2]))))) ? (((/* implicit */int) (!((!(arr_8 [i_0] [i_8 + 1] [i_0])))))) : (((/* implicit */int) (!(((arr_8 [i_0] [i_0] [i_0]) || (((/* implicit */_Bool) arr_30 [i_0] [i_0])))))))));
            var_29 = ((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_8 + 1] [i_8]);
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) arr_9 [i_8 - 1] [i_8] [i_8] [i_8]))));
        }
        for (short i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            arr_35 [i_0] [i_9] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0])))), (((/* implicit */int) arr_5 [i_0]))));
            var_31 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_29 [i_0] [i_9] [i_0]))));
            var_32 ^= ((/* implicit */short) max((((/* implicit */int) min((arr_25 [i_9] [(short)0] [i_9] [i_9]), (max((arr_1 [i_0]), (arr_7 [i_9] [i_9] [i_9] [i_0])))))), (max((((/* implicit */int) max(((short)-6515), ((short)(-32767 - 1))))), ((((_Bool)1) ? (((/* implicit */int) (short)-16392)) : (((/* implicit */int) (short)13))))))));
            arr_36 [i_0] [i_9] |= ((/* implicit */unsigned int) ((max((arr_32 [i_9] [i_0]), (arr_32 [i_0] [i_0]))) ? (((((/* implicit */int) arr_32 [i_0] [i_9])) ^ (((/* implicit */int) arr_32 [i_0] [i_0])))) : (((/* implicit */int) min((arr_33 [i_9]), (arr_33 [i_9]))))));
            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) max((((/* implicit */int) max((arr_21 [i_0] [i_9] [i_9]), (((/* implicit */short) max((arr_32 [i_9] [(short)4]), (arr_8 [i_0] [i_0] [i_9]))))))), (((((((/* implicit */int) arr_30 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_30 [i_0] [i_9])) + (30602))))))))));
        }
        for (short i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            var_34 |= ((/* implicit */unsigned int) arr_4 [i_10]);
            arr_41 [i_0] [i_0] [i_10] |= max((max((((/* implicit */short) arr_34 [i_0] [i_10])), (arr_5 [i_10]))), (((/* implicit */short) (!(arr_8 [i_0] [i_10] [i_10])))));
        }
        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (+(((/* implicit */int) min(((short)(-32767 - 1)), ((short)32757)))))))));
    }
    var_36 += ((/* implicit */short) var_6);
}
