/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13761
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
    for (unsigned long long int i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */short) arr_1 [i_0] [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */short) -1203280506);
                        arr_12 [i_0 + 4] [i_0] [i_3] &= ((/* implicit */int) var_3);
                        var_16 = ((/* implicit */unsigned long long int) 2950136395U);
                        var_17 *= ((/* implicit */short) arr_4 [i_2] [i_2]);
                        var_18 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_6 [i_2] [i_2] [i_2])), (arr_10 [i_3] [i_3 - 3] [i_3 - 4] [i_3 - 4] [i_3 - 4] [i_3 - 4]))), (((/* implicit */unsigned int) min((var_2), (((/* implicit */signed char) arr_5 [i_0] [i_1] [i_2])))))));
                    }
                    var_19 = max((((unsigned long long int) -1162813524)), (((/* implicit */unsigned long long int) var_4)));
                    arr_13 [i_1] [i_1 + 1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (signed char)3))))), ((unsigned char)255)));
                    arr_14 [i_1] [i_1] [i_2] [3] = (+((+(arr_6 [i_2 + 2] [i_2 + 2] [i_0 + 4]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) -2088685924);
                        arr_24 [i_4] [i_5] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_4 - 2])) ? (((/* implicit */unsigned long long int) 0U)) : (var_0)));
                        var_21 += ((/* implicit */int) ((arr_7 [i_4 - 1] [i_4 - 2] [i_5]) - (arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 1])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_7 = 1; i_7 < 9; i_7 += 3) 
            {
                for (short i_8 = 2; i_8 < 9; i_8 += 3) 
                {
                    {
                        arr_33 [(_Bool)1] [i_8] [i_4] [i_0] [i_0] = ((/* implicit */_Bool) 1344830901U);
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((arr_23 [i_8] [i_8 - 1] [i_8 - 1] [6U]) ? (((/* implicit */int) arr_23 [i_8 + 1] [i_8 - 1] [i_8 - 1] [0ULL])) : (2088685931))))));
                    }
                } 
            } 
        }
        var_23 = ((/* implicit */_Bool) ((signed char) min((arr_10 [i_0] [i_0] [i_0 - 1] [i_0] [(unsigned char)1] [i_0 - 1]), (((/* implicit */unsigned int) (signed char)31)))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        var_24 *= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) var_14)), (var_0))))) >> (((arr_36 [i_9] [i_9]) - (1906068380)))));
        var_25 = ((((/* implicit */int) ((1904035148) < (16777208)))) & (max((arr_36 [i_9] [i_9]), (((/* implicit */int) (signed char)-120)))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 10; i_10 += 2) 
    {
        arr_39 [i_10] [i_10] = ((/* implicit */_Bool) 1992194103);
        /* LoopSeq 3 */
        for (short i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                arr_46 [i_10] [i_10] &= ((/* implicit */unsigned long long int) (unsigned char)133);
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((short) 1904035148)))));
            }
            /* LoopSeq 4 */
            for (int i_13 = 4; i_13 < 9; i_13 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */int) ((unsigned long long int) ((arr_21 [i_10] [i_11] [i_10]) >> (((var_0) - (7604511610465228956ULL))))));
                arr_50 [i_11] = ((/* implicit */signed char) arr_32 [i_13 - 1] [i_13] [6] [i_13 - 1] [i_13 + 1] [(short)8]);
            }
            for (int i_14 = 4; i_14 < 9; i_14 += 1) /* same iter space */
            {
                var_28 += ((/* implicit */unsigned long long int) arr_48 [i_10]);
                /* LoopSeq 2 */
                for (short i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (-(arr_53 [i_10] [i_14] [i_14 + 1] [i_14]))))));
                    var_30 = ((/* implicit */unsigned int) (!(var_12)));
                    /* LoopSeq 3 */
                    for (int i_16 = 2; i_16 < 8; i_16 += 4) 
                    {
                        var_31 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -1203280521)) ? (((/* implicit */unsigned int) 16760832)) : (3313216275U))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)5)))))));
                        arr_60 [i_11] [i_11] [(short)2] [i_11] = (~(((arr_7 [i_10] [i_10] [i_15]) | (var_0))));
                        var_32 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-16802)))))));
                        var_33 = 1203280506;
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_34 = ((/* implicit */signed char) arr_23 [i_11] [4ULL] [i_14] [i_11]);
                        arr_63 [i_11] [i_14 - 1] [i_14 - 1] [i_17] [i_17] [i_11] [i_17] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_57 [i_14 - 2] [i_14] [i_14 + 1] [i_14 - 3] [i_14 - 1]))));
                        var_35 = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_5)) - (((/* implicit */int) (_Bool)1))))));
                    }
                    for (int i_18 = 0; i_18 < 10; i_18 += 3) 
                    {
                        var_36 = ((/* implicit */int) ((unsigned int) (~(((/* implicit */int) arr_20 [i_10] [i_10] [i_14])))));
                        var_37 = ((/* implicit */short) arr_17 [i_14 - 4] [i_10] [i_10]);
                        var_38 = ((((/* implicit */int) var_7)) / (((/* implicit */int) var_14)));
                    }
                    var_39 = ((/* implicit */int) (-(arr_32 [i_14] [i_14 + 1] [i_14 - 4] [i_14] [i_14 - 3] [i_14 - 2])));
                    arr_67 [6] [i_11] [i_11] [i_10] = ((/* implicit */unsigned long long int) ((arr_55 [i_15]) >= (((/* implicit */int) var_2))));
                }
                for (unsigned int i_19 = 3; i_19 < 9; i_19 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 1; i_20 < 9; i_20 += 3) 
                    {
                        arr_73 [i_11] [i_11] = ((/* implicit */long long int) ((arr_64 [i_14] [i_14] [0] [i_14 + 1] [9ULL]) >> (((var_3) - (11689917667571278939ULL)))));
                        var_40 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (unsigned char)192)) - (((/* implicit */int) (short)-8519)))));
                        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) 2147481600ULL)) ? (arr_27 [i_14 - 1] [1U] [i_14 - 1]) : (((/* implicit */unsigned long long int) var_4))));
                        var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_10)))))));
                        var_43 += ((/* implicit */short) (-(((/* implicit */int) arr_35 [i_19 + 1]))));
                    }
                    var_44 = ((/* implicit */unsigned char) ((var_12) && (((/* implicit */_Bool) var_13))));
                }
                var_45 = ((/* implicit */unsigned char) ((arr_66 [i_11] [2] [i_14 - 3] [i_14 - 3] [7LL]) | (arr_66 [i_11] [i_14] [i_14 - 3] [i_14] [i_14])));
                var_46 = ((/* implicit */signed char) (-(((-1162813524) / (((/* implicit */int) var_5))))));
                var_47 = ((/* implicit */unsigned char) ((int) ((short) -148860003)));
            }
            for (int i_21 = 4; i_21 < 9; i_21 += 1) /* same iter space */
            {
                var_48 = (+(((/* implicit */int) arr_51 [i_21 - 2] [i_11] [i_11])));
                arr_78 [i_11] [i_11] [i_11] = ((/* implicit */int) (unsigned char)128);
                var_49 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_12))))));
            }
            for (int i_22 = 4; i_22 < 9; i_22 += 1) /* same iter space */
            {
                arr_82 [i_11] [i_11] [1LL] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (var_0)));
                var_50 = ((/* implicit */unsigned int) arr_56 [i_10] [3U] [3U] [i_11] [3U] [5]);
            }
            arr_83 [i_11] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)123)) <= (((/* implicit */int) (unsigned char)224))));
        }
        for (int i_23 = 2; i_23 < 7; i_23 += 3) /* same iter space */
        {
            var_51 = ((/* implicit */int) arr_16 [i_23 - 2] [i_23] [i_10]);
            var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) ((((/* implicit */_Bool) (+(335505061U)))) ? (((unsigned int) arr_62 [i_10])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [i_10] [i_10] [i_10])) ? (1500813695) : (((/* implicit */int) arr_23 [i_10] [i_23 - 2] [i_23 - 2] [i_10]))))))))));
            /* LoopNest 2 */
            for (unsigned int i_24 = 0; i_24 < 10; i_24 += 1) 
            {
                for (short i_25 = 0; i_25 < 10; i_25 += 1) 
                {
                    {
                        var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) (-(((/* implicit */int) var_5)))))));
                        var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_13))));
                    }
                } 
            } 
        }
        for (int i_26 = 2; i_26 < 7; i_26 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_27 = 3; i_27 < 9; i_27 += 2) 
            {
                var_55 = (-(2341436602U));
                arr_101 [i_26] [i_26] = ((/* implicit */int) var_12);
                arr_102 [(signed char)6] [i_26] [i_10] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_87 [i_27] [i_27 - 3] [i_27 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)33))))) : (arr_6 [3U] [i_26 + 2] [i_10]));
                var_56 = ((/* implicit */int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_93 [i_27 - 1] [i_27 - 1] [i_27 - 2] [i_27] [2] [i_26 + 2]))) : (arr_40 [i_26] [i_26])));
                var_57 ^= ((/* implicit */unsigned char) (+(668545716U)));
            }
            arr_103 [i_26] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((arr_44 [i_10] [i_10] [i_10] [i_10]) % (((/* implicit */int) var_14)))))));
            arr_104 [i_26] [i_26] = (-(var_3));
            /* LoopNest 2 */
            for (short i_28 = 0; i_28 < 10; i_28 += 4) 
            {
                for (unsigned long long int i_29 = 0; i_29 < 10; i_29 += 3) 
                {
                    {
                        var_58 *= ((/* implicit */_Bool) var_14);
                        arr_110 [i_10] [i_26] [i_26] [i_26] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
                        var_59 = ((/* implicit */int) ((unsigned char) (-(974384656))));
                        var_60 = ((/* implicit */short) ((long long int) arr_89 [i_26] [i_26]));
                    }
                } 
            } 
            arr_111 [i_10] [i_26] = ((/* implicit */_Bool) var_9);
        }
        var_61 = ((/* implicit */signed char) ((unsigned char) 5959076968757332200ULL));
    }
}
