/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131107
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
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0 - 1] |= ((signed char) (signed char)48);
        var_12 += ((signed char) (!(((/* implicit */_Bool) var_10))));
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            var_13 += (signed char)-16;
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-(((/* implicit */int) var_5)))))));
            var_15 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_7)))));
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        {
                            arr_13 [i_4] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_3 + 2] [i_2] [i_2] [i_2] [i_2] [(signed char)14] [i_3])) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_1 - 2] [i_1] [i_2 + 2])) : (((((/* implicit */int) (signed char)17)) >> (((/* implicit */int) var_9))))));
                            arr_14 [i_0 - 1] [i_4] [i_4] = ((signed char) var_0);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (signed char i_6 = 2; i_6 < 17; i_6 += 2) 
                    {
                        {
                            arr_21 [i_2] [i_5] [i_2] [i_1] [i_1] [i_0 + 1] = (signed char)-50;
                            arr_22 [i_0] [i_0] [i_1] [i_2] [i_5] [i_5] [i_6] = ((signed char) arr_9 [i_0 + 1] [i_0 + 1] [i_6 - 1] [i_6] [(signed char)16]);
                            arr_23 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] = (signed char)10;
                        }
                    } 
                } 
                arr_24 [(signed char)10] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)101)))))));
            }
            for (signed char i_7 = 1; i_7 < 17; i_7 += 4) 
            {
                arr_27 [i_7] [i_7] = ((signed char) ((signed char) var_3));
                arr_28 [i_7] [i_1] [i_1] [i_1] = var_8;
            }
            arr_29 [i_0] = var_3;
        }
        for (signed char i_8 = 1; i_8 < 16; i_8 += 1) 
        {
            arr_34 [i_0] [i_8 + 2] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
            arr_35 [i_0] [i_0 + 1] [i_8] = ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)89))))));
        }
        for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            var_16 += ((signed char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
            /* LoopSeq 1 */
            for (signed char i_10 = 1; i_10 < 16; i_10 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_11 = 3; i_11 < 18; i_11 += 1) 
                {
                    arr_42 [i_0] [i_9] [i_10] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_0))));
                    arr_43 [i_0] [i_0] [i_10] [i_11 - 1] = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
                    arr_44 [i_0] [i_9] [i_10] [i_9] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)102))));
                    /* LoopSeq 3 */
                    for (signed char i_12 = 4; i_12 < 18; i_12 += 1) 
                    {
                        arr_49 [i_0 - 1] [i_9] [i_10] [i_11] [i_11] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_0] [i_10 + 3] [i_10 - 1] [i_11 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_38 [i_10] [(signed char)17] [i_10 + 3] [i_11 - 3]))));
                        arr_50 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = arr_1 [i_12];
                        arr_51 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = (signed char)87;
                    }
                    for (signed char i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        var_17 = var_7;
                        arr_54 [i_0] [i_0] [i_10] [i_11 - 3] [i_13] = var_3;
                    }
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        var_18 = ((/* implicit */signed char) min((var_18), (var_9)));
                        arr_58 [i_0] [i_9] [i_10 + 1] [i_11] [i_14] = (signed char)96;
                        arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)0] &= ((signed char) (!(((/* implicit */_Bool) (signed char)1))));
                        arr_60 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 + 2])) ? (((/* implicit */int) ((signed char) arr_3 [i_14] [i_9] [i_10]))) : (((/* implicit */int) ((signed char) arr_56 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1])))));
                    }
                }
                for (signed char i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    arr_63 [i_15] [i_9] = arr_37 [i_0];
                    arr_64 [i_0] [i_0] [i_0] [i_9] &= ((signed char) arr_56 [i_10 + 3] [i_10] [i_10] [i_10 - 1] [i_10] [i_10] [i_10]);
                    arr_65 [i_0] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) var_5)) : (((((((/* implicit */int) (signed char)-77)) + (2147483647))) << (((((((/* implicit */int) (signed char)-15)) + (30))) - (15)))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_9] [i_15] [i_10] [i_15])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) var_0))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_9] [i_0] [i_15] [i_15] [i_15])) ? (((((/* implicit */int) var_1)) / (((/* implicit */int) arr_33 [i_0])))) : (((((/* implicit */int) arr_31 [(signed char)4])) / (((/* implicit */int) (signed char)23))))));
                }
                /* LoopSeq 1 */
                for (signed char i_16 = 0; i_16 < 19; i_16 += 4) 
                {
                    arr_69 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_10 + 2])) ? (((/* implicit */int) arr_37 [i_10 + 1])) : (((/* implicit */int) arr_37 [i_10 + 1]))));
                    arr_70 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = arr_53 [i_10 + 3] [i_10 + 1] [i_10 + 3] [i_10] [i_10] [i_10 + 3] [i_10];
                }
            }
            var_21 = ((/* implicit */signed char) min((var_21), (arr_0 [i_0])));
            arr_71 [i_0] [i_0] [i_9] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_46 [i_0] [i_9] [i_0] [i_9] [i_9] [i_0]))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)38))));
            arr_72 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_9] [i_9])) ? (((((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_1))));
        }
    }
    var_22 = var_11;
    var_23 &= var_3;
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) min(((signed char)25), (((signed char) var_11))))) : (max((((/* implicit */int) min((var_6), ((signed char)0)))), ((~(((/* implicit */int) var_2))))))));
}
