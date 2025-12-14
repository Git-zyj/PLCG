/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133534
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
    var_13 -= ((/* implicit */int) max((var_2), (var_4)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_14 += ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) 1194643286))))), (max((((/* implicit */int) arr_0 [i_0] [i_0])), (arr_1 [i_0] [i_0])))));
        var_15 = ((/* implicit */int) min((var_15), ((-(max((min((-2147483646), (arr_1 [i_0] [i_0]))), ((~(0)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) max((min((((/* implicit */int) (signed char)103)), (max((((/* implicit */int) (signed char)(-127 - 1))), (2147483645))))), ((-((~(-2147483646)))))));
        arr_3 [i_0] = ((/* implicit */signed char) min(((~(14))), (max((1294602555), (((/* implicit */int) var_3))))));
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 2; i_1 < 18; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_16 = ((/* implicit */signed char) (+(var_7)));
            var_17 = (-(((/* implicit */int) (!(((/* implicit */_Bool) 64881640))))));
            var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)111))));
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                arr_12 [i_1] [i_2] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1515248982))));
                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1] [i_1 - 2]))));
            }
            for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                /* LoopSeq 4 */
                for (signed char i_5 = 2; i_5 < 18; i_5 += 2) 
                {
                    var_20 *= ((/* implicit */signed char) (-(arr_14 [i_1 - 2])));
                    arr_20 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -2147483646))));
                    var_21 = ((/* implicit */signed char) (-(-563222390)));
                }
                for (int i_6 = 2; i_6 < 15; i_6 += 3) 
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_6 + 3])))))));
                    arr_24 [i_6 - 2] = (~(((/* implicit */int) var_5)));
                    /* LoopSeq 4 */
                    for (int i_7 = 4; i_7 < 18; i_7 += 1) 
                    {
                        var_23 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_23 [i_1 + 1] [i_6 + 3] [i_6 + 2] [i_7 - 2] [i_7]))));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
                    }
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        arr_30 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_28 [i_1 + 1] [i_1 - 1]))));
                        var_25 = (~(((/* implicit */int) arr_21 [i_6 + 3] [i_1 + 1] [i_1] [i_1 - 1])));
                        arr_31 [i_8] [i_6] [i_1] [i_1] [i_1] = (-(((/* implicit */int) arr_16 [i_4] [i_4] [i_4])));
                    }
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        arr_34 [i_9] [i_6] [i_4] [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1397371097))));
                        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_1 - 1] [i_1]))));
                    }
                    for (int i_10 = 2; i_10 < 17; i_10 += 1) 
                    {
                        var_27 = ((/* implicit */int) min((var_27), ((+(1294602555)))));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (+(14))))));
                        arr_37 [i_10] [i_6] [16] [i_2] [i_1] = (+(((/* implicit */int) (signed char)-105)));
                        var_29 += ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1]))));
                    }
                }
                for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_1 - 1] [7] [i_1] [7])))))));
                    var_31 = ((/* implicit */signed char) (-(((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
                    /* LoopSeq 2 */
                    for (int i_12 = 2; i_12 < 17; i_12 += 1) 
                    {
                        var_32 = (~(var_1));
                        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                        arr_44 [0] [i_2] [i_4] [i_11] [i_12 - 2] = (~(((/* implicit */int) var_4)));
                        var_34 = ((/* implicit */int) max((var_34), ((-(((/* implicit */int) var_9))))));
                    }
                    for (signed char i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */int) max((var_35), ((-(1092774696)))));
                        arr_48 [(signed char)7] [i_11] [i_1] = (+((~(((/* implicit */int) (signed char)-1)))));
                        var_36 = ((/* implicit */signed char) (~(arr_4 [i_1 + 1])));
                        arr_49 [i_2] [i_2] [i_2] [i_2] [i_2] = (~(((/* implicit */int) (signed char)-112)));
                    }
                }
                for (int i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
                    arr_53 [i_4] [i_4] [3] [i_4] [18] [i_4] &= (+(-24756058));
                }
                var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)127)))))));
                var_39 = (-(var_12));
            }
            for (int i_15 = 0; i_15 < 19; i_15 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 19; i_16 += 1) 
                {
                    for (signed char i_17 = 1; i_17 < 17; i_17 += 2) 
                    {
                        {
                            arr_61 [i_1] [i_16] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-(2147483647)));
                            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) (~((-(((/* implicit */int) (signed char)111)))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_18 = 4; i_18 < 18; i_18 += 2) /* same iter space */
                {
                    arr_64 [i_15] [i_15] [i_15] [i_15] [i_15] = (+(arr_5 [i_18 - 2]));
                    var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (+((~(132120576))))))));
                }
                for (int i_19 = 4; i_19 < 18; i_19 += 2) /* same iter space */
                {
                    arr_68 [i_19] [i_19] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)8))));
                    arr_69 [i_1] [i_2] [i_2] = (-((+(arr_17 [i_1 - 2] [i_15] [i_2] [i_1 - 2]))));
                    var_42 = (+(((/* implicit */int) var_5)));
                }
                arr_70 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 + 1]))));
                /* LoopSeq 2 */
                for (int i_20 = 0; i_20 < 19; i_20 += 3) 
                {
                    var_43 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)0))));
                    var_44 = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
                }
                for (signed char i_21 = 0; i_21 < 19; i_21 += 1) 
                {
                    arr_75 [i_2] [i_1] = (+(arr_65 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1]));
                    var_45 = (+(0));
                }
            }
            var_46 ^= (~(((/* implicit */int) arr_41 [10] [i_1 - 2] [(signed char)16] [i_1])));
        }
        var_47 = min((max((((/* implicit */int) min((var_9), ((signed char)94)))), (max((((/* implicit */int) (signed char)127)), (-1796111801))))), ((~(((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1])))));
        /* LoopSeq 2 */
        for (int i_22 = 0; i_22 < 19; i_22 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_23 = 2; i_23 < 17; i_23 += 2) 
            {
                arr_80 [i_23] [i_1] [i_1] [i_1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_43 [i_23])))))))));
                arr_81 [i_22] [3] [i_22] [i_1 + 1] &= ((/* implicit */signed char) min((-2147483646), (((/* implicit */int) (signed char)-1))));
            }
            var_48 += ((/* implicit */signed char) (~(min((var_11), (((/* implicit */int) max(((signed char)127), ((signed char)-90))))))));
        }
        for (signed char i_24 = 0; i_24 < 19; i_24 += 2) 
        {
            var_49 = (-(min((1440039668), (((/* implicit */int) var_3)))));
            var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((min((arr_27 [i_24] [i_24] [i_24] [i_24]), (((/* implicit */int) (signed char)-115)))), (((/* implicit */int) max((arr_51 [i_24] [i_24] [i_1] [i_1] [i_1] [i_1 - 2]), ((signed char)127))))))))))));
            var_51 = max(((-(1606144075))), (((/* implicit */int) min((arr_33 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1]), (arr_33 [i_1 - 2] [i_1 - 1] [i_1] [i_1] [15])))));
        }
    }
    for (signed char i_25 = 2; i_25 < 18; i_25 += 2) /* same iter space */
    {
        arr_88 [i_25] = ((/* implicit */signed char) min((((/* implicit */int) (signed char)-106)), (-453093031)));
        arr_89 [i_25] = min((max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_10)))), ((~(((/* implicit */int) var_0)))));
        var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) max(((-(((/* implicit */int) arr_11 [i_25 + 1] [i_25])))), (max((((/* implicit */int) arr_63 [i_25 + 1])), (643951484))))))));
        arr_90 [i_25] = max(((-(max((((/* implicit */int) (signed char)105)), (var_7))))), ((-(-1))));
    }
}
