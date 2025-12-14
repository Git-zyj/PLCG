/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124819
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
    var_17 += ((/* implicit */signed char) ((var_2) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-16807)) || (((/* implicit */_Bool) ((int) arr_7 [(_Bool)1] [(_Bool)1] [(signed char)10])))));
                    arr_10 [i_0] [(signed char)3] [i_0] = ((/* implicit */unsigned char) ((((_Bool) arr_7 [i_0] [(_Bool)1] [9ULL])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 3; i_4 < 13; i_4 += 2) 
                    {
                        arr_13 [i_2] [i_0] [i_3] = ((/* implicit */int) arr_9 [i_2]);
                        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_1] [i_4 - 1]))));
                    }
                    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_3] [i_1] [i_5] [(unsigned short)7] = ((/* implicit */unsigned int) (short)16814);
                        arr_17 [i_0] [i_1] [(_Bool)1] = ((/* implicit */int) ((arr_6 [i_0] [i_3] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) ((var_3) != (((/* implicit */int) (signed char)-110))))))));
                    }
                    var_20 = ((/* implicit */unsigned short) -233771585);
                    var_21 = ((((5953861940543717428LL) % (((/* implicit */long long int) arr_0 [i_0])))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) != (((/* implicit */int) var_16)))))));
                }
                var_22 = ((/* implicit */int) var_14);
                var_23 += ((/* implicit */long long int) ((unsigned short) (signed char)-86));
                var_24 = var_1;
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned char i_7 = 2; i_7 < 14; i_7 += 4) 
                    {
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_7] = ((int) ((unsigned long long int) (signed char)120));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_7 - 2] [12ULL] [i_7 - 2] [i_7] [i_7 - 2] [i_0] [i_7])) ? (((/* implicit */int) arr_23 [i_7 - 2] [13ULL] [i_7] [(_Bool)1] [i_7] [i_0] [i_7])) : (((/* implicit */int) arr_23 [i_7 + 1] [i_7 + 1] [i_7] [6ULL] [(signed char)14] [i_0] [i_7]))));
                        }
                    } 
                } 
            }
            for (unsigned short i_8 = 1; i_8 < 14; i_8 += 2) 
            {
                var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_0] [i_1] [i_8 + 1])) ^ (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    arr_32 [i_0] [i_0] = ((/* implicit */int) ((signed char) arr_5 [i_1] [i_8] [i_0]));
                    arr_33 [i_1] [i_0] = ((/* implicit */long long int) ((((int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) var_6))));
                }
            }
            var_27 = ((/* implicit */unsigned char) (signed char)-92);
        }
        var_28 = ((/* implicit */long long int) ((short) arr_5 [i_0] [i_0] [i_0]));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_11 = 1; i_11 < 14; i_11 += 4) 
        {
            for (long long int i_12 = 3; i_12 < 13; i_12 += 4) 
            {
                {
                    arr_44 [i_10] = ((/* implicit */unsigned char) (signed char)10);
                    var_29 = ((/* implicit */unsigned int) var_6);
                    var_30 = max((((((/* implicit */int) var_7)) / (max(((-2147483647 - 1)), (((/* implicit */int) var_0)))))), (((/* implicit */int) arr_23 [i_12] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_13 = 4; i_13 < 11; i_13 += 4) 
        {
            var_31 += ((/* implicit */signed char) var_12);
            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((unsigned short) arr_11 [i_13 + 1] [i_13 + 1] [i_13] [i_13 + 2] [i_13 + 1])))));
            /* LoopSeq 4 */
            for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) /* same iter space */
            {
                var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) var_10))));
                var_34 = (i_10 % 2 == zero) ? (((/* implicit */_Bool) ((arr_19 [i_10] [i_13] [i_14] [i_10]) >> (((arr_31 [i_10] [i_13 + 4] [i_13 + 2] [i_13 + 2] [i_13 + 4] [i_10]) - (2130339747)))))) : (((/* implicit */_Bool) ((arr_19 [i_10] [i_13] [i_14] [i_10]) >> (((((arr_31 [i_10] [i_13 + 4] [i_13 + 2] [i_13 + 2] [i_13 + 4] [i_10]) + (2130339747))) - (117340056))))));
            }
            for (unsigned char i_15 = 0; i_15 < 15; i_15 += 2) /* same iter space */
            {
                arr_52 [10ULL] [i_13 - 3] [i_15] [i_10] = ((/* implicit */_Bool) ((arr_11 [i_10] [i_10] [i_10] [i_15] [i_10]) >> (((/* implicit */int) var_0))));
                var_35 = ((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) (unsigned short)32768)))));
            }
            for (unsigned char i_16 = 0; i_16 < 15; i_16 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (int i_17 = 0; i_17 < 15; i_17 += 2) 
                {
                    var_36 = ((/* implicit */unsigned short) 2301339409586323456ULL);
                    var_37 ^= ((/* implicit */signed char) (((((_Bool)1) ? (16972466642061289216ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) >> (((((/* implicit */int) ((unsigned short) (short)-16828))) - (48660)))));
                }
                for (signed char i_18 = 0; i_18 < 15; i_18 += 1) 
                {
                    arr_59 [i_10] [i_13 - 4] [i_10] [i_18] = ((/* implicit */signed char) 8653320839442871848ULL);
                    var_38 = ((/* implicit */_Bool) var_1);
                }
                for (int i_19 = 3; i_19 < 12; i_19 += 2) 
                {
                    arr_63 [i_10] [13LL] [(_Bool)1] [i_10] = ((((/* implicit */int) arr_4 [i_13 + 3] [i_19 - 3])) >> (((var_13) - (6106236566456672094LL))));
                    var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) var_15)))));
                }
                /* LoopSeq 2 */
                for (long long int i_20 = 1; i_20 < 14; i_20 += 4) /* same iter space */
                {
                    var_40 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_56 [i_10])) || (((/* implicit */_Bool) var_7)))));
                    arr_67 [i_10] [i_10] [i_10] [(signed char)5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_10] [i_10])) || (((/* implicit */_Bool) var_13))))) ^ (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_28 [i_13] [i_10] [i_10] [i_10] [i_20 + 1])) : (((/* implicit */int) var_0))))));
                    arr_68 [(signed char)3] [i_10] [1U] [i_16] [(signed char)3] [i_20 - 1] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_2 [i_20])))) + (((/* implicit */int) var_0))));
                    var_41 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) -2147483645))) % (((/* implicit */int) arr_46 [i_10]))));
                    var_42 = ((/* implicit */unsigned long long int) ((unsigned short) var_9));
                }
                for (long long int i_21 = 1; i_21 < 14; i_21 += 4) /* same iter space */
                {
                    arr_71 [i_13] [i_13] [i_13 + 4] [i_10] = ((/* implicit */int) 8653320839442871827ULL);
                    arr_72 [i_13] [(unsigned short)10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_15)))) <= (8653320839442871859ULL)));
                    /* LoopSeq 2 */
                    for (long long int i_22 = 0; i_22 < 15; i_22 += 3) 
                    {
                        var_43 ^= ((/* implicit */signed char) var_5);
                        arr_76 [i_22] [i_10] [i_10] [i_13] [i_16] [i_10] [i_10] |= ((/* implicit */long long int) arr_36 [i_16] [i_16]);
                        var_44 += ((/* implicit */short) ((arr_11 [i_13] [i_13] [i_13 - 2] [i_13] [i_13]) | (arr_11 [i_13 - 1] [i_13] [i_13 - 2] [i_13] [i_13])));
                        var_45 = ((/* implicit */unsigned int) ((long long int) arr_1 [i_10] [i_10]));
                    }
                    for (long long int i_23 = 0; i_23 < 15; i_23 += 4) 
                    {
                        arr_81 [3LL] [i_10] [i_10] [i_10] = (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_56 [i_10]))) <= (var_13)))));
                        var_46 = ((/* implicit */long long int) ((int) arr_22 [i_23] [i_10] [(unsigned char)12] [i_10] [i_10] [i_10]));
                        arr_82 [i_10] [i_13] = ((/* implicit */unsigned long long int) 80489709);
                    }
                    arr_83 [(signed char)3] [i_13] [i_10] [i_21] = ((/* implicit */int) ((signed char) ((int) arr_43 [i_10] [i_10] [i_10] [i_10])));
                }
                var_47 = ((/* implicit */long long int) ((signed char) arr_12 [i_13] [i_13 + 1] [i_13] [i_13] [i_13 + 4]));
                arr_84 [i_16] [i_10] [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)16))));
            }
            for (unsigned char i_24 = 0; i_24 < 15; i_24 += 2) /* same iter space */
            {
                arr_89 [i_10] [i_10] = ((/* implicit */long long int) var_16);
                arr_90 [i_10] [i_13 + 1] [i_13] [i_13] = ((/* implicit */int) 18446744073709551615ULL);
                arr_91 [i_10] [i_10] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 9479826487060671739ULL))) ? (arr_3 [i_24]) : (((/* implicit */unsigned long long int) (-(-5231304333656828705LL))))));
                arr_92 [i_24] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) arr_28 [i_10] [i_10] [i_10] [i_24] [i_10]);
                arr_93 [i_10] [i_10] [i_10] = ((/* implicit */long long int) arr_14 [i_10] [i_13 - 1] [i_10] [i_13]);
            }
        }
    }
    var_48 = ((/* implicit */signed char) var_16);
}
