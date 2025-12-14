/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171608
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
    var_14 ^= ((/* implicit */int) var_0);
    var_15 = (~(((((/* implicit */_Bool) (+(4088)))) ? (((/* implicit */unsigned int) (+(var_4)))) : (var_3))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) (short)32575);
        arr_2 [i_0] = ((/* implicit */unsigned short) (short)-5876);
        var_17 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_1])), (arr_5 [i_1])))) || (((/* implicit */_Bool) (~(max((arr_6 [i_1]), (arr_6 [i_1]))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            for (unsigned short i_3 = 3; i_3 < 18; i_3 += 4) 
            {
                {
                    arr_12 [i_1] [i_2] [i_3] [i_2] = ((unsigned int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_5 [i_3 + 3]))));
                    arr_13 [i_3] [i_1] [i_1] = ((/* implicit */int) min((0U), (2915371032U)));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1]))))) ? (((min((arr_8 [i_3] [i_1] [i_1]), (((/* implicit */unsigned int) (unsigned short)19493)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1379596239U)))))) : (((/* implicit */unsigned int) ((arr_6 [i_2 - 1]) / ((-(((/* implicit */int) var_1))))))))))));
                    /* LoopSeq 1 */
                    for (int i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((arr_6 [i_2]) != (((((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_3 - 2])) ? (((/* implicit */int) (unsigned short)28052)) : (var_4))) << (((max((var_12), (((/* implicit */unsigned int) -2139270358)))) - (2498515265U)))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_1] [i_1] [i_5] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((1296848001) & (-2139270358)));
                            arr_20 [i_5] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */int) (~(max((((/* implicit */long long int) arr_7 [i_2 + 1] [i_3 - 2])), (max((((/* implicit */long long int) arr_4 [i_4])), (-1341995001263345270LL)))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))), (min((arr_22 [(unsigned short)18] [i_4] [i_3] [i_2 + 1] [(unsigned short)18]), (((/* implicit */unsigned short) var_5))))))) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_3 + 1] [i_4 + 1])) : (((/* implicit */int) ((arr_18 [i_1] [20U] [i_3 - 3] [i_4]) >= (arr_18 [i_1] [(unsigned short)18] [i_3 + 2] [(unsigned short)18])))))))));
                            arr_25 [i_6] [i_6] [i_1] [i_6] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_3 + 3] [i_2 - 1] [i_2])) ? (arr_11 [i_4 - 1] [i_3 + 3] [i_2 - 1] [i_1]) : (arr_11 [i_4 - 1] [i_3 + 3] [i_2 - 1] [i_2])))) ? (((/* implicit */int) ((arr_14 [i_2 - 1] [i_1]) < (arr_11 [i_4 - 1] [i_3 + 3] [i_2 - 1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4 - 1] [i_3 + 3] [i_2 - 1] [i_2])))))));
                            arr_26 [i_1] [i_6] [i_1] [i_4] [i_6] = min((arr_14 [i_1] [i_1]), (((((/* implicit */_Bool) arr_6 [i_1])) ? (var_12) : (((/* implicit */unsigned int) arr_6 [i_1])))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(arr_6 [i_1]))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_7] = ((/* implicit */unsigned short) 2147483632);
                            arr_30 [i_7] [i_2] [i_3] [i_2] = max((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (4066)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-5876))) - (3100146963U))))), (((/* implicit */unsigned int) arr_17 [i_1] [i_1] [i_1] [i_1])));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2012673449)) ? (2354696415U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65024))))))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((((/* implicit */_Bool) (+(arr_17 [i_1] [i_2 - 1] [i_3 - 1] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_2] [i_3]))) : (min((5410788717842885217LL), (((/* implicit */long long int) arr_21 [i_1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_4 - 1] [10U])))))) ^ ((-(min((((/* implicit */long long int) arr_28 [i_1] [i_1] [i_1] [8LL] [i_1])), (3333408676495465090LL))))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            arr_33 [i_1] [i_1] [i_1] [i_4] [i_8] [i_8] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])))) ? (((((2189569158U) != (var_9))) ? (0U) : (((((/* implicit */_Bool) 1558748249U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_8] [i_8] [i_2] [i_3] [i_2] [i_8]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_22 [i_8] [i_8] [i_3] [i_4] [i_8])), (var_3)))) ? (min((((/* implicit */int) (short)13134)), (-2147483633))) : (arr_6 [i_1]))))));
                            arr_34 [i_3] [i_4 - 1] |= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_2]))));
                        }
                        arr_35 [i_1] [i_2] [i_2] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
                    }
                }
            } 
        } 
        var_25 -= ((/* implicit */unsigned int) ((long long int) (-(3185293838U))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 3; i_9 < 9; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_10 = 3; i_10 < 9; i_10 += 1) 
        {
            for (int i_11 = 2; i_11 < 9; i_11 += 4) 
            {
                for (unsigned int i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    {
                        var_26 = ((/* implicit */short) ((unsigned int) (unsigned short)58613));
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 1; i_13 < 9; i_13 += 4) 
                        {
                            var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) ? (var_7) : (((/* implicit */long long int) var_3))))) ? (2915371016U) : (1379596239U));
                            arr_49 [i_9] [i_10] [i_11] [i_11] [i_13 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 326250404U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))) : (((unsigned int) arr_5 [i_12]))));
                            var_28 = ((/* implicit */unsigned int) (~(arr_4 [i_9 + 1])));
                        }
                        var_29 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_8 [i_9] [i_10] [i_11 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_11]))) : (arr_18 [i_9 - 2] [i_9] [i_11] [i_12])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_36 [i_11 - 1]))));
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_10] [i_14] [i_14] [i_12] [i_10] [i_10] [i_9])) ? (2915371032U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_14] [i_11] [i_11])))))) ? (var_9) : (((/* implicit */unsigned int) arr_6 [i_9 - 1])))))));
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_10])) / (((/* implicit */int) arr_10 [i_9] [i_11 + 1] [i_12] [i_11 + 1]))))) ? (((/* implicit */int) (short)13134)) : (arr_43 [i_9 - 1] [i_11] [i_11]))))));
                        }
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_9] [i_9 - 3] [i_9 - 3] [i_9])) || ((!(((/* implicit */_Bool) var_13))))));
    }
    var_34 = ((/* implicit */unsigned short) -1341995001263345277LL);
}
