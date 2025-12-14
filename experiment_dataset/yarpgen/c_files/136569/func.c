/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136569
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
    var_13 = ((/* implicit */unsigned char) var_7);
    var_14 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned int) var_6)), (var_2)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_15 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (3686321163671493030LL) : (((/* implicit */long long int) var_2))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (((long long int) ((var_12) & (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_0 [i_0] [i_3]) : (arr_7 [i_0] [i_1])))) && (((/* implicit */_Bool) (~(0U)))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [(unsigned char)21] [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [i_3] [i_2] [i_4]))))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4]) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2])))))))) ? (((((/* implicit */_Bool) arr_9 [i_4] [i_3] [(unsigned short)17])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_1] [i_4]))))) : (((/* implicit */unsigned int) arr_13 [(unsigned char)20] [i_1])))))));
                                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_6 [i_0] [i_3])) + (arr_13 [i_4] [i_0]))) + (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0] [i_3] [14LL]))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) var_6);
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            for (long long int i_7 = 2; i_7 < 21; i_7 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_6 - 1] [12LL] [i_6 - 1]))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_25 [(unsigned short)6] [i_6 + 1] [i_6 - 1] [i_7 + 1] [i_8 + 2])) ? (((/* implicit */int) arr_25 [i_5] [i_6 - 1] [i_6 - 1] [i_7 - 1] [i_8 + 2])) : (((/* implicit */int) arr_25 [i_5] [i_6 - 1] [i_6] [i_7 - 2] [i_8 + 2]))))));
                                arr_31 [i_5] &= ((/* implicit */signed char) arr_21 [i_9]);
                                var_22 += ((/* implicit */long long int) -2071917437);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) arr_14 [16])) ? (((/* implicit */int) arr_17 [(unsigned char)7] [(signed char)18])) : (min((arr_30 [i_6 + 1] [i_6] [i_7 - 1] [i_7 - 2] [i_7 + 1]), ((-(((/* implicit */int) (signed char)2))))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                for (unsigned short i_12 = 3; i_12 < 20; i_12 += 3) 
                {
                    {
                        arr_41 [i_5] = ((long long int) ((((/* implicit */_Bool) (-(-2071917462)))) ? (arr_30 [i_11] [3LL] [i_11] [i_12 - 2] [i_11]) : (((/* implicit */int) var_9))));
                        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                        var_25 = arr_11 [i_12 - 3] [i_12 - 3] [i_12 + 1] [i_12 + 1] [i_5] [i_5];
                        arr_42 [i_5] [i_10] [i_11] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2071917436) + (((/* implicit */int) (signed char)-102))))) ? ((-(((/* implicit */int) var_7)))) : (arr_13 [i_12 - 2] [i_12 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_5] [i_11]))) : (min((arr_21 [i_12 + 2]), (((/* implicit */long long int) ((int) var_7)))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_10])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 2071917436)) : (arr_0 [i_5] [8U])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_5] [i_5])) ? ((+(arr_40 [16] [i_10] [i_10]))) : (((/* implicit */int) min((var_10), (arr_37 [i_10] [i_10] [i_10] [i_10]))))))) : (((((arr_11 [i_5] [i_5] [i_5] [i_10] [i_5] [i_10]) / (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5]))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 20; i_13 += 3) 
            {
                for (signed char i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    {
                        arr_48 [i_5] [i_10] [i_13] = ((/* implicit */unsigned short) 36028797018963968LL);
                        var_27 = min((((/* implicit */long long int) (~(((-2071917437) | (((/* implicit */int) (_Bool)1))))))), (arr_21 [i_13]));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_15 = 3; i_15 < 21; i_15 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((unsigned short) arr_9 [i_15] [i_15 + 1] [i_13 + 1]));
                            arr_52 [i_15] [i_14] [i_13] [i_10] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_13 + 1] [i_13 - 1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_13 + 1] [i_13 + 2])))));
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_38 [i_5] [i_10] [(unsigned short)15] [9U]))) ? (((/* implicit */int) arr_33 [i_10] [i_13 + 2] [i_15 + 1])) : (((/* implicit */int) arr_33 [i_10] [i_13 + 2] [i_14])))))));
                        }
                        var_30 = ((/* implicit */int) (!((_Bool)1)));
                    }
                } 
            } 
            arr_53 [i_5] [i_10] [i_10] = ((/* implicit */long long int) arr_33 [i_5] [i_5] [i_5]);
            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((9223372036854775786LL) < (-7234302827989378685LL)))), (min((arr_11 [i_5] [i_5] [i_5] [i_10] [i_5] [i_10]), (arr_11 [i_5] [i_5] [i_5] [i_10] [i_10] [i_10]))))))));
        }
        var_32 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_7))))))));
        arr_54 [(_Bool)1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))) ? (((/* implicit */int) ((signed char) arr_10 [18] [i_5] [i_5] [i_5] [i_5] [i_5]))) : (((arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
    }
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 22; i_16 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_17 = 2; i_17 < 21; i_17 += 4) 
        {
            for (long long int i_18 = 0; i_18 < 22; i_18 += 3) 
            {
                {
                    var_33 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_17 + 1] [i_17 - 2]))) ^ (arr_21 [i_17 - 1])));
                    var_34 ^= ((/* implicit */long long int) arr_50 [i_16] [i_17 - 2] [i_18] [i_18] [i_17 + 1] [i_18] [i_17]);
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_17 + 1] [(unsigned short)9])) ? (((long long int) (signed char)102)) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_17 - 2] [i_17 + 1])))));
                    /* LoopNest 2 */
                    for (long long int i_19 = 2; i_19 < 19; i_19 += 3) 
                    {
                        for (long long int i_20 = 0; i_20 < 22; i_20 += 3) 
                        {
                            {
                                arr_68 [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -8660127969229499682LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)158))) : (-4584947944904929584LL)));
                                var_36 = ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [(signed char)2] [i_16] [i_16])) ? (arr_40 [i_16] [i_16] [(signed char)15]) : (arr_40 [i_16] [i_16] [i_16])));
        arr_69 [i_16] [i_16] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_17 [i_16] [i_16]))));
        arr_70 [i_16] &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_55 [i_16] [i_16]))));
        arr_71 [i_16] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)108))));
    }
    for (signed char i_21 = 0; i_21 < 22; i_21 += 4) /* same iter space */
    {
        var_38 = ((/* implicit */_Bool) arr_61 [i_21] [i_21] [i_21]);
        arr_74 [i_21] = ((/* implicit */long long int) (!(((_Bool) arr_67 [i_21] [i_21]))));
    }
}
