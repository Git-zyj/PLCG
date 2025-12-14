/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159523
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) min((var_11), (((((/* implicit */_Bool) min((((/* implicit */signed char) arr_0 [i_0])), (var_3)))) ? (((/* implicit */int) (((~(((/* implicit */int) var_8)))) >= (((/* implicit */int) min((arr_2 [i_0]), (var_0))))))) : (((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (var_4))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_12 += ((/* implicit */int) ((_Bool) max((((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3] [i_0])), ((+(((/* implicit */int) var_10)))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_13 = ((/* implicit */_Bool) ((signed char) min((31457280), (((/* implicit */int) arr_3 [i_1 - 1] [i_2] [i_4])))));
                                var_14 = var_0;
                                arr_13 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) ((_Bool) var_9)))));
                            }
                            var_15 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_2])) != (((/* implicit */int) var_6))))) > ((-(((/* implicit */int) var_7))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))) ? (((/* implicit */int) arr_11 [i_1])) : (((((/* implicit */_Bool) (-(var_1)))) ? (var_1) : (((/* implicit */int) max((var_3), (((/* implicit */signed char) var_0)))))))));
                /* LoopSeq 1 */
                for (int i_5 = 1; i_5 < 18; i_5 += 2) 
                {
                    arr_17 [i_0] [i_1] [2] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) min((((signed char) var_0)), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_5] [i_1 - 1] [i_0])))))))) % (max((arr_12 [i_0] [i_0] [i_5 + 1] [(_Bool)1]), (arr_12 [i_0] [i_0] [i_1 - 1] [(signed char)2])))));
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */signed char) ((((_Bool) arr_14 [i_1] [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_9))));
                            arr_22 [i_0] [i_1] [i_1] [(signed char)11] [i_6] [i_1] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_6] [i_0])))));
                            var_18 ^= ((((/* implicit */_Bool) 31457280)) ? (-31457284) : (((/* implicit */int) (_Bool)1)));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1 - 1] [i_5] [i_6] [i_8]))))) ? (((int) arr_23 [i_1 - 1] [(signed char)2] [i_1 - 1] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) arr_8 [(signed char)14] [i_1 - 1] [(signed char)14] [i_1 - 1] [i_1 - 1])))))));
                            arr_27 [i_0] [i_1] [i_5] [i_1] [i_8] [i_8] = ((((int) var_0)) > ((+(arr_15 [i_1]))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (var_1)))))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */int) min((var_21), (arr_12 [i_0] [i_1] [i_5] [4])));
                            arr_30 [i_0] [i_0] [i_0] [i_6] [i_1] [i_0] [i_6] = ((/* implicit */int) ((_Bool) ((int) ((((/* implicit */int) var_7)) != (var_1)))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) min((var_5), (var_2))))) + ((+((+(((/* implicit */int) var_6))))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((_Bool) var_1)), (((_Bool) arr_26 [i_0] [i_5 + 1] [i_1 - 1] [i_6] [6] [6])))))));
                        }
                        var_24 -= var_10;
                        /* LoopSeq 4 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_25 = ((/* implicit */int) var_3);
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((int) var_5)))));
                            var_27 += ((/* implicit */int) var_6);
                        }
                        for (int i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_2))) && ((!(arr_18 [i_1] [i_1 - 1] [i_1] [i_6])))));
                            var_29 = ((/* implicit */signed char) ((_Bool) (((_Bool)0) ? (15) : (31457280))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_5 [i_6] [(signed char)7] [i_5] [i_1 - 1]) ? (((/* implicit */int) arr_24 [i_5 - 1] [i_5 + 1] [i_12] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) var_5))))))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_5] [i_6] [i_13] [i_1] [i_6])) ? (((/* implicit */int) arr_8 [i_1] [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [(_Bool)1]))))) ? (arr_40 [i_0] [i_1] [i_1 - 1] [i_1] [i_6] [i_1] [i_13]) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))));
                            var_32 = max((((/* implicit */int) var_9)), (((((/* implicit */int) arr_20 [i_0] [i_1 - 1] [i_5 - 1] [i_1] [i_13])) - ((-(var_4))))));
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (1230231915))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */int) var_6)) == (((((_Bool) var_5)) ? (((/* implicit */int) min((((/* implicit */signed char) arr_6 [i_0] [i_6] [i_1 - 1] [i_0])), (var_9)))) : (min((((/* implicit */int) arr_18 [12] [i_5] [i_5] [i_14 + 1])), (arr_43 [i_0] [i_5] [i_6] [(_Bool)1]))))))))));
                            var_35 = ((/* implicit */int) min((var_35), (((int) -478962283))));
                            arr_44 [i_14] [i_6] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) arr_43 [i_0] [i_1] [i_0] [i_6]);
                        }
                        /* LoopSeq 3 */
                        for (int i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0] [i_1] [i_5] [i_15])) ? (((/* implicit */int) arr_41 [i_15] [i_6] [i_5 - 1] [i_1] [i_0])) : (((/* implicit */int) var_9)))))))), (((((/* implicit */int) arr_32 [i_1])) % (((/* implicit */int) var_6))))));
                            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_33 [i_15] [i_1 - 1] [i_0] [(signed char)3] [i_0]))))))));
                        }
                        for (int i_16 = 0; i_16 < 19; i_16 += 1) /* same iter space */
                        {
                            var_38 += ((/* implicit */signed char) (-(((int) var_7))));
                            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((signed char) max((var_8), (((/* implicit */signed char) arr_24 [i_5 + 1] [i_5] [(_Bool)1] [i_5 - 1] [i_5 + 1]))))))));
                            var_40 = (((+(((var_0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))) & (min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))))));
                        }
                        for (int i_17 = 0; i_17 < 19; i_17 += 1) /* same iter space */
                        {
                            arr_53 [i_1] [i_6] [i_0] [i_5] [i_0] [i_0] [i_1] = (((-(((/* implicit */int) ((((/* implicit */int) var_9)) > (var_4)))))) != (((((/* implicit */int) var_8)) - (((/* implicit */int) var_10)))));
                            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) min((var_0), ((((-(var_1))) == (((/* implicit */int) min((arr_41 [12] [12] [i_5] [i_5] [i_1 - 1]), (arr_20 [i_1] [12] [i_1] [12] [i_0])))))))))));
                            var_42 = arr_4 [i_5] [i_5] [i_5];
                        }
                    }
                    var_43 = ((/* implicit */_Bool) ((((((/* implicit */int) ((_Bool) 31457279))) < (((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_1] [i_5])) ? (arr_39 [8] [i_0] [i_1 - 1] [i_0]) : (((/* implicit */int) var_7)))))) ? (((/* implicit */int) ((arr_9 [i_0] [i_1 - 1] [i_5 - 1]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_5 + 1] [i_0] [i_5 - 1])) ? (arr_28 [(_Bool)1] [i_1 - 1] [i_1 - 1] [i_5] [i_0]) : (((/* implicit */int) var_2)))))))) : (((/* implicit */int) var_3))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 15; i_18 += 2) 
    {
        for (int i_19 = 0; i_19 < 15; i_19 += 1) 
        {
            {
                arr_60 [i_19] [i_19] [i_19] = var_5;
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 15; i_20 += 3) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_44 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((var_1) - (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_67 [i_22] [i_18] [i_19] [i_19] [i_18]))))));
                                var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) min((31457250), (31457287))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_46 = max((((/* implicit */int) var_5)), (max((((/* implicit */int) var_0)), (min((var_1), (((/* implicit */int) var_9)))))));
}
