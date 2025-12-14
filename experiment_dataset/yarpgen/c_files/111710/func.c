/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111710
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
    var_16 = ((/* implicit */_Bool) max((((/* implicit */int) max(((!(var_13))), (((_Bool) (_Bool)1))))), (((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) | (((var_6) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2))))))));
    var_17 = ((/* implicit */_Bool) var_14);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_3] [(_Bool)0] [i_0] = ((/* implicit */int) ((_Bool) ((arr_11 [i_2]) ? (arr_7 [i_3] [i_1 - 1] [i_0]) : (((/* implicit */int) var_8)))));
                                var_19 = ((/* implicit */int) var_6);
                                var_20 = ((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0 - 1]) : (((/* implicit */int) arr_4 [i_4] [i_0 - 1] [i_1 + 2])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */int) min((var_21), ((+(((/* implicit */int) var_2))))));
    }
    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (_Bool)1)))))));
        var_23 ^= ((((/* implicit */int) max(((!(((/* implicit */_Bool) -13)))), (((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))))) % (((/* implicit */int) ((_Bool) (_Bool)1))));
    }
    for (int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                {
                    arr_25 [i_6] [i_6] [i_6] [i_8] = ((_Bool) ((((int) arr_18 [i_6])) / (((/* implicit */int) min((arr_21 [i_6] [i_6] [i_8]), ((_Bool)1))))));
                    var_24 += ((((/* implicit */_Bool) 22)) ? (((((/* implicit */_Bool) arr_19 [i_6])) ? (arr_16 [i_6]) : (((/* implicit */int) max(((_Bool)0), (arr_22 [i_6] [i_7] [i_8])))))) : (((/* implicit */int) (!(arr_20 [i_6] [i_6] [i_6])))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */int) arr_23 [i_6] [i_9] [i_6] [i_6]);
            var_26 ^= ((/* implicit */_Bool) ((((int) -1)) - (var_5)));
            var_27 = (((_Bool)1) || ((_Bool)1));
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (var_5))))));
        }
        for (int i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
        {
            var_29 *= ((((((/* implicit */int) arr_27 [i_6] [i_10] [i_10])) < (((/* implicit */int) arr_27 [i_6] [i_10] [i_10])))) ? (((arr_29 [i_6]) ^ (min((-1858759338), (arr_24 [6]))))) : (((var_13) ? (((/* implicit */int) arr_27 [(_Bool)1] [(_Bool)1] [i_10])) : (((((/* implicit */_Bool) arr_17 [17])) ? (arr_19 [i_10]) : (arr_29 [(_Bool)1]))))));
            /* LoopNest 2 */
            for (int i_11 = 4; i_11 < 11; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    {
                        var_30 = ((((/* implicit */_Bool) ((arr_31 [i_6] [i_6] [i_11 - 1] [(_Bool)1]) ? (-1345921384) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) > (-2077812861)))))) : (((arr_32 [i_11]) ? (max((((/* implicit */int) var_7)), (var_10))) : (arr_29 [i_11 - 1]))));
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (-(arr_18 [i_12]))))) | (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))))))));
                        arr_37 [i_6] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_36 [i_6] [i_6] [i_6] [i_6] [i_6])) < (((/* implicit */int) arr_22 [3] [6] [i_6])))) ? ((((!(arr_32 [3]))) ? (((((/* implicit */_Bool) var_11)) ? (1879048192) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((_Bool) ((int) (_Bool)0))))));
                        /* LoopSeq 3 */
                        for (int i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            arr_41 [i_13] [i_6] [i_11 - 2] [i_6] [i_13] = ((/* implicit */_Bool) ((((arr_24 [i_6]) * (((/* implicit */int) ((arr_40 [2] [(_Bool)1] [i_11] [i_12] [i_13]) > (var_5)))))) * (((/* implicit */int) max((arr_32 [5]), (min(((_Bool)1), ((_Bool)1))))))));
                            arr_42 [i_6] [5] [8] [i_6] [i_6] [(_Bool)1] [i_6] = ((_Bool) ((arr_22 [i_6] [i_11 + 1] [i_6]) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_31 [i_13] [11] [i_6] [i_6])) : (((/* implicit */int) arr_39 [i_6] [i_10])))) : (((arr_16 [i_12]) * (((/* implicit */int) var_3))))));
                            var_32 = ((((/* implicit */_Bool) (((~(var_5))) + (arr_40 [i_11 + 1] [i_11 - 3] [i_11] [i_11] [i_11 + 1])))) ? (max((((/* implicit */int) var_7)), (((int) arr_36 [i_6] [i_6] [i_6] [i_6] [i_6])))) : (((/* implicit */int) max((((_Bool) arr_32 [i_12])), (var_0)))));
                        }
                        for (int i_14 = 4; i_14 < 10; i_14 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) arr_31 [i_11 - 4] [i_14 - 2] [i_14 - 1] [i_14 - 1])) >= (((/* implicit */int) arr_31 [i_11 + 1] [i_14 + 2] [i_14] [i_14])))))));
                            var_34 = arr_30 [i_6] [(_Bool)1];
                            var_35 = ((/* implicit */int) arr_38 [i_6] [i_10] [i_6] [i_14]);
                        }
                        for (int i_15 = 4; i_15 < 10; i_15 += 2) /* same iter space */
                        {
                            var_36 += ((/* implicit */int) min(((_Bool)1), ((_Bool)1)));
                            var_37 = ((/* implicit */_Bool) (((!(var_2))) ? (max(((((_Bool)1) ? (((/* implicit */int) var_15)) : (arr_29 [i_11]))), (((((/* implicit */int) var_1)) + (((/* implicit */int) arr_47 [i_6] [4] [4] [i_6] [i_6])))))) : (((arr_30 [i_6] [i_10]) - (arr_30 [i_6] [i_10])))));
                        }
                    }
                } 
            } 
            arr_49 [i_6] [i_6] [i_10] = ((/* implicit */int) (_Bool)1);
            var_38 *= ((/* implicit */_Bool) arr_30 [6] [i_6]);
            arr_50 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9)) ? ((-2147483647 - 1)) : (arr_16 [i_10])));
        }
    }
    var_39 = ((((int) var_10)) * (((/* implicit */int) var_1)));
}
