/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140746
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_18 += ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? ((~(279223176896970752ULL))) : (((/* implicit */unsigned long long int) 3919739557U)));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) 3919739557U))));
        var_20 = 7957176442386110627ULL;
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) 0))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_4 = 1; i_4 < 17; i_4 += 1) /* same iter space */
                {
                    var_22 *= ((/* implicit */signed char) var_7);
                    arr_13 [i_2] [4U] [i_3] [i_3] = ((/* implicit */unsigned long long int) (unsigned char)255);
                }
                /* vectorizable */
                for (unsigned int i_5 = 1; i_5 < 17; i_5 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_3 [i_2]))))));
                    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_2] [12U] [i_2] [i_5 + 2] [(short)10] [i_2]))));
                }
                for (int i_6 = 1; i_6 < 17; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        arr_21 [i_1] [i_2] [i_3] [i_6] [i_3] = ((/* implicit */unsigned int) (+(arr_8 [i_3] [i_1] [i_3])));
                        var_25 += ((/* implicit */short) 17173802374891419877ULL);
                    }
                    var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_3] [i_3])) + (arr_5 [(unsigned char)8])))) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_14 [i_3] [i_6])) : (var_9)))))) ? (((/* implicit */int) max((arr_17 [i_6] [i_6 + 2] [i_6] [i_6 - 1]), (arr_17 [i_6] [i_6 + 2] [i_6] [i_6])))) : (((/* implicit */int) ((unsigned short) 17639889897073074431ULL)))));
                    var_27 = ((/* implicit */unsigned long long int) var_16);
                }
                var_28 = arr_12 [i_1] [i_1];
            }
            for (unsigned char i_8 = 2; i_8 < 16; i_8 += 2) 
            {
                var_29 = ((/* implicit */unsigned int) max((var_29), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_8] [i_2] [i_8])) ? (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1])) : (var_12)))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8] [i_8] [i_8 - 2] [i_8] [i_8 - 2] [i_8]))) ^ (var_5)))))));
                var_30 = ((/* implicit */_Bool) (short)-13496);
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                arr_26 [i_1] [i_9] [i_9] [i_2] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 17639889897073074431ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_16)))));
                var_31 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                var_32 = ((/* implicit */unsigned long long int) ((arr_14 [i_1] [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 18251450571763678834ULL))))));
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (short)29294)) : (((/* implicit */int) (short)9817))));
                /* LoopSeq 2 */
                for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((806854176636477185ULL) | (((/* implicit */unsigned long long int) arr_1 [i_1])))))));
                    arr_29 [i_1] [i_9] [i_9] [i_10] = ((var_10) - (((((/* implicit */int) arr_6 [i_2] [i_9] [i_10])) << (((arr_2 [i_1] [i_2]) - (4436760699922914309ULL))))));
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_9] [i_1])) ? (((((/* implicit */_Bool) (short)-29931)) ? (5400046475239058440ULL) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_10] [i_9] [i_9] [i_1])))));
                }
                for (unsigned long long int i_11 = 3; i_11 < 19; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 2; i_12 < 18; i_12 += 2) 
                    {
                        var_36 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)36))) * (4253890227U)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) arr_18 [i_11 - 1] [i_12 + 1] [i_12 + 1] [(unsigned short)2]))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        arr_37 [i_9] [i_11] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) 375227727U)));
                        var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_11 + 1] [i_11 - 1] [i_11 - 3]))));
                        var_39 &= ((/* implicit */int) 4377607U);
                        var_40 = ((/* implicit */short) (-(arr_30 [i_11 - 3] [i_9])));
                    }
                    var_41 = ((/* implicit */unsigned int) arr_35 [i_1] [i_1] [i_9] [i_2]);
                }
            }
            for (unsigned char i_14 = 4; i_14 < 19; i_14 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    /* LoopSeq 3 */
                    for (short i_16 = 2; i_16 < 17; i_16 += 4) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (signed char)36))));
                        arr_48 [i_1] [i_14] [i_14] [i_15] [i_16] = ((((((/* implicit */_Bool) ((3086441278U) ^ (4290589688U)))) ? (((/* implicit */long long int) (+(var_14)))) : (max((arr_3 [i_1]), (((/* implicit */long long int) var_1)))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_14]))) != (((((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_14] [i_14] [i_14] [i_14] [i_16 + 2])) ? (((/* implicit */unsigned int) var_10)) : (arr_30 [i_14] [i_14]))))))));
                        var_43 = (-(((((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_1]))) : (arr_27 [i_2] [i_14]))) * (((((/* implicit */unsigned long long int) arr_44 [i_15] [i_14] [i_14] [i_2] [i_14] [i_1])) / (8160708356783979378ULL))))));
                        var_44 -= ((_Bool) (~(65535)));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_45 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) max((4854390974286585524ULL), (((/* implicit */unsigned long long int) var_17))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_17 [i_14 - 3] [i_14 - 2] [i_14] [i_14 - 4])))));
                        var_46 -= ((/* implicit */signed char) ((int) ((13046697598470493176ULL) * (5400046475239058440ULL))));
                    }
                    for (unsigned short i_18 = 0; i_18 < 20; i_18 += 4) 
                    {
                        var_47 |= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_45 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_7 [i_2] [i_2]))))), (((unsigned int) 3919739569U))));
                        var_48 -= ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) arr_15 [i_1] [i_18] [i_14 + 1] [i_2] [i_1] [i_1])), (3919739568U)))));
                    }
                    var_49 -= ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned int) ((arr_1 [i_1]) + (((/* implicit */int) (unsigned short)25353))))), (max((1954347201U), (((/* implicit */unsigned int) var_1)))))));
                }
                for (unsigned int i_19 = 4; i_19 < 19; i_19 += 2) 
                {
                    var_50 = ((/* implicit */unsigned int) var_16);
                    var_51 = ((/* implicit */_Bool) (+(var_9)));
                    var_52 += ((/* implicit */short) arr_51 [i_14 - 4] [i_14 + 1] [(_Bool)1] [i_19 - 4] [i_19 + 1]);
                    var_53 ^= ((/* implicit */unsigned int) arr_5 [i_19]);
                    var_54 &= ((/* implicit */_Bool) var_7);
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 4) 
                {
                    var_55 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned int) 2340620094U))) ? ((-(arr_27 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((2340620112U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))))))))));
                    arr_58 [i_1] &= ((/* implicit */unsigned short) var_15);
                    var_56 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_17 [i_14 - 4] [i_14] [i_14] [i_14 - 4]))) / (((/* implicit */int) (unsigned short)15575))));
                    var_57 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-((+(((/* implicit */int) var_16))))))), (((((/* implicit */_Bool) 17639889897073074445ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113))) * (arr_30 [i_20] [i_1])))))));
                    /* LoopSeq 2 */
                    for (short i_21 = 0; i_21 < 20; i_21 += 2) /* same iter space */
                    {
                        var_58 = ((/* implicit */signed char) 2387763547U);
                        arr_62 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) ((max(((+(((/* implicit */int) arr_34 [i_21] [i_20] [i_14 + 1] [i_2] [i_1] [i_1])))), (((/* implicit */int) ((unsigned short) arr_46 [i_1] [i_2] [i_2] [i_2] [i_21]))))) << (((((unsigned long long int) max((((/* implicit */unsigned long long int) 2387763558U)), (var_8)))) - (16089143012536850964ULL)))));
                        arr_63 [i_14] = var_14;
                        var_59 -= ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 5400046475239058440ULL)))))) > (((((/* implicit */_Bool) ((unsigned short) 2387763547U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_21])))))) : (0U))));
                        var_60 = ((/* implicit */unsigned long long int) max((var_60), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (short)29294)) ? (((/* implicit */unsigned long long int) arr_61 [i_1] [i_2] [i_14 - 2])) : (((unsigned long long int) 3086441257U))))))));
                    }
                    /* vectorizable */
                    for (short i_22 = 0; i_22 < 20; i_22 += 2) /* same iter space */
                    {
                        var_61 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_12 [i_2] [i_14])) ? (15322624052944616632ULL) : (arr_65 [i_1] [i_2] [i_2] [i_2] [i_14] [i_2] [i_1]))) : (((/* implicit */unsigned long long int) var_15)));
                        var_62 -= ((/* implicit */short) ((unsigned int) var_13));
                    }
                }
                for (unsigned long long int i_23 = 1; i_23 < 19; i_23 += 1) 
                {
                    arr_68 [i_14] [i_2] [i_14] [i_23] = ((/* implicit */unsigned int) ((15322624052944616642ULL) != (((/* implicit */unsigned long long int) 1858486136U))));
                    var_63 ^= ((/* implicit */short) ((((/* implicit */int) max(((!(((/* implicit */_Bool) 1858486136U)))), (var_13)))) > (((/* implicit */int) ((((/* implicit */_Bool) 633004519758866660ULL)) && (((/* implicit */_Bool) 1907203748U)))))));
                    var_64 = ((/* implicit */short) min((var_64), (((/* implicit */short) max((max((((unsigned long long int) arr_5 [i_14 - 1])), (((/* implicit */unsigned long long int) arr_44 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_23 - 1] [i_1] [i_14 + 1])) ? (max((((/* implicit */unsigned int) (unsigned short)1)), (4294967294U))) : (((3183580605U) >> (((3569030759U) - (3569030747U)))))))))))));
                    var_65 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_22 [i_14 + 1] [i_14 - 4] [i_23 - 1])) : (((/* implicit */int) arr_22 [i_14 + 1] [i_14 - 4] [i_23 - 1]))))));
                    var_66 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)55631)) : (var_10)))))) && (((/* implicit */_Bool) (((~(arr_50 [i_14] [i_14]))) % (max((((/* implicit */unsigned long long int) arr_57 [i_14])), (3124120020764934984ULL))))))));
                }
            }
            arr_69 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_20 [i_2] [i_2] [i_2] [i_1] [i_1]);
            var_67 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_1] [i_1] [i_1] [i_1] [i_2] [i_2]))))) / (((/* implicit */int) arr_11 [i_1] [i_2] [i_1] [6] [i_2]))));
        }
    }
    for (short i_24 = 0; i_24 < 20; i_24 += 2) /* same iter space */
    {
        var_68 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 106419058U)) + (arr_60 [i_24])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5822736913939638009ULL)) ? (-840850410) : (((/* implicit */int) (short)-2221))))) : (((arr_60 [i_24]) ^ (arr_60 [i_24])))));
        var_69 = ((/* implicit */unsigned long long int) arr_23 [i_24] [i_24] [i_24]);
        arr_73 [i_24] = ((/* implicit */unsigned long long int) ((long long int) max((((_Bool) var_15)), (((_Bool) (unsigned short)29661)))));
    }
    var_70 = ((/* implicit */unsigned int) (((((~((~(var_12))))) + (2147483647))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59))) : (2387763548U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (725936537U))) : (max((1907203748U), (((/* implicit */unsigned int) (short)2047)))))) - (725923935U)))));
    /* LoopSeq 2 */
    for (int i_25 = 0; i_25 < 22; i_25 += 4) 
    {
        arr_76 [i_25] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_74 [i_25]) & (arr_74 [i_25]))))));
        var_71 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_75 [i_25]))))) ? (((unsigned int) arr_75 [i_25])) : ((~(arr_74 [i_25])))));
    }
    for (unsigned char i_26 = 0; i_26 < 14; i_26 += 1) 
    {
        var_72 = ((/* implicit */unsigned int) (!(var_13)));
        var_73 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((unsigned int) -483246965))), (((((/* implicit */_Bool) arr_31 [i_26] [i_26] [i_26] [i_26])) ? (68719475712ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_26]))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_26] [i_26] [i_26]))) * (arr_27 [15] [i_26])))) ? (((arr_42 [i_26] [i_26] [i_26]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)197)), (var_0))))))));
        arr_79 [i_26] [i_26] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_26]))))) ? (((((/* implicit */_Bool) max((arr_8 [i_26] [i_26] [i_26]), (arr_52 [i_26] [i_26])))) ? (((((/* implicit */_Bool) 395110313U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (2387763534U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18625))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26])))));
    }
}
