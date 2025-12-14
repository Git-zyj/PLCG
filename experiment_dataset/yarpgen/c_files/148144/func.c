/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148144
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_11 [i_0] = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */unsigned short) min((arr_4 [i_0] [i_2]), (((/* implicit */short) arr_2 [i_0] [i_0]))))), (arr_6 [i_2 + 2] [i_2 + 2]))));
                    arr_12 [i_0] [7U] [i_0] = ((((/* implicit */_Bool) ((unsigned int) ((short) arr_6 [3] [i_2 + 2])))) ? (min((arr_10 [i_1]), (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) /* same iter space */
                    {
                        arr_15 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((unsigned char) arr_8 [i_0] [i_3 + 3] [i_2 + 1]))), (arr_5 [i_0] [i_0] [5ULL])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            arr_18 [i_0] [(_Bool)1] [i_0] [i_0] [i_4] [5U] = ((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_4]);
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2 - 1] [i_2 - 1] [i_2 + 3] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_14 [i_0] [i_1])))) : (min((((/* implicit */unsigned int) arr_4 [i_1] [i_2])), (arr_10 [i_0])))))) ? (((/* implicit */int) ((signed char) 2127036130U))) : (((/* implicit */int) max((arr_17 [i_3 - 1] [0LL] [i_3 + 1] [i_3 + 2] [i_3 - 1]), (arr_17 [i_3] [(short)10] [i_3 + 1] [i_3 + 1] [i_3 + 1]))))));
                            var_19 = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0] [i_0]))), (max((arr_0 [i_1] [i_0]), (((/* implicit */unsigned int) arr_14 [i_4] [9])))))), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
                        }
                        var_20 = ((/* implicit */unsigned char) max((max((arr_14 [i_3 + 3] [i_3 + 3]), (((/* implicit */signed char) (_Bool)1)))), (arr_14 [i_3 + 3] [i_3])));
                    }
                    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 3) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_5 - 1] [i_0] = ((/* implicit */long long int) arr_5 [i_2 - 1] [i_0] [i_2 + 1]);
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((/* implicit */long long int) max((arr_1 [i_0] [i_1]), (((/* implicit */int) ((unsigned char) arr_20 [(unsigned char)14])))))), (((((/* implicit */_Bool) min((arr_5 [i_0] [(unsigned char)6] [i_2]), (((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_1] [i_2] [(unsigned char)8]))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [14ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [14LL] [14LL]))) : (arr_16 [i_0] [i_1] [i_2 + 3] [i_0] [i_1] [i_5]))) : (((/* implicit */long long int) max((2127036130U), (2127036125U)))))))))));
                        var_22 = max((((unsigned int) arr_2 [i_2 + 2] [i_2 + 2])), (((/* implicit */unsigned int) arr_2 [i_5 + 2] [i_2 + 1])));
                        var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)29)), (2127036125U)));
                    }
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */unsigned long long int) var_4);
    var_25 += min((((/* implicit */unsigned long long int) var_3)), (var_17));
    /* LoopNest 2 */
    for (long long int i_6 = 1; i_6 < 18; i_6 += 4) 
    {
        for (long long int i_7 = 4; i_7 < 18; i_7 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
                    {
                        arr_33 [i_6] [i_6] [i_6 + 1] [(_Bool)1] [i_7] [i_6] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_27 [i_6] [(unsigned short)1] [i_7] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_6 + 1]))) : (max((((/* implicit */long long int) arr_28 [i_7 - 2])), (arr_22 [i_7]))))), (max((1111442089072037967LL), (((/* implicit */long long int) 2167931171U))))));
                        arr_34 [i_6] [i_7] [i_7] [i_9] [i_7] [i_6] = ((/* implicit */signed char) max((min((arr_32 [i_7] [i_7 + 1]), (arr_32 [i_7] [i_7 - 1]))), (min((arr_32 [i_7] [i_7 - 4]), (arr_32 [i_7] [i_9])))));
                        var_26 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) max((2127036117U), (((/* implicit */unsigned int) (signed char)81))))) ? (arr_25 [(signed char)12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_32 [(short)18] [i_9]), (((/* implicit */unsigned short) arr_26 [i_6] [(short)6] [i_6])))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 3; i_10 < 17; i_10 += 1) /* same iter space */
                        {
                            arr_38 [i_6] [0] [i_8] [i_7] [0] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) arr_32 [i_7] [i_7 - 2])));
                            var_27 = ((/* implicit */_Bool) ((unsigned char) max(((unsigned short)30494), (((/* implicit */unsigned short) (_Bool)0)))));
                        }
                        for (unsigned short i_11 = 3; i_11 < 17; i_11 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_32 [(unsigned short)14] [i_7])), (arr_23 [i_6])))) ? (((unsigned int) arr_25 [(short)18])) : (arr_30 [6ULL] [i_7 + 1] [i_6 + 1] [6ULL])))), (min((arr_37 [i_11] [i_9] [i_8] [(unsigned short)12] [(unsigned short)12]), (((/* implicit */unsigned long long int) arr_40 [i_11 - 2] [i_11] [i_11] [i_11 - 1] [(signed char)1])))))))));
                            arr_41 [i_7] [i_7 - 4] [(unsigned short)11] [i_7 + 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) -4383259242817580836LL))), (((((/* implicit */_Bool) arr_24 [i_6 - 1])) ? (arr_35 [(short)1] [i_7] [i_11] [i_6 + 1] [i_11]) : (arr_35 [i_6] [i_7 - 1] [i_8] [i_6 + 1] [i_11])))));
                            arr_42 [i_6] [(unsigned short)2] [i_7] [i_9] [i_11 - 1] = ((/* implicit */long long int) arr_35 [i_6 - 1] [i_7] [i_8] [i_9] [(unsigned short)12]);
                        }
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((min((arr_26 [i_6 + 1] [0ULL] [i_7 + 1]), (arr_26 [i_6 + 1] [0] [i_7 - 2]))) ? (((long long int) ((((/* implicit */_Bool) arr_31 [i_6] [i_6] [2ULL] [i_6 - 1])) ? (arr_40 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_9] [i_9]) : (((/* implicit */long long int) arr_30 [12LL] [2U] [0U] [i_9]))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_28 [i_6])), (arr_22 [i_6])))) ? (arr_40 [i_6 - 1] [i_7 - 3] [16LL] [i_7 + 1] [i_8]) : (((/* implicit */long long int) max((arr_23 [i_6 - 1]), (((/* implicit */unsigned int) arr_36 [3ULL] [3ULL] [i_8] [i_8] [9LL]))))))))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
                    {
                        arr_45 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2127036125U)) ? (((/* implicit */long long int) 2127036119U)) : (-9223372036854775798LL)));
                        arr_46 [i_6 + 1] [8LL] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_26 [i_6 - 1] [6U] [i_8]) ? (min((((/* implicit */unsigned int) arr_26 [i_6 - 1] [2U] [i_6 + 1])), (arr_23 [i_6 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_30 [0U] [i_7] [i_7] [0U]))))))) ? (max((((/* implicit */unsigned long long int) arr_40 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])), (((((/* implicit */_Bool) arr_25 [18])) ? (arr_25 [14U]) : (((/* implicit */unsigned long long int) arr_43 [i_6] [i_6] [i_6] [i_6] [(_Bool)1])))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((signed char) arr_22 [i_6]))))));
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            arr_50 [i_7] [i_7] = ((/* implicit */short) max((((/* implicit */unsigned long long int) 4383259242817580835LL)), (11249436664570912763ULL)));
                            arr_51 [i_7] [i_7] [i_6] [i_12] [i_13] [i_12] = ((/* implicit */unsigned short) min((max((max((((/* implicit */unsigned int) arr_32 [i_7] [i_7])), (arr_30 [i_7] [i_7] [i_8] [i_12]))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_24 [i_6])), (arr_28 [i_6])))))), ((((_Bool)1) ? (619035232U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((signed char) arr_48 [i_7 + 1] [i_7 - 4] [i_6 + 1] [i_12] [i_13] [17U] [i_13])))));
                        }
                    }
                    for (unsigned char i_14 = 0; i_14 < 19; i_14 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned int) (unsigned char)56)), (2511134254U))))) ? (arr_35 [i_6 + 1] [i_6 - 1] [i_7 - 3] [i_14] [i_7 - 2]) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) (signed char)-82)), (349230650U))))))));
                        var_32 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((_Bool) max((arr_29 [i_6] [12LL] [i_8]), (((/* implicit */long long int) arr_30 [2LL] [(unsigned char)14] [i_8] [i_14])))))), (((unsigned short) max((arr_31 [i_6] [i_6] [(unsigned char)10] [i_6]), (((/* implicit */int) arr_48 [13LL] [13LL] [i_8] [i_8] [13LL] [i_8] [7])))))));
                        arr_55 [i_6] [i_7] [i_8] [i_14] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_28 [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7 - 2]))) : (((unsigned long long int) arr_25 [i_7])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_44 [i_6 + 1] [i_6 + 1]))) ? (((((/* implicit */_Bool) arr_27 [6ULL] [6ULL] [i_7] [6ULL])) ? (arr_23 [i_6]) : (arr_39 [8U] [i_7]))) : (((unsigned int) arr_49 [i_6] [i_7] [i_8] [i_14] [i_7] [i_14])))))));
                    }
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) arr_25 [10]))));
                    var_34 = ((/* implicit */_Bool) max((arr_35 [i_6] [i_7] [(unsigned char)3] [18U] [i_6]), (((/* implicit */unsigned long long int) max((arr_31 [i_6] [i_6 + 1] [i_7] [i_6 - 1]), (arr_31 [i_6 - 1] [i_6 + 1] [i_7] [i_6 + 1]))))));
                }
                arr_56 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) min((1080536122), (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
