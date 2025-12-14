/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120451
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) max((((((((/* implicit */int) var_6)) - (((/* implicit */int) var_7)))) - (((/* implicit */int) arr_2 [i_0 - 1])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0] [i_0 + 2]))))));
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (~(min(((~(((/* implicit */int) (signed char)15)))), (((((/* implicit */int) (unsigned short)39305)) ^ (((/* implicit */int) (unsigned char)81)))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60676)) ? (((/* implicit */int) arr_4 [i_0 + 2] [i_0] [i_0 + 2])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 1])) & (((/* implicit */int) var_3))))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    arr_11 [i_0] &= ((/* implicit */unsigned char) var_6);
                    arr_12 [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-612)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)611)))))));
                }
                for (unsigned short i_4 = 2; i_4 < 10; i_4 += 1) 
                {
                    var_12 *= arr_3 [i_4 + 2] [i_4];
                    var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_0 + 2] [i_2] [i_2] [i_4 + 3] [i_0 + 2] [i_4]))));
                }
                var_14 -= ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_0 - 1]))));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    var_15 &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_5] [i_2] [i_0 + 1])) : (((/* implicit */int) arr_16 [i_0] [i_0 + 2]))))));
                    var_16 = arr_16 [i_0 - 1] [i_0 + 2];
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_0 + 1])) : (((/* implicit */int) arr_15 [i_0 + 1] [i_1] [i_2]))));
                }
            }
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_13 [i_6] [i_6])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_17 [i_0]))))));
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_5 [i_0 - 1])) : (((/* implicit */int) var_3))));
                    var_20 = ((/* implicit */_Bool) var_8);
                    arr_22 [i_0] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) arr_7 [i_0 + 1])) : (((/* implicit */int) (unsigned char)168))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned short) var_3)))));
                }
                for (unsigned short i_8 = 2; i_8 < 11; i_8 += 1) 
                {
                    var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_20 [i_0] [i_0 + 1] [i_8 + 2] [i_8 - 1]))));
                    arr_25 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_8] = ((/* implicit */unsigned char) var_2);
                }
                arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0 + 2])) | (((/* implicit */int) (signed char)-14))));
            }
        }
        /* LoopSeq 3 */
        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            arr_31 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_0] [i_9]))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min((arr_23 [i_0 + 2] [i_9] [i_0]), ((unsigned char)168))))))) ? (((/* implicit */int) min((((/* implicit */short) var_8)), ((short)0)))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_5 [i_0 + 1]))))))));
            var_23 = ((/* implicit */unsigned short) arr_3 [i_9] [i_0 + 1]);
        }
        for (short i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_10 [i_10])), ((unsigned char)219)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (arr_32 [i_0] [i_10])))) : (((/* implicit */int) var_7))))));
            /* LoopSeq 1 */
            for (signed char i_11 = 1; i_11 < 12; i_11 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    var_25 = ((/* implicit */unsigned char) (signed char)14);
                    arr_38 [i_12] [i_11] [i_10] [i_0] &= arr_29 [i_0];
                }
                var_26 *= ((/* implicit */signed char) max((min((arr_21 [i_0 + 1] [i_10] [i_11] [i_10] [i_11 - 1]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)60803)) && (((/* implicit */_Bool) arr_21 [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0 + 2]))))))), (((/* implicit */unsigned short) ((signed char) min(((unsigned char)207), (arr_14 [i_11] [i_0 + 2] [i_10] [i_0 + 2] [i_10] [i_0 + 2])))))));
                arr_39 [i_0] [i_0] [i_11 + 1] = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                arr_40 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) var_5)) & (((/* implicit */int) var_6)))), (((/* implicit */int) var_9))));
                arr_41 [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)50557)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned char) arr_21 [i_0] [i_0] [i_10] [i_10] [i_11])))))));
            }
            arr_42 [i_10] [i_0] = ((/* implicit */signed char) ((unsigned char) ((unsigned char) (unsigned short)30996)));
        }
        for (unsigned char i_13 = 1; i_13 < 12; i_13 += 4) 
        {
            var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */int) arr_16 [i_0 - 1] [i_13 + 1])) / (((/* implicit */int) arr_21 [i_0 - 1] [i_0 - 1] [i_13] [i_13] [i_13 - 1])))) : (((/* implicit */int) arr_16 [i_0 + 1] [i_13 + 1]))));
            arr_45 [i_0 + 2] &= ((/* implicit */signed char) arr_17 [i_13]);
            arr_46 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) | (((((/* implicit */_Bool) arr_15 [i_0] [i_13 + 1] [i_13 + 1])) ? (((/* implicit */int) arr_15 [i_13] [i_13] [i_0 + 2])) : (((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1] [i_13 + 1]))))));
            arr_47 [i_0] [i_0] = ((/* implicit */signed char) ((var_0) || (((/* implicit */_Bool) ((short) arr_24 [(unsigned char)0] [i_13 + 1] [(unsigned char)0] [i_0 + 2] [(unsigned char)0] [(unsigned char)0])))));
            arr_48 [i_13 - 1] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_8 [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 + 1])) - (((/* implicit */int) arr_8 [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13 + 1]))))));
        }
        arr_49 [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_0)), (arr_35 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) (short)0)))))) ? (min((((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_44 [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_1 [i_0 - 1])))) : ((-(((/* implicit */int) arr_44 [i_0 - 1] [i_0 + 1] [i_0 - 1]))))));
    }
    var_28 = var_7;
    var_29 = ((/* implicit */unsigned short) var_3);
    var_30 = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))))));
}
