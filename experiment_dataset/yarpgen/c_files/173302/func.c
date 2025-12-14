/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173302
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((signed char) var_4)))));
    var_17 = ((((/* implicit */_Bool) ((int) var_13))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (min((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_15))), (min((var_7), (((/* implicit */unsigned long long int) 5849448915097603717LL)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) arr_1 [16LL])) ? (arr_3 [(signed char)4]) : (((/* implicit */unsigned long long int) arr_0 [i_1] [(_Bool)1]))))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_0 [i_1] [i_0]))) ? (((arr_0 [i_0] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((int) 5849448915097603717LL))) : (-8686159973418786950LL)));
            var_21 = ((/* implicit */_Bool) (~(5138715332202961964LL)));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) /* same iter space */
            {
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_2 - 1] [i_0 - 1])) ? (arr_8 [i_3 - 1] [i_2 - 1] [i_0 - 1]) : (arr_8 [i_3 - 1] [i_2 - 1] [i_0 - 1])));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_23 &= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_0])) ? (-5138715332202961980LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                    var_24 = ((/* implicit */unsigned long long int) arr_9 [i_4] [i_3] [16LL] [i_0]);
                }
                for (long long int i_5 = 3; i_5 < 16; i_5 += 1) 
                {
                    var_25 = ((((/* implicit */int) (signed char)122)) >= (((/* implicit */int) (signed char)-87)));
                    var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [13LL] [13LL] [i_5]))));
                    var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1152912708513824768LL)))))));
                }
                var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)120)))))));
            }
            for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_2 - 1] [i_6 + 2] [i_6 + 2] [i_6])) : (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0]))));
                var_30 = ((/* implicit */unsigned long long int) arr_15 [i_6] [i_6] [i_6] [i_6 - 1]);
            }
        }
        /* LoopSeq 4 */
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            var_31 = ((/* implicit */unsigned long long int) arr_7 [i_7] [i_0 - 1] [8]);
            var_32 += ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_0 - 1]))));
        }
        for (long long int i_8 = 1; i_8 < 16; i_8 += 2) 
        {
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0 - 1])) * (((/* implicit */int) arr_2 [i_0 - 1]))));
            var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 594878449239545500LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_6 [i_0])))) ? (((/* implicit */unsigned long long int) (~(2001838994673689447LL)))) : (arr_4 [i_0] [i_0 - 1] [i_8 + 2]));
        }
        for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            var_35 = ((int) (signed char)35);
            var_36 &= ((/* implicit */unsigned long long int) ((_Bool) arr_4 [10LL] [i_0 - 1] [i_0 - 1]));
            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [8])) ? (((((/* implicit */_Bool) arr_16 [16ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1]))) : (arr_18 [8ULL] [8ULL]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6787134027477426718ULL)) || (((/* implicit */_Bool) (signed char)-87)))))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 3) 
            {
                var_38 = ((/* implicit */long long int) max((var_38), (((((/* implicit */_Bool) arr_24 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_24 [i_0 - 1] [i_9])))));
                var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0] [i_0 - 1] [i_10 + 2])) ? (((/* implicit */int) arr_11 [i_0 - 1] [(_Bool)1] [(signed char)4])) : (((/* implicit */int) arr_10 [i_0 - 1] [i_9] [(signed char)8] [i_10 + 1])))))));
                var_40 = ((/* implicit */unsigned long long int) ((arr_20 [i_10 - 2] [i_10 + 1] [i_10 + 2]) ? (((/* implicit */int) arr_20 [i_10 - 2] [i_10 + 2] [i_10 - 2])) : (((/* implicit */int) arr_20 [i_10 - 2] [i_10 + 2] [i_10 - 2]))));
                var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0 - 1] [4ULL] [(signed char)10])) ? (((/* implicit */unsigned long long int) arr_23 [6ULL])) : (arr_4 [16ULL] [i_10 - 2] [i_10]))))));
            }
        }
        for (long long int i_11 = 4; i_11 < 16; i_11 += 3) 
        {
            var_42 = ((/* implicit */_Bool) arr_26 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
            var_43 = ((/* implicit */long long int) 18156225631697106048ULL);
            var_44 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_6 [8ULL]))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [1ULL] [i_11 - 4]))));
        }
        var_45 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0]);
    }
    for (signed char i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
    {
        var_46 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_12] [i_12] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5138715332202961964LL)))) ? (((/* implicit */int) arr_30 [i_12] [8ULL] [i_12])) : (((/* implicit */int) arr_1 [(_Bool)1]))))), (((((/* implicit */_Bool) (unsigned char)161)) ? (18446744073709551609ULL) : (2ULL)))));
        var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_32 [i_12] [i_12] [i_12]), (arr_32 [i_12] [i_12] [i_12])))) ? (((((/* implicit */_Bool) arr_32 [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_12] [i_12] [i_12]))) : (17422425826443778347ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_32 [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_32 [i_12] [i_12] [i_12]))))))))));
        var_48 = arr_5 [i_12];
        var_49 &= ((/* implicit */long long int) ((min((arr_29 [10ULL] [(signed char)16] [(signed char)16] [i_12]), (((/* implicit */unsigned long long int) arr_36 [i_12])))) | (min((arr_29 [i_12] [12ULL] [i_12] [i_12]), (arr_29 [i_12] [0LL] [i_12] [i_12])))));
    }
    /* vectorizable */
    for (signed char i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
    {
        var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551594ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)43))) : (5138715332202961979LL)));
        var_51 = arr_34 [i_13];
        var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_13] [i_13] [i_13])) ? (arr_18 [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_13] [i_13] [i_13])))));
        /* LoopSeq 2 */
        for (unsigned char i_14 = 3; i_14 < 9; i_14 += 1) 
        {
            var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [16ULL] [i_14 + 2] [i_13])) ? (arr_22 [i_13] [i_14 - 1] [i_14]) : (arr_22 [i_13] [i_14 + 2] [i_14 + 2])));
            var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_13])) ? (arr_21 [i_13]) : (((/* implicit */unsigned long long int) arr_7 [i_13] [i_14] [i_14 + 2]))));
            var_55 &= ((/* implicit */unsigned long long int) (+(arr_8 [i_13] [i_14 + 3] [i_14 - 1])));
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18ULL)) ? (9020596613064391880LL) : (2001838994673689448LL)));
                            var_57 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
                            var_58 = ((/* implicit */long long int) min((var_58), (((/* implicit */long long int) ((((/* implicit */_Bool) 8390607457004634907LL)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) (signed char)-3)))))));
                        }
                    } 
                } 
                var_59 = ((/* implicit */signed char) ((arr_17 [i_14 - 1] [i_13]) / (arr_17 [i_14 - 1] [i_13])));
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_60 += ((/* implicit */_Bool) (-(arr_9 [i_14 + 3] [i_18 + 1] [i_19] [i_19])));
                            var_61 &= ((/* implicit */_Bool) (((_Bool)1) ? (arr_47 [i_13] [i_14] [(_Bool)1] [i_18 + 1]) : (((/* implicit */unsigned long long int) arr_9 [i_13] [i_14] [i_15] [i_18 + 1]))));
                            var_62 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_14 + 2] [i_14] [i_14 - 1])) ? (arr_44 [3LL]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_15])) ? (((/* implicit */int) arr_54 [i_15] [i_15] [i_18])) : (((/* implicit */int) arr_54 [i_15] [i_18] [i_19])))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_63 &= ((/* implicit */unsigned char) (signed char)-26);
                var_64 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_51 [7ULL] [i_13] [10] [(signed char)6] [7ULL])) ? (arr_51 [i_13] [i_13] [i_20] [i_20] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [4ULL] [i_13] [i_21])))));
                var_65 &= arr_47 [i_13] [8ULL] [i_21] [i_13];
            }
            for (unsigned char i_22 = 0; i_22 < 12; i_22 += 2) 
            {
                var_66 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [0ULL] [i_20] [(signed char)2]))));
                var_67 = (~(arr_39 [i_13] [i_20]));
            }
            /* LoopSeq 3 */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                var_68 = arr_57 [i_23];
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 2) 
                {
                    for (long long int i_25 = 0; i_25 < 12; i_25 += 1) 
                    {
                        {
                            var_69 = ((/* implicit */long long int) (~(arr_63 [i_25] [i_13] [i_23] [i_24])));
                            var_70 = 1ULL;
                        }
                    } 
                } 
            }
            for (unsigned long long int i_26 = 0; i_26 < 12; i_26 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_27 = 0; i_27 < 12; i_27 += 2) 
                {
                    var_71 = ((/* implicit */unsigned char) 6821415914057426703ULL);
                    var_72 = ((/* implicit */unsigned long long int) arr_45 [i_13] [i_20] [i_27]);
                }
                var_73 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_13] [(signed char)9] [i_13])) ? (((/* implicit */unsigned long long int) 5849448915097603714LL)) : (arr_29 [i_13] [i_13] [i_26] [i_26]))))));
            }
            for (long long int i_28 = 3; i_28 < 10; i_28 += 2) 
            {
                var_74 = (i_13 % 2 == 0) ? (((/* implicit */signed char) ((((arr_64 [i_28 - 3] [i_28 - 3] [i_28]) + (9223372036854775807LL))) >> (((arr_33 [8ULL] [i_13]) - (3867270878067607623ULL)))))) : (((/* implicit */signed char) ((((arr_64 [i_28 - 3] [i_28 - 3] [i_28]) + (9223372036854775807LL))) >> (((((arr_33 [8ULL] [i_13]) - (3867270878067607623ULL))) - (18155818522476395683ULL))))));
                var_75 *= ((/* implicit */signed char) (-(arr_68 [i_28] [i_28] [4ULL] [i_28 + 2] [i_28 - 3])));
                var_76 = ((8963297502732386509ULL) - (((/* implicit */unsigned long long int) arr_28 [i_28 - 2] [i_28 - 2] [i_13])));
                var_77 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_66 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))) ^ (((/* implicit */int) arr_30 [i_28] [i_13] [i_28 + 2]))));
            }
        }
        var_78 = ((/* implicit */unsigned long long int) arr_1 [i_13]);
    }
}
