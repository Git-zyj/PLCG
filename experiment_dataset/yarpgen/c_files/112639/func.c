/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112639
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)46)))) : (((/* implicit */int) min((var_10), ((unsigned char)13)))))))))));
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((((((/* implicit */int) (unsigned char)179)) != (((/* implicit */int) (unsigned char)208)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_13)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((unsigned char) (+(((/* implicit */int) ((unsigned char) (unsigned char)179)))));
        var_17 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)0))));
    }
    for (unsigned char i_1 = 4; i_1 < 19; i_1 += 4) 
    {
        var_18 = (unsigned char)6;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) > (((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))));
            /* LoopSeq 3 */
            for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    arr_16 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)143)) == (((/* implicit */int) (unsigned char)60))));
                    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_1 - 2] [i_3 + 1] [i_3] [i_4] [(unsigned char)17]))));
                    var_21 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_12 [i_1] [i_1] [i_3] [i_4] [i_4]))))));
                }
                for (unsigned char i_5 = 1; i_5 < 21; i_5 += 4) 
                {
                    arr_19 [i_1] [(unsigned char)7] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)0))));
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        var_22 = ((unsigned char) (unsigned char)219);
                        arr_22 [i_1] [i_3 + 1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_5 + 1]))));
                        arr_23 [i_1] [(unsigned char)11] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) >= (((/* implicit */int) (unsigned char)142)))) ? (((/* implicit */int) arr_17 [i_3] [(unsigned char)17] [i_3] [i_3 - 2])) : (((/* implicit */int) (unsigned char)238))));
                    }
                    for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_24 [i_5] [i_2] [i_7] [i_5])))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_1] [i_3 - 2])) ^ (((/* implicit */int) arr_10 [i_5] [i_3])))))));
                        arr_28 [i_7] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)244))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0)))))));
                        var_25 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_30 [i_8] [i_8] [i_3] [i_8] [i_8]))));
                        arr_31 [i_1] [i_2] [i_3 - 2] [i_2] [i_8] [i_1 + 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_1]))));
                    }
                }
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    arr_34 [i_2] [i_2] [i_3] [(unsigned char)2] [i_3] [i_3] |= arr_13 [i_1] [i_1] [i_3] [i_2];
                    arr_35 [i_9] [i_3] [i_2] [i_1 - 3] [i_1 - 3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)135)) > (((/* implicit */int) (unsigned char)71))));
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1]))))))))));
                    var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_1 - 3]))));
                    var_28 = (unsigned char)20;
                }
                var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
                var_30 -= ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)219)) & (((/* implicit */int) (unsigned char)21))))));
                arr_36 [i_1] [i_2] [i_3 - 1] |= ((unsigned char) (+(((/* implicit */int) arr_12 [i_1] [i_2] [(unsigned char)10] [i_1] [i_1]))));
            }
            for (unsigned char i_10 = 2; i_10 < 21; i_10 += 2) /* same iter space */
            {
                arr_40 [i_1] [i_10 - 2] [i_10] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_1] [i_2] [i_2] [i_10 + 1] [i_10])) ? (((/* implicit */int) ((unsigned char) arr_29 [i_1]))) : (((/* implicit */int) ((unsigned char) arr_38 [i_2] [i_2] [i_2])))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    for (unsigned char i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_7 [i_1] [i_2])))));
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((unsigned char) arr_25 [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 1] [i_1]))));
                            var_33 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1 - 1])) || (((/* implicit */_Bool) arr_9 [i_1 - 3] [i_1 + 2]))));
                            var_34 = (unsigned char)169;
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_33 [i_1 - 3] [i_1 - 3]))));
                arr_46 [i_10 - 1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_45 [i_10 - 2] [i_1 + 2] [i_10] [i_1] [i_10]))));
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2] [i_2] [i_1 + 3]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255)))))));
            }
            for (unsigned char i_13 = 2; i_13 < 21; i_13 += 2) /* same iter space */
            {
                arr_50 [i_1] [i_1] [i_13 + 1] [i_13 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) >> (((/* implicit */int) (unsigned char)6))));
                var_37 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)123)))))));
                var_38 ^= arr_43 [i_13] [(unsigned char)16] [i_13 - 2] [i_13 + 1] [i_1 - 2];
                var_39 ^= (unsigned char)0;
            }
            arr_51 [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_2] [i_1] [i_2] [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_42 [i_2] [i_2] [(unsigned char)0] [i_2] [i_1 - 2])) : (((/* implicit */int) arr_42 [i_2] [i_1 - 1] [i_2] [i_2] [i_1 - 1]))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            arr_54 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_33 [i_14] [i_1]))) * (((((/* implicit */_Bool) arr_44 [i_1 - 2] [i_1 - 2] [i_1] [i_14] [i_14])) ? (((/* implicit */int) (unsigned char)28)) : ((~(((/* implicit */int) arr_5 [i_1]))))))));
            var_40 = (unsigned char)150;
            arr_55 [i_1] [i_14] [i_14] = (unsigned char)16;
            var_41 = ((unsigned char) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) arr_53 [i_1] [i_1] [i_1])))));
        }
    }
    for (unsigned char i_15 = 1; i_15 < 17; i_15 += 1) 
    {
        var_42 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)0)))) != ((~(((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) arr_32 [i_15] [i_15 + 1] [i_15 + 1] [i_15 + 3] [i_15 + 2]))))))));
        var_43 -= ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_15] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned char)2))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)0))) : (((/* implicit */int) (unsigned char)0))));
        var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_15]))) ? (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (unsigned char)192)))))) : ((+(((/* implicit */int) var_5)))))))));
    }
}
