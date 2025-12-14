/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150806
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((_Bool) ((var_5) & (var_5)))) ? (var_9) : (2147483647))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_12 += ((/* implicit */unsigned char) -1253815244);
                /* LoopSeq 3 */
                for (int i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] [i_2] = ((int) var_5);
                    arr_9 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) var_10)), ((-(((/* implicit */int) (unsigned char)233))))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) arr_6 [i_3]))));
                        var_14 = ((/* implicit */unsigned char) ((signed char) min((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_0] [(_Bool)1] [i_3])) ? (var_0) : (var_2))), (1811039257))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 8; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_1] [i_0] [i_4] [4] = ((/* implicit */_Bool) (signed char)9);
                        arr_16 [i_0] [i_1] [(signed char)10] [(signed char)10] [i_1] [i_1] = (-(((/* implicit */int) (_Bool)1)));
                        /* LoopSeq 4 */
                        for (int i_5 = 3; i_5 < 10; i_5 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */_Bool) var_9);
                            arr_20 [i_0] = ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [(_Bool)1])) ? (arr_11 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) var_7)));
                            var_16 = var_6;
                            var_17 = ((/* implicit */signed char) (-(((((/* implicit */int) var_10)) % (arr_7 [i_0])))));
                            var_18 |= ((/* implicit */_Bool) ((unsigned char) ((signed char) arr_2 [i_1] [11] [i_5])));
                        }
                        for (int i_6 = 3; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) ((int) arr_5 [i_4 + 4] [i_4 + 4] [i_4] [i_4 + 1]));
                            arr_23 [(unsigned char)9] [11] [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) / (((var_9) + (((/* implicit */int) arr_3 [i_0]))))));
                        }
                        for (int i_7 = 3; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0] [i_1] [i_2] [i_0 - 1] [i_4 - 2] [i_7])) ? (var_9) : (arr_7 [i_1])));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) (signed char)-62)) : (((arr_13 [i_0] [i_0] [i_2] [i_4 - 2] [i_7] [i_7]) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (signed char)-62)))))))));
                            arr_28 [i_0] [i_0] [(signed char)7] [i_0] [i_0] [(signed char)7] = ((int) arr_4 [i_7 - 3] [i_4 - 2] [i_2] [i_0 - 1]);
                            arr_29 [(_Bool)1] [i_4] [i_2] [i_4] [(_Bool)1] &= ((/* implicit */_Bool) arr_14 [i_0] [i_0 - 1] [(unsigned char)2] [(unsigned char)6] [i_4]);
                        }
                        for (int i_8 = 3; i_8 < 10; i_8 += 2) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_4] [i_8 - 3] = ((/* implicit */unsigned char) ((arr_6 [i_0]) != (arr_6 [i_0])));
                            arr_33 [(_Bool)1] [i_1] [i_0] = ((/* implicit */signed char) (+(arr_7 [i_0])));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) (signed char)39)) ? (((((/* implicit */_Bool) arr_26 [i_1] [(_Bool)0] [2] [i_2] [(_Bool)0])) ? (arr_11 [(_Bool)0] [(signed char)6] [i_1] [i_1] [i_1] [i_0]) : (-1104724174))) : (((/* implicit */int) arr_14 [i_9] [i_9] [i_0] [i_0 - 1] [i_9]))))));
                        /* LoopSeq 2 */
                        for (int i_10 = 1; i_10 < 8; i_10 += 2) 
                        {
                            arr_40 [i_0] [(signed char)6] [i_0] = ((/* implicit */_Bool) arr_22 [6] [i_1] [i_1] [i_1] [2]);
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_12 [i_0] [i_1] [i_2] [i_0] [i_0]))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 11; i_11 += 3) 
                        {
                            arr_44 [i_0] [i_11 - 1] [i_11 - 1] = ((int) arr_5 [i_0 - 1] [1] [i_9] [i_11]);
                            arr_45 [i_0 - 1] [i_1] [(_Bool)1] &= ((/* implicit */signed char) ((var_5) <= (((/* implicit */int) arr_41 [i_0] [i_1] [(unsigned char)0] [i_9] [i_11 + 1]))));
                            var_24 = ((((/* implicit */_Bool) (+(arr_10 [i_0] [(signed char)8] [i_0] [i_0 - 1] [i_0])))) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) ((signed char) arr_13 [i_0] [i_1] [(unsigned char)0] [i_2] [i_9] [i_11]))));
                            arr_46 [2] [i_1] [i_0] [i_1] [(_Bool)0] [i_1] = (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 3] [i_11 + 1])));
                        }
                    }
                    for (signed char i_12 = 3; i_12 < 11; i_12 += 2) 
                    {
                        var_25 = (~(((/* implicit */int) arr_2 [i_0] [i_1] [3])));
                        arr_50 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */int) arr_25 [(signed char)0] [i_0 - 1] [(signed char)0] [i_0] [7] [i_12] [i_2]);
                        arr_51 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_35 [i_0] [i_1] [i_2 - 1] [i_12])), ((+(((/* implicit */int) arr_12 [i_0] [i_1] [2] [2] [i_12]))))))) ? (min((var_6), (max((((/* implicit */int) (_Bool)0)), (var_9))))) : (((((/* implicit */_Bool) ((unsigned char) var_5))) ? (max((arr_26 [i_0] [i_1] [i_1] [i_2] [i_12]), (((/* implicit */int) arr_14 [(unsigned char)8] [(unsigned char)8] [i_2] [i_1] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_48 [(signed char)6] [i_1] [(signed char)11] [i_12] [i_1])))))))));
                    }
                }
                for (int i_13 = 3; i_13 < 11; i_13 += 3) 
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) 1485261389)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_18 [(_Bool)1] [(_Bool)1] [i_1] [i_1] [i_1] [(_Bool)1] [i_1])) && (((/* implicit */_Bool) var_7)))) || (((((/* implicit */_Bool) (signed char)-112)) && (((/* implicit */_Bool) var_7))))))) : (((/* implicit */int) ((_Bool) arr_6 [i_0])))));
                    var_27 = var_5;
                }
                for (signed char i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    arr_58 [(unsigned char)8] [i_1] [i_1] [i_0] = ((((((/* implicit */_Bool) arr_21 [(unsigned char)5] [i_14] [i_1] [(unsigned char)5])) ? (((/* implicit */int) var_4)) : (var_8))) / (((((/* implicit */_Bool) (+(((/* implicit */int) arr_52 [i_14] [(signed char)6] [5] [i_0]))))) ? (((((/* implicit */int) (signed char)81)) * (((/* implicit */int) arr_35 [i_0 + 1] [(signed char)3] [i_1] [6])))) : (((/* implicit */int) max((arr_1 [i_0]), (arr_5 [i_14] [i_0] [i_0 - 1] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 10; i_15 += 2) 
                    {
                        for (signed char i_16 = 4; i_16 < 10; i_16 += 1) 
                        {
                            {
                                arr_64 [i_0] [i_1] [i_14] [(_Bool)1] [i_15] [i_1] [i_16] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -1)) ? (var_5) : (((/* implicit */int) arr_60 [i_1] [i_1] [(_Bool)1] [i_16])))), (((((/* implicit */_Bool) arr_10 [(unsigned char)7] [i_1] [(unsigned char)7] [(unsigned char)7] [10])) ? (((/* implicit */int) arr_30 [(_Bool)0] [(_Bool)0] [i_14] [i_15] [(_Bool)1])) : (((/* implicit */int) (signed char)-20))))))) ? (((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_14] [(signed char)1])) : (var_0))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))))));
                                var_28 &= ((/* implicit */signed char) ((var_3) * (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 2147483644)))))));
                                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (signed char)54))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned char) ((int) (~(var_6))));
                    var_31 = ((/* implicit */signed char) var_10);
                    var_32 = ((/* implicit */signed char) var_8);
                }
            }
        } 
    } 
}
