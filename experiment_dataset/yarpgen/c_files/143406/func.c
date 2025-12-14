/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143406
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
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_1 + 4])))) & (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
                arr_5 [i_0] [i_1] = arr_2 [i_1];
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) max((var_18), (arr_10 [i_3] [i_3])));
            arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2] [(unsigned char)3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_11 [i_3] [i_2] [i_2]))));
        }
        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 3) 
        {
            arr_15 [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)163))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)245))))) : (((/* implicit */int) arr_14 [i_2]))));
            arr_16 [(unsigned char)11] [i_2] = arr_7 [i_2] [i_4 + 2];
            /* LoopSeq 3 */
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_14)) ? ((+(((/* implicit */int) (unsigned char)160)))) : (((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (unsigned char)153)))))) != (((/* implicit */int) min(((unsigned char)254), (((unsigned char) var_2)))))));
                var_20 = arr_11 [i_2] [i_2] [i_5];
            }
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
                {
                    arr_26 [i_6] [i_6] &= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)32))));
                    arr_27 [i_2] [i_2] [(unsigned char)0] [(unsigned char)6] [i_2] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        arr_32 [i_2] [i_2] [i_4 - 2] [i_2] [i_7] [i_8] [i_8] = arr_22 [i_2] [i_2] [i_7];
                        arr_33 [i_2] [i_4 + 3] [(unsigned char)10] [i_7] [i_2] = ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))));
                        arr_34 [i_2] [(unsigned char)7] [(unsigned char)7] [i_2] [(unsigned char)7] [i_7] [(unsigned char)7] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) arr_28 [(unsigned char)18] [(unsigned char)5] [i_4] [(unsigned char)5] [(unsigned char)18]))))));
                        var_21 = arr_18 [i_7];
                        var_22 = ((/* implicit */unsigned char) min((var_22), (arr_30 [i_2] [i_2] [i_4] [i_6] [i_6] [i_8] [i_8])));
                    }
                    arr_35 [(unsigned char)14] [i_4 - 2] [i_6] [i_2] [i_7] = ((unsigned char) var_11);
                }
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
                {
                    arr_40 [(unsigned char)9] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_14)) >> (((((/* implicit */int) arr_31 [i_4] [i_4 - 2] [(unsigned char)0] [i_4] [i_6])) - (163)))))));
                    arr_41 [i_2] [i_4 + 2] [i_6] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (unsigned char)241))))) ? (((((/* implicit */_Bool) arr_38 [(unsigned char)12] [(unsigned char)12] [i_6] [(unsigned char)12])) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned char)170)))) : ((+(((/* implicit */int) var_12)))))) | (((((/* implicit */int) (unsigned char)249)) ^ (((/* implicit */int) max((arr_20 [i_2] [i_6] [i_9]), ((unsigned char)98))))))));
                    arr_42 [i_2] [i_2] = min(((unsigned char)61), ((unsigned char)184));
                    arr_43 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)180))) ? (((/* implicit */int) arr_23 [(unsigned char)12] [i_4])) : (((((/* implicit */int) (unsigned char)136)) * (((/* implicit */int) var_16))))))) ? (((((/* implicit */int) arr_13 [i_4 + 2] [i_4 + 2])) / (((/* implicit */int) (unsigned char)73)))) : ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_36 [i_2] [i_2] [i_2] [(unsigned char)13])) : (((/* implicit */int) (unsigned char)184))))))));
                }
                /* vectorizable */
                for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
                {
                    arr_46 [i_6] [i_6] [i_6] [i_6] [i_2] = arr_24 [i_2] [i_4] [i_6] [i_2] [i_2];
                    arr_47 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_0))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_4 + 4] [i_4 + 3])) & (((/* implicit */int) arr_23 [i_4 + 4] [i_4 + 3])))))));
                    var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_2] [i_4 - 1] [i_6])) ? (((((/* implicit */_Bool) arr_28 [i_2] [i_2] [(unsigned char)17] [i_2] [i_2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)92)))) : (((/* implicit */int) (unsigned char)255))));
                }
                arr_48 [i_2] [i_2] [i_4] [(unsigned char)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_36 [i_4] [i_4 + 4] [i_4 + 4] [i_4 + 1])) : (((/* implicit */int) (unsigned char)7))));
            }
            for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)38)) ? (((((/* implicit */_Bool) arr_45 [i_2] [i_2] [i_11])) ? (((/* implicit */int) ((unsigned char) (unsigned char)224))) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) max(((unsigned char)55), (var_13)))) : (((/* implicit */int) (unsigned char)64))))));
                arr_51 [(unsigned char)18] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_37 [i_4] [(unsigned char)11] [(unsigned char)16] [i_4 - 2] [i_2] [i_2]))));
                var_26 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_2])) ? (((/* implicit */int) arr_11 [i_2] [i_11] [i_11])) : (((/* implicit */int) (unsigned char)7)))))));
            }
            arr_52 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] [i_4 + 4] [i_4] [(unsigned char)10])) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_15)) - (((/* implicit */int) var_11)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_37 [i_2] [i_2] [i_2] [i_2] [(unsigned char)13] [i_2])) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) (unsigned char)221)))) >= (((/* implicit */int) arr_9 [i_4])))))));
        }
        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_36 [i_2] [i_2] [i_12] [i_12])) ? (((/* implicit */int) arr_36 [i_2] [i_2] [i_12] [i_2])) : (((/* implicit */int) arr_30 [i_2] [i_2] [i_2] [i_2] [(unsigned char)15] [i_12] [i_12])))) | (((/* implicit */int) var_17)))))));
            var_28 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_44 [i_2] [i_12] [i_12] [(unsigned char)10]))));
        }
        var_29 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_37 [i_2] [i_2] [i_2] [i_2] [(unsigned char)10] [i_2])) + (((/* implicit */int) arr_22 [i_2] [i_2] [i_2])))), ((-(((/* implicit */int) arr_10 [i_2] [i_2]))))));
    }
    var_30 ^= var_12;
}
