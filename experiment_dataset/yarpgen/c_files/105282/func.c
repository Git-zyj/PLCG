/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105282
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
    var_18 = var_1;
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (short)13465);
                    var_19 |= ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0]))));
                    arr_11 [i_0] = ((/* implicit */_Bool) arr_8 [i_0]);
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            arr_15 [i_3] = ((/* implicit */int) arr_13 [i_0] [i_0]);
            /* LoopSeq 2 */
            for (unsigned int i_4 = 2; i_4 < 24; i_4 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    var_20 = ((/* implicit */int) arr_20 [i_5] [i_4] [2] [i_5]);
                    arr_22 [i_5] [i_3] [i_4 + 1] [i_5] [23U] [i_3] = ((/* implicit */long long int) -1);
                    arr_23 [i_0] [i_3] |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3]))));
                }
                for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    arr_28 [(unsigned short)20] [(unsigned short)20] [3LL] [i_6] [i_6] = ((/* implicit */unsigned long long int) 957453017U);
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((/* implicit */int) arr_30 [i_3] [(signed char)0] [i_4 + 1] [i_6] [i_4 - 1] [i_6])))))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [1U] [i_3] [i_4 - 2] [i_7]))) : (-6815827936903910493LL)));
                    }
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        arr_35 [i_4] [i_4] [i_8] = ((/* implicit */signed char) (-((+(0)))));
                        arr_36 [(short)4] [7LL] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)4968)) : (((/* implicit */int) (short)-17174))));
                    }
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) arr_21 [(short)7] [i_6] [i_6] [i_6] [i_6])) < (((/* implicit */int) arr_6 [i_4] [i_4] [i_4 + 1])))))));
                    var_24 = -1978538479;
                }
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    arr_39 [i_0] [i_3] [(short)14] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_26 [i_0] [i_3] [i_3] [i_4 - 1] [i_4 - 2] [i_9]) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) -5)))))));
                    arr_40 [(unsigned short)4] [(unsigned short)4] [i_4] [(_Bool)1] [i_9] [i_3] = ((/* implicit */unsigned long long int) 12836316U);
                    arr_41 [20] [i_3] [i_4 + 1] [(short)3] = ((/* implicit */short) arr_38 [i_4 - 1] [i_3] [i_0] [i_0]);
                }
                var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_4 - 1] [i_0] [i_0]))));
            }
            for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                /* LoopSeq 2 */
                for (signed char i_11 = 3; i_11 < 22; i_11 += 2) /* same iter space */
                {
                    arr_47 [i_0] [i_3] [i_11 + 3] = ((/* implicit */long long int) ((arr_16 [i_3] [i_11 + 1] [i_10] [i_10]) ? (arr_24 [i_3] [i_3] [i_3] [i_11 - 2] [i_11]) : (arr_24 [i_0] [i_3] [i_11] [i_11 - 1] [8LL])));
                    var_26 += ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_10]))) : ((~(2064625433U)))));
                    arr_48 [i_0] [i_3] [i_3] [i_11] &= ((/* implicit */short) 8191U);
                }
                for (signed char i_12 = 3; i_12 < 22; i_12 += 2) /* same iter space */
                {
                    arr_52 [i_12] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [22] [i_0])) ? (arr_24 [i_12] [i_10] [i_3] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [i_3] [19LL] [i_10] [i_10] [(short)7]))))) / (((/* implicit */unsigned int) 2147483639))));
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) 4159220557U))));
                    var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0])) | (6U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))));
                }
                var_29 = ((/* implicit */int) min((var_29), (657841977)));
                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)4961)) ? (((/* implicit */int) arr_0 [i_0] [i_3])) : (((/* implicit */int) (_Bool)1)))))))));
                var_31 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_43 [i_3] [i_3] [i_10])) > (arr_1 [i_3])));
            }
            arr_53 [i_0] [i_3] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */int) arr_0 [i_3] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_3]))));
            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) arr_42 [i_0] [i_0] [i_0] [i_0]))));
            arr_54 [i_3] [i_3] [i_0] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_18 [i_0] [i_3])) ? (arr_3 [15LL] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_3]))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (arr_13 [(signed char)16] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [13] [i_0] [i_3] [i_0] [(signed char)18] [i_0]))))))));
        }
        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_14 = 0; i_14 < 25; i_14 += 3) 
            {
                var_33 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_27 [i_0])) == (arr_12 [i_14] [i_13] [i_0])));
                var_34 -= ((/* implicit */int) arr_6 [i_14] [i_13] [i_0]);
            }
            /* vectorizable */
            for (signed char i_15 = 0; i_15 < 25; i_15 += 2) 
            {
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0] [i_13] [i_15] [i_0])) ? (((/* implicit */int) arr_17 [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_17 [i_15] [i_15] [i_13] [i_0]))));
                var_36 *= ((/* implicit */short) ((((/* implicit */int) arr_14 [i_13])) < (((/* implicit */int) arr_14 [i_0]))));
            }
            var_37 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_13])) ? (arr_50 [i_13] [i_13] [(_Bool)1]) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_58 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65535))))))) ? (((((/* implicit */_Bool) (short)-24097)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31))) : (arr_1 [i_13]))) : (min((((/* implicit */unsigned long long int) (+(2147483647)))), ((-(arr_45 [i_0] [i_0] [i_13] [14U])))))));
            /* LoopSeq 2 */
            for (short i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                var_38 = ((/* implicit */int) 2360169476U);
                var_39 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32767))))) > (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_16 [i_0] [17] [i_0] [17]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_0] [i_13] [i_16]))) * (arr_45 [i_0] [i_13] [i_16] [i_13])))))));
            }
            for (unsigned short i_17 = 1; i_17 < 24; i_17 += 1) 
            {
                var_40 = ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_17])) ? (((/* implicit */int) arr_55 [i_0])) : (((/* implicit */int) arr_61 [i_0] [i_0] [i_17] [i_17])));
                var_41 = ((/* implicit */unsigned int) arr_62 [i_0] [i_0] [i_17]);
                var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) arr_16 [i_0] [i_13] [i_17] [i_17]))));
            }
            var_43 |= ((((/* implicit */_Bool) (~(arr_37 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (5) : (((/* implicit */int) (short)-3477)));
            /* LoopNest 3 */
            for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 1) 
            {
                for (int i_19 = 2; i_19 < 23; i_19 += 1) 
                {
                    for (short i_20 = 0; i_20 < 25; i_20 += 1) 
                    {
                        {
                            arr_76 [i_0] [i_19] [(_Bool)1] [i_19] [i_20] = ((/* implicit */short) min(((~(arr_24 [i_0] [13] [i_19] [i_19 - 1] [8ULL]))), (((((/* implicit */_Bool) arr_60 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_0] [i_13] [24U]))) : (((((/* implicit */_Bool) arr_58 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_0] [(unsigned short)8] [i_13] [i_18] [i_19] [i_20]))) : (arr_34 [i_0] [i_0] [(short)16] [i_19] [16LL])))))));
                            var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) (_Bool)0))));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (signed char i_21 = 2; i_21 < 19; i_21 += 2) /* same iter space */
    {
        var_45 = ((/* implicit */int) arr_42 [i_21 - 2] [i_21 + 1] [i_21 - 2] [i_21 - 2]);
        var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_21] [i_21] [i_21] [i_21 + 1] [i_21]))) * (157536306U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_21 + 3] [i_21 + 1] [i_21 + 3] [i_21 - 1]))) : (arr_8 [i_21])));
        var_47 = arr_37 [i_21] [1] [1] [i_21 + 2] [i_21];
        arr_81 [(short)5] = ((/* implicit */unsigned int) arr_77 [i_21 + 3]);
    }
    for (signed char i_22 = 2; i_22 < 19; i_22 += 2) /* same iter space */
    {
        var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) -762576144))))) ? (1881563624U) : (4294967295U)))) || (((/* implicit */_Bool) min((1755794487U), (((/* implicit */unsigned int) -1282113954))))))))));
        var_49 |= ((arr_37 [24U] [i_22] [i_22] [3U] [i_22]) / (((arr_37 [i_22] [(_Bool)1] [(unsigned short)16] [i_22 + 1] [i_22]) / (arr_37 [i_22] [i_22 - 2] [4U] [i_22] [4U]))));
    }
    for (signed char i_23 = 2; i_23 < 19; i_23 += 2) /* same iter space */
    {
        arr_87 [i_23] = 762576144;
        var_50 = ((/* implicit */short) arr_80 [i_23 + 2]);
        arr_88 [i_23] = ((/* implicit */long long int) arr_33 [i_23] [i_23 + 3] [i_23] [i_23] [i_23] [i_23] [i_23]);
        var_51 = ((/* implicit */short) arr_50 [i_23] [(signed char)6] [22ULL]);
    }
    var_52 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 3 */
    for (int i_24 = 2; i_24 < 13; i_24 += 1) 
    {
        for (signed char i_25 = 0; i_25 < 16; i_25 += 4) 
        {
            for (unsigned int i_26 = 0; i_26 < 16; i_26 += 1) 
            {
                {
                    var_53 *= arr_17 [i_24] [i_26] [i_26] [i_24 - 1];
                    /* LoopNest 2 */
                    for (unsigned short i_27 = 4; i_27 < 15; i_27 += 1) 
                    {
                        for (unsigned short i_28 = 0; i_28 < 16; i_28 += 2) 
                        {
                            {
                                var_54 *= ((/* implicit */signed char) arr_97 [i_28] [i_28] [i_25] [12LL]);
                                arr_105 [i_24] [i_25] [i_26] [i_27] [14U] = ((/* implicit */unsigned int) arr_97 [i_24] [(short)1] [i_26] [i_27]);
                                var_55 = max(((short)-19984), ((short)9476));
                            }
                        } 
                    } 
                    arr_106 [i_25] [i_25] [i_25] [i_26] = arr_75 [(short)18] [i_24] [i_25] [i_24] [i_25] [i_26];
                    arr_107 [i_26] [i_26] [i_24] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) min((arr_29 [i_26]), (((/* implicit */unsigned short) arr_25 [i_24] [i_24] [i_24] [i_24]))))), (arr_56 [i_26] [i_26]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1875773916)) ? (-1030628795) : (271915369))))));
                }
            } 
        } 
    } 
    var_56 = ((/* implicit */_Bool) var_4);
}
