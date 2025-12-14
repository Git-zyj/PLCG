/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112940
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */unsigned short) max((1073741823U), (max((((/* implicit */unsigned int) 448863116)), (1073741818U)))));
        var_10 = ((/* implicit */unsigned short) max((((unsigned long long int) max((((/* implicit */unsigned short) (signed char)54)), (arr_1 [i_0] [i_0])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0 + 2] [13ULL]), (((/* implicit */short) (_Bool)0))))))))));
        var_11 -= ((/* implicit */unsigned long long int) min(((unsigned char)160), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 2])))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 3; i_2 < 16; i_2 += 3) 
        {
            arr_7 [(unsigned short)17] [i_2] [i_2 - 2] = ((/* implicit */unsigned long long int) (~(3677923065U)));
            arr_8 [i_1] [i_2] [i_1] = ((/* implicit */signed char) (+(-1497508508566007761LL)));
            var_12 = ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])) : (arr_3 [i_1] [i_1]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1497508508566007760LL)) ? (243777394) : (((/* implicit */int) (_Bool)1)))))));
            var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1048575ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 243777394)))))) : (3221225486U)));
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [5LL])) ? (arr_3 [(_Bool)1] [i_2]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))));
        }
        arr_9 [i_1] = ((/* implicit */_Bool) 15400717287101844391ULL);
        var_15 = ((/* implicit */signed char) 1177970627);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-21404)))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-113)), ((unsigned short)19262))))) + (((unsigned long long int) arr_14 [12LL]))))))));
            var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [(unsigned short)14]))))) ? (((/* implicit */long long int) 268435440U)) : (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (1073741810U))))))));
        }
        var_18 = ((/* implicit */_Bool) ((unsigned long long int) (-(arr_11 [(_Bool)1] [i_3]))));
        var_19 = ((/* implicit */int) (short)21403);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 2; i_5 < 19; i_5 += 2) 
        {
            arr_18 [i_3] [i_3] = ((/* implicit */signed char) (-(((long long int) (short)21404))));
            /* LoopSeq 3 */
            for (signed char i_6 = 3; i_6 < 20; i_6 += 4) 
            {
                arr_22 [i_3] [14LL] = ((arr_16 [i_3 + 1] [i_6 + 1] [i_6 + 1]) - (((/* implicit */int) (unsigned short)65529)));
                /* LoopSeq 1 */
                for (long long int i_7 = 1; i_7 < 20; i_7 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_8 = 3; i_8 < 19; i_8 += 3) 
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */int) (_Bool)1)) : (243777376))))));
                        arr_27 [i_8] [i_7] [i_6] [i_7] [4ULL] = ((/* implicit */signed char) arr_19 [5ULL] [i_5 - 2]);
                        arr_28 [i_3] [i_3] [i_5 + 2] [i_5] [i_5 + 2] [i_7 + 1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21409)) ? (1641815776) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (short i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        var_21 = (!(((/* implicit */_Bool) arr_25 [i_7] [i_6 - 1])));
                        arr_32 [i_3] [(unsigned char)3] [i_7] = ((/* implicit */unsigned int) arr_19 [i_9] [i_3]);
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_24 [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_5]))));
                        var_23 = ((/* implicit */unsigned short) arr_25 [i_7] [i_5]);
                    }
                    for (int i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        arr_35 [i_7] [i_7 - 1] [3] = ((/* implicit */long long int) 0U);
                        var_24 = ((((/* implicit */int) ((_Bool) var_6))) + (((/* implicit */int) var_3)));
                        arr_36 [i_10] [16U] [i_7] [10] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_23 [(_Bool)1] [i_7] [i_6])) / (((/* implicit */int) (short)-19805))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_39 [16] [i_7] [i_7] [i_7 - 1] [(short)13] = ((/* implicit */unsigned long long int) (-(arr_20 [i_3] [i_5] [i_3 + 2] [i_3 + 1])));
                        arr_40 [i_3] [(_Bool)1] [i_3] [i_7] [18LL] = ((/* implicit */int) var_3);
                        var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_19 [i_3 + 3] [i_5])) ^ (2147483662U)));
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3064681712598581747LL)))))));
                    }
                    var_27 = (i_7 % 2 == zero) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_23 [i_6 - 3] [i_5 - 1] [i_6])) >> (((arr_13 [i_7]) - (4116561609U))))) > (((/* implicit */int) arr_23 [(_Bool)1] [i_7 + 1] [i_7]))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_23 [i_6 - 3] [i_5 - 1] [i_6])) >> (((((arr_13 [i_7]) - (4116561609U))) - (2027526694U))))) > (((/* implicit */int) arr_23 [(_Bool)1] [i_7 + 1] [i_7])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 1; i_12 < 18; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 856587323129523327ULL))) ? (((/* implicit */unsigned long long int) ((unsigned int) (-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) var_1)) ? (arr_38 [i_5] [i_6] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_3] [i_5] [i_6 - 1] [i_5] [i_6 - 1])))))));
                        var_29 = ((/* implicit */unsigned long long int) ((-9223372036854775796LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)42698)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_31 -= ((/* implicit */unsigned long long int) arr_37 [3U] [3U] [3U] [7U] [(signed char)14] [(signed char)14] [i_12]);
                        arr_44 [i_5] [i_5 - 2] [i_6 - 3] [i_7] [i_12 + 2] [i_7] = var_5;
                    }
                    var_32 ^= ((/* implicit */unsigned short) arr_33 [i_5 + 1] [i_5] [i_5] [i_7 - 1] [13LL] [(unsigned short)14] [i_6]);
                }
            }
            for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_14 = 1; i_14 < 19; i_14 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_55 [i_3] [i_5] [i_13] [i_13] [i_13] [i_14] [i_13] = ((long long int) ((unsigned long long int) 648040002U));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6680751669937127337LL)) ? (17121952359307922889ULL) : (((/* implicit */unsigned long long int) -9223372036854775796LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_3] [4U] [i_13] [i_13] [i_14 + 2] [i_3] [(unsigned short)17])) || (((/* implicit */_Bool) arr_14 [i_13])))))) : (((((/* implicit */unsigned int) 0)) & (461374199U)))));
                    }
                    arr_56 [i_13] [8] = ((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775790LL)) ? (((arr_45 [i_3] [i_3] [i_13]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_3 - 1] [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3 + 2])))));
                    arr_57 [i_14] [i_13] [18] [i_13] [i_3 + 1] = ((/* implicit */unsigned long long int) ((arr_48 [i_3 + 3] [i_3 - 1] [i_14 - 1] [i_14 - 1] [(unsigned short)7]) ? (((/* implicit */int) ((-324815525836178120LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) arr_24 [i_3] [i_3 + 2] [(unsigned short)1] [i_3 + 2] [i_14])) * (((/* implicit */int) (signed char)94))))));
                }
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 3; i_17 < 17; i_17 += 2) 
                    {
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_9))) & (-9223372036854775796LL))))))));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_17 + 3] [i_17 + 2] [i_17 - 2] [i_17 - 3] [i_17 + 4]))) >= (((((/* implicit */_Bool) 8889841462789102289LL)) ? (var_8) : (((/* implicit */unsigned long long int) 1152903912420802560LL))))));
                    }
                    for (unsigned short i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_58 [i_13] [i_3 + 2] [9ULL] [i_13] [i_18])) ? (arr_49 [i_3 + 1]) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                        var_37 = ((/* implicit */int) min((var_37), (((((/* implicit */int) (unsigned short)30448)) << (((var_7) - (4555327139126504073LL)))))));
                        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) 0))))))));
                        arr_66 [i_3] [i_13] [2] = ((/* implicit */unsigned int) (~(arr_37 [i_3] [i_3] [i_13] [20U] [i_16 + 1] [i_16 + 1] [i_5 - 2])));
                    }
                    var_39 = ((/* implicit */int) var_1);
                    var_40 = ((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)384))));
                }
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) /* same iter space */
                {
                    arr_69 [i_3 + 3] [i_5 + 1] [i_13] [i_19 + 1] [i_13] = ((/* implicit */_Bool) ((unsigned short) arr_46 [i_13] [i_3] [i_13]));
                    arr_70 [i_13] [i_13] [18U] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_5 + 2] [4LL] [i_5 + 2] [i_13] [i_5] [i_3 - 1] [i_3])) ? (((/* implicit */long long int) arr_42 [i_5 + 1] [(unsigned short)10] [(unsigned char)8] [i_13] [(unsigned short)10] [i_19] [(unsigned short)9])) : (9223372036854775807LL)));
                    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) arr_47 [i_13] [i_3 - 1])) ? (arr_47 [i_3 - 1] [i_3 - 1]) : (arr_47 [i_5 + 2] [i_3 + 1])));
                }
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) /* same iter space */
                {
                    var_42 -= ((/* implicit */unsigned long long int) arr_63 [(unsigned short)20] [i_5] [i_13] [i_20 + 1]);
                    var_43 -= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                }
                var_44 |= ((/* implicit */unsigned short) (-(arr_71 [i_3] [i_3 - 1] [i_5 + 1] [i_5 - 2])));
            }
            for (int i_21 = 4; i_21 < 20; i_21 += 2) 
            {
                var_45 -= ((/* implicit */unsigned long long int) ((arr_46 [i_3] [i_21 - 1] [i_5]) ? (((((/* implicit */_Bool) (unsigned short)16368)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3] [i_3] [i_3]))) : (-3308305897030504058LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_3 + 2] [i_3])))));
                /* LoopSeq 2 */
                for (long long int i_22 = 0; i_22 < 21; i_22 += 3) 
                {
                    var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (signed char)-111))));
                    var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-107)) <= (((((/* implicit */_Bool) 4854099086321591483LL)) ? (((/* implicit */int) (unsigned short)43406)) : (((/* implicit */int) (unsigned short)65529)))))))));
                }
                for (int i_23 = 2; i_23 < 18; i_23 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_24 = 0; i_24 < 21; i_24 += 2) 
                    {
                        arr_86 [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (arr_16 [i_3 - 1] [i_5 - 2] [i_21 - 4]) : (arr_16 [i_3 + 3] [i_5 - 1] [i_21 - 1])));
                        var_48 = ((/* implicit */unsigned short) ((int) (signed char)59));
                    }
                    var_49 = ((/* implicit */_Bool) ((unsigned long long int) arr_62 [i_21 + 1] [i_5] [i_5 + 2] [(_Bool)1] [i_23 - 2]));
                    arr_87 [i_3] [i_5 + 1] [i_5 + 1] [i_23] [i_21] = ((/* implicit */_Bool) (~(arr_29 [i_5] [i_5] [i_5])));
                    arr_88 [i_23] = arr_62 [i_23] [i_21 - 3] [i_5] [i_5 - 2] [8ULL];
                }
            }
        }
        arr_89 [i_3] = ((/* implicit */unsigned int) max((((((/* implicit */int) (_Bool)1)) << (((arr_84 [i_3 + 2] [i_3 + 2] [(unsigned short)17]) + (106862057))))), (((/* implicit */int) var_9))));
    }
    var_50 = ((/* implicit */signed char) var_8);
}
