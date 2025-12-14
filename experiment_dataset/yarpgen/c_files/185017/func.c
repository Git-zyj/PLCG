/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185017
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
    var_17 = ((_Bool) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9))));
    var_18 = var_1;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0 + 1] [i_2])) | (((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) & (((/* implicit */int) (_Bool)1))))));
                    var_20 ^= ((_Bool) ((_Bool) arr_9 [i_0] [i_1] [i_0 + 1] [(_Bool)1]));
                }
            } 
        } 
        var_21 = ((_Bool) arr_2 [i_0 + 1]);
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_22 ^= ((_Bool) ((_Bool) max(((_Bool)1), ((_Bool)1))));
                    var_23 = ((/* implicit */_Bool) ((((_Bool) arr_13 [i_0] [i_3] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) arr_9 [(_Bool)1] [i_0] [i_0 + 1] [i_3])))));
                    arr_17 [i_0 + 1] [i_0 + 1] [i_0] [i_3] [i_0] = arr_1 [i_0] [(_Bool)1];
                    var_24 = (_Bool)1;
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_22 [i_0] [i_3] [i_3] [i_3] = max(((_Bool)1), (((_Bool) arr_16 [i_3] [(_Bool)1] [i_0 + 1] [i_0] [i_0] [i_0 + 1])));
                    arr_23 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] [(_Bool)1] = (_Bool)1;
                    var_25 = arr_12 [i_0] [i_3];
                    var_26 *= ((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0 + 1]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        arr_26 [i_0 + 1] [i_3] [i_4] [i_6] [i_7] [i_6] [i_0 + 1] = ((/* implicit */_Bool) ((min((((/* implicit */int) (!(arr_19 [i_3] [i_4] [i_3] [i_3])))), (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_16 [i_3] [(_Bool)0] [(_Bool)1] [i_6] [i_4] [i_6])))))) | (((/* implicit */int) ((_Bool) (_Bool)1)))));
                        var_27 = min(((!(((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) arr_10 [(_Bool)1] [i_4])) : (((/* implicit */int) (_Bool)0))))))), (((_Bool) (_Bool)1)));
                        var_28 = arr_15 [i_4];
                        var_29 = ((/* implicit */_Bool) (((((~(((((/* implicit */int) arr_7 [i_7 + 1])) << (((/* implicit */int) (_Bool)0)))))) + (2147483647))) >> (((/* implicit */int) ((_Bool) (_Bool)1)))));
                    }
                }
                arr_27 [(_Bool)1] [i_3] [i_3] = ((_Bool) (!(max((arr_13 [i_0] [(_Bool)1] [(_Bool)1]), (arr_1 [i_0 + 1] [i_3])))));
                var_30 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_15 [(_Bool)1]))))));
            }
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_31 = arr_8 [i_0] [i_0];
                    var_32 &= ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_7 [i_9]))))));
                    /* LoopSeq 4 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_35 [i_0 + 1] [i_3] [i_8] [i_9] [i_10] = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_34 [i_0] [(_Bool)1] [i_8] [(_Bool)1] [i_10] [(_Bool)1]))))));
                        arr_36 [i_3] [i_9] [i_8] [i_3] [i_3] = ((/* implicit */_Bool) ((arr_33 [i_0 + 1] [(_Bool)1] [i_0 + 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_33 [i_0 + 1] [i_0] [i_0 + 1]))));
                    }
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_0] [i_3] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3] [i_11 - 1])) >> (((/* implicit */int) var_12))));
                        var_33 = ((_Bool) (_Bool)1);
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [(_Bool)1] [i_12] [(_Bool)0] [(_Bool)0] &= ((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))));
                        var_34 = ((/* implicit */_Bool) ((arr_37 [i_12] [i_12 - 1] [(_Bool)1] [i_3] [(_Bool)1]) ? (((/* implicit */int) arr_37 [i_8] [i_12 - 1] [i_12] [i_3] [i_12])) : (((/* implicit */int) arr_40 [i_9] [i_12 - 1] [i_12 - 1] [i_3] [i_9] [i_12] [i_12 - 1]))));
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        arr_49 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_25 [i_13 - 1] [i_13 - 1] [i_13 - 1])))))));
                        arr_50 [i_0] [i_3] [i_8] [i_9] [(_Bool)1] = (_Bool)1;
                        arr_51 [i_3] [i_9] [i_8] [i_3] = arr_42 [i_0] [i_3] [i_0] [(_Bool)1] [i_13 - 1] [i_0];
                        var_35 ^= ((/* implicit */_Bool) ((arr_4 [i_13 - 1] [i_13 - 1] [i_13 - 1]) ? (((/* implicit */int) arr_4 [i_13 - 1] [i_13 - 1] [i_13 - 1])) : (((/* implicit */int) (_Bool)1))));
                        var_36 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0 + 1] [(_Bool)0] [i_0 + 1] [(_Bool)1])) / (((/* implicit */int) (_Bool)1))));
                    }
                }
                var_37 = (!((!((_Bool)1))));
            }
            var_38 = ((/* implicit */_Bool) min((var_38), ((_Bool)1)));
        }
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_39 |= ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (_Bool)1)))));
                var_40 ^= (!(((/* implicit */_Bool) ((((/* implicit */int) arr_54 [(_Bool)1] [i_14])) & (((/* implicit */int) arr_13 [i_0] [i_0] [i_15]))))));
                var_41 &= ((/* implicit */_Bool) ((arr_15 [i_0 + 1]) ? (((/* implicit */int) arr_6 [i_14] [i_0 + 1] [i_0])) : (((/* implicit */int) (_Bool)1))));
                var_42 -= (_Bool)1;
                arr_57 [i_0] [i_14] [i_15] = arr_56 [i_0] [(_Bool)1] [(_Bool)1] [i_15];
            }
            arr_58 [i_0] = ((/* implicit */_Bool) (((((~(((/* implicit */int) arr_18 [i_0 + 1] [i_0 + 1] [i_14] [(_Bool)1])))) + (2147483647))) >> ((((~(((/* implicit */int) arr_12 [i_14] [i_14])))) + (18)))));
            arr_59 [i_0] [i_14] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_52 [i_0 + 1]))));
        }
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (_Bool)1)))))) ? (((/* implicit */int) min((arr_25 [i_0 + 1] [i_0] [(_Bool)0]), (arr_25 [i_0 + 1] [(_Bool)1] [i_16 + 1])))) : (((/* implicit */int) (_Bool)1)))))));
            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_13 [i_0] [i_0] [i_16]))))) < ((-(((/* implicit */int) arr_24 [i_0] [i_0] [i_0 + 1] [i_0] [(_Bool)1]))))))), ((-(((/* implicit */int) arr_20 [(_Bool)0] [(_Bool)0] [(_Bool)1] [i_16])))))))));
        }
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_45 = (_Bool)1;
        arr_66 [i_17] = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_14 [i_17] [i_17] [i_17])))), (((/* implicit */int) ((((/* implicit */int) arr_25 [(_Bool)1] [(_Bool)1] [i_17])) <= (((/* implicit */int) arr_19 [i_17] [i_17] [(_Bool)1] [i_17])))))));
        var_46 = ((/* implicit */_Bool) (~(((/* implicit */int) max(((_Bool)1), ((_Bool)0))))));
        var_47 = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_0 [i_17] [i_17])))));
        var_48 &= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
    }
}
