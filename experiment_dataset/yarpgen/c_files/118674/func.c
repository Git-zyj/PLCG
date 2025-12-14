/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118674
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) ^ (var_14)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))));
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    arr_12 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_1);
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) 3713144368739800050LL))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_0])) << ((((((_Bool)0) && (((/* implicit */_Bool) -3713144368739800053LL)))) ? ((~(((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_2] [i_3])))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)117)) && (((/* implicit */_Bool) arr_6 [i_0])))))))));
                }
                /* vectorizable */
                for (signed char i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    var_20 = ((arr_14 [i_4] [12LL] [i_4] [i_4] [i_4 + 1]) + (arr_13 [(signed char)10] [i_2] [i_2] [i_1] [i_1] [i_0]));
                    arr_16 [i_1] [i_4] = ((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4 - 1] [2LL]);
                }
                arr_17 [i_0] [(signed char)12] [(signed char)12] [i_2] = max((((((/* implicit */_Bool) min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_1] [i_1])) ? (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))), (arr_2 [i_0] [i_1]));
            }
            var_21 = ((/* implicit */long long int) ((3713144368739800062LL) <= (6940878701712945497LL)));
            arr_18 [i_1] [i_0] = ((/* implicit */signed char) ((5544222245534115479LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_22 |= max((((/* implicit */long long int) min((max((var_3), ((_Bool)1))), (((((/* implicit */int) arr_5 [7LL] [i_1])) >= (((/* implicit */int) arr_8 [i_1] [i_1] [i_0] [i_0]))))))), (((((/* implicit */_Bool) var_5)) ? ((-(arr_7 [i_0] [i_0] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_5 [i_0] [i_0]))))))));
            var_23 = ((/* implicit */unsigned char) (-(max((arr_2 [i_0] [i_0]), (((((/* implicit */_Bool) var_0)) ? (arr_13 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]) : (arr_7 [6LL] [i_0] [i_1])))))));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_5])) ? (((/* implicit */int) arr_5 [i_0] [i_5])) : (((/* implicit */int) var_0))));
            arr_23 [i_0] [i_5] [i_5] = ((/* implicit */long long int) var_12);
            arr_24 [2LL] [i_5] = ((/* implicit */signed char) var_3);
            var_25 = ((/* implicit */long long int) var_9);
        }
    }
    for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                {
                    arr_31 [i_6] [i_6] [i_6] |= max((((/* implicit */long long int) arr_25 [i_8])), (4158930150470995952LL));
                    arr_32 [i_7] [i_7] [i_7] |= ((/* implicit */unsigned char) var_11);
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) ((arr_28 [(signed char)15]) == (arr_26 [i_6] [i_6])));
                                var_27 = ((/* implicit */long long int) (((-(((/* implicit */int) max((arr_36 [i_9] [i_9]), (arr_29 [i_6] [i_6])))))) - ((-(((/* implicit */int) (_Bool)1))))));
                                var_28 = ((/* implicit */signed char) arr_36 [i_9] [i_9]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_38 [i_6] = ((((/* implicit */_Bool) arr_26 [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : ((~(max((((/* implicit */long long int) arr_35 [i_6] [i_6] [i_6] [i_6] [i_6])), (9223372036854775807LL))))));
        arr_39 [3LL] = ((/* implicit */long long int) arr_29 [i_6] [i_6]);
    }
    var_29 = ((/* implicit */long long int) max(((-((+(((/* implicit */int) var_5)))))), (((/* implicit */int) var_11))));
    var_30 = ((/* implicit */unsigned char) max((max((((var_9) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_16)))))), ((-(((/* implicit */int) var_16))))));
}
