/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125241
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
    var_15 = ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)25074)) ? (((/* implicit */int) max((arr_1 [i_1]), (arr_1 [5])))) : (((/* implicit */int) (short)-32755))));
            var_17 ^= ((/* implicit */unsigned int) (~(((((((/* implicit */int) arr_3 [i_0 + 1])) + (2147483647))) >> ((((+(var_3))) + (866587600676610303LL)))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 2) /* same iter space */
        {
            arr_9 [i_0] = ((/* implicit */unsigned short) ((arr_2 [i_0] [i_2 - 2] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 18446744073709551613ULL))))));
            arr_10 [i_0 + 1] [i_0 + 1] [i_2] = ((/* implicit */unsigned long long int) arr_5 [(signed char)0] [(signed char)21] [(signed char)21]);
            /* LoopSeq 2 */
            for (int i_3 = 2; i_3 < 19; i_3 += 1) 
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_3 + 1] [(short)13] [i_3 + 2])) ? ((+(((/* implicit */int) (short)-32755)))) : (((/* implicit */int) arr_11 [i_0 - 3] [13] [i_2 - 2]))));
                var_19 = ((/* implicit */signed char) ((var_6) == (var_10)));
            }
            for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                arr_15 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_4]);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 1) 
                {
                    for (unsigned int i_6 = 4; i_6 < 18; i_6 += 4) 
                    {
                        {
                            var_20 |= ((/* implicit */int) (((-(((/* implicit */int) arr_11 [i_2] [i_4] [i_5 - 2])))) >= ((-(((/* implicit */int) arr_19 [i_0] [i_2 + 1] [i_0] [(signed char)13] [i_6 + 2]))))));
                            var_21 = ((/* implicit */long long int) arr_12 [(unsigned char)18]);
                            var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_2 - 2] [i_2 + 1] [i_5 - 1] [i_6 + 1])) && (((/* implicit */_Bool) arr_20 [i_0 - 2] [i_2 - 1] [i_2 + 1] [i_5 - 1] [i_6 + 2]))));
                            arr_21 [i_0] [i_0] [i_4] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((arr_6 [i_0 - 1] [i_5 + 1] [i_6 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 1] [i_6 - 2] [i_4])))));
                        }
                    } 
                } 
                arr_22 [(signed char)6] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_19 [i_4] [i_0] [i_0] [i_0] [i_0 - 1]))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        {
                            var_23 *= ((/* implicit */signed char) (+(((/* implicit */int) arr_13 [i_2 - 1] [i_0 - 1]))));
                            arr_28 [i_0] [i_8] [10ULL] |= ((/* implicit */unsigned char) arr_25 [i_0 - 1] [i_2] [i_4] [i_7] [i_8]);
                            arr_29 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 1] [i_2 - 2]))));
                            var_24 = ((/* implicit */unsigned int) ((0ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_2] [i_7] [i_8])) ^ (((/* implicit */int) arr_26 [i_0] [i_2] [i_4] [i_7] [i_2] [i_7])))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_4])) && (((/* implicit */_Bool) arr_26 [i_2] [(unsigned char)16] [(unsigned short)16] [(unsigned short)16] [(unsigned short)16] [i_2]))));
            }
            /* LoopNest 3 */
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                for (int i_10 = 3; i_10 < 21; i_10 += 4) 
                {
                    for (unsigned int i_11 = 1; i_11 < 21; i_11 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_10 - 2] [i_10 + 1] [i_10 + 1]))));
                            var_27 = ((/* implicit */unsigned char) (short)-9394);
                            var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_0] [i_0] [(short)3] [(short)3])))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_12 = 2; i_12 < 21; i_12 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                for (short i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    for (unsigned int i_15 = 1; i_15 < 20; i_15 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) arr_33 [i_0] [i_0 - 1] [i_0 - 3] [i_0]);
                            arr_46 [i_12] [i_13] [i_12] [i_14] [i_14] [i_14] [i_15] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_16 [i_12 - 2] [i_15] [i_15] [i_15] [i_15] [i_15 - 1])) : (((/* implicit */int) arr_27 [i_12 - 2] [i_13] [i_14] [i_14] [i_15] [i_15 - 1] [i_15])))) > (((/* implicit */int) min((arr_43 [i_12 - 2] [11U] [i_13] [i_13]), ((unsigned short)29269))))));
                            arr_47 [i_0] [i_0 - 3] [i_12] [i_13] [i_14] [i_13] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (2ULL)))) ? ((~(2147483647))) : ((-(arr_23 [i_0] [(signed char)16] [i_0] [i_0] [i_0] [i_0])))))), (arr_41 [i_12 - 2] [i_15 + 2])));
                            var_30 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0 - 3] [i_0 - 2] [i_0]))))), ((-(((/* implicit */int) (unsigned char)28))))));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_13] [i_15] [i_14] [i_13] [6ULL] [i_13]))))) | (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551611ULL)) && (((/* implicit */_Bool) 7957563226918012167LL)))))))) ? (((/* implicit */unsigned int) ((arr_27 [i_15 + 2] [i_13] [i_12 - 2] [i_13] [i_0] [i_13] [i_0]) ? (((/* implicit */int) arr_27 [i_15] [i_13] [i_12 - 1] [(_Bool)1] [i_13] [i_13] [i_0])) : (((/* implicit */int) arr_27 [(unsigned char)19] [i_13] [i_12 - 1] [(unsigned char)19] [i_0] [i_13] [(unsigned char)19]))))) : (((23U) >> (((((/* implicit */int) arr_44 [i_13] [i_12 - 1] [i_12 - 1] [i_13] [12] [i_15 + 1] [i_15 + 1])) - (62)))))));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */signed char) arr_39 [i_0] [i_12] [i_12] [6U]);
        }
        arr_48 [i_0 + 1] = ((/* implicit */signed char) var_9);
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 22; i_16 += 4) 
        {
            for (unsigned short i_17 = 0; i_17 < 22; i_17 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        arr_55 [6] [(signed char)18] [11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [i_0 - 1] [i_0] [i_0 - 3]), (-4730898083355067066LL)))) ? (max((arr_2 [i_0 + 1] [i_0] [i_0 - 2]), (arr_2 [i_0 - 1] [i_0] [i_0 - 2]))) : (arr_2 [i_0 - 2] [i_0 - 3] [i_0 - 3])));
                        arr_56 [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) arr_23 [6ULL] [i_16] [6ULL] [i_0 + 1] [i_18] [i_17]);
                        var_33 |= ((/* implicit */short) (_Bool)0);
                    }
                    var_34 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((4730898083355067066LL) >> (((((/* implicit */int) arr_37 [i_0] [i_0 - 3] [i_16])) + (136))))) : (((/* implicit */long long int) max((((/* implicit */int) (signed char)-35)), (var_10))))));
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)16)) % (((/* implicit */int) arr_13 [8U] [8U])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_0] [(unsigned short)12] [i_0])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-4730898083355067066LL)))) ? (min((715113560U), (((/* implicit */unsigned int) arr_7 [i_0] [i_16] [i_17])))) : (max((3562670720U), (((/* implicit */unsigned int) var_10)))))) : (715113560U)));
                    arr_57 [i_17] [i_16] [i_0] [i_0] = ((/* implicit */short) arr_44 [i_16] [i_0] [i_16] [18] [i_16] [i_16] [i_17]);
                    arr_58 [i_0] [i_0 + 1] = ((/* implicit */_Bool) arr_45 [i_17]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 22; i_19 += 2) 
        {
            for (int i_20 = 3; i_20 < 21; i_20 += 3) 
            {
                {
                    var_36 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 636351650)) ? (arr_60 [i_0 + 1]) : (arr_60 [i_0 - 1])))), (((((/* implicit */_Bool) arr_44 [i_19] [i_0] [i_0 - 2] [i_19] [(unsigned char)18] [i_20 - 1] [i_20 - 1])) ? (arr_2 [i_20 - 2] [i_19] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_19] [i_20] [i_19] [i_19] [i_0] [i_0] [i_19])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 1; i_21 < 18; i_21 += 2) 
                    {
                        for (unsigned char i_22 = 0; i_22 < 22; i_22 += 1) 
                        {
                            {
                                arr_70 [i_0] [i_19] [i_20 - 1] [i_0] [17] = arr_4 [i_19] [i_20] [i_19];
                                arr_71 [i_0] [14ULL] [i_20] [i_20] [i_19] [i_0] [i_0] = max((((/* implicit */unsigned int) ((1902015526U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)72)))))), (var_4));
                                var_37 -= ((/* implicit */unsigned short) ((1902015502U) % (arr_35 [i_0] [i_19] [i_19] [i_20 - 1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_23 = 3; i_23 < 18; i_23 += 4) 
                    {
                        for (unsigned char i_24 = 1; i_24 < 18; i_24 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (+(arr_6 [i_19] [i_20] [i_24 + 3]))))));
                                var_39 = (-(arr_42 [i_0 - 3] [i_19] [i_20] [i_23] [i_24] [i_24]));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) (signed char)-31))));
                    arr_76 [i_0] = ((/* implicit */int) arr_41 [i_20] [i_0]);
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)29372)))))));
    }
    for (signed char i_25 = 0; i_25 < 18; i_25 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_26 = 1; i_26 < 16; i_26 += 2) 
        {
            for (signed char i_27 = 0; i_27 < 18; i_27 += 2) 
            {
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    {
                        var_42 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)54633)) ? (((/* implicit */int) (short)-29373)) : (((/* implicit */int) arr_45 [i_25])))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_26 - 1] [i_27] [i_28])))))))), (min((arr_20 [i_26 + 1] [i_26] [i_26 + 1] [8LL] [i_26]), (arr_20 [i_26 - 1] [i_26 + 1] [i_26 + 1] [4U] [i_26 + 1])))));
                        var_43 ^= ((/* implicit */int) ((398370394U) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((short) arr_2 [i_25] [i_25] [i_25]))) >= ((~(((/* implicit */int) arr_30 [i_28]))))))))));
                        var_44 = ((/* implicit */unsigned short) arr_52 [i_25] [i_25] [i_25]);
                    }
                } 
            } 
        } 
        var_45 = ((/* implicit */unsigned char) var_2);
        var_46 = ((/* implicit */int) ((((/* implicit */_Bool) 3896596902U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3579853742U)) || (((/* implicit */_Bool) (short)-32755)))))) : (min((arr_25 [i_25] [i_25] [i_25] [i_25] [i_25]), (((/* implicit */unsigned int) (_Bool)1))))));
        arr_89 [i_25] = ((/* implicit */long long int) var_8);
        var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) ((unsigned char) max(((unsigned short)30237), (((/* implicit */unsigned short) (unsigned char)243))))))));
    }
    var_48 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (((((/* implicit */long long int) 398370394U)) / (-3191145567347563205LL))))))));
    var_49 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(var_10)))), ((+(var_4)))));
    var_50 *= ((/* implicit */unsigned char) (short)5889);
}
