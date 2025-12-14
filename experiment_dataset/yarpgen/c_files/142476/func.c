/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142476
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
    var_10 = ((/* implicit */int) min((var_10), (var_0)));
    var_11 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1979900432)))))) != (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_3)))))))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min(((-(1979900433))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 11; i_2 += 3) 
        {
            arr_10 [i_2] = ((/* implicit */short) ((1979900446) - (1979900432)));
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2] [i_0 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((var_3) > (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((unsigned short) arr_13 [i_0 - 3] [i_0 + 1] [i_0 - 2])))));
                    var_15 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) var_9)) & (1979900423))));
                    var_16 |= ((/* implicit */unsigned char) var_7);
                    var_17 = ((/* implicit */short) arr_15 [i_0] [i_0 + 1] [i_0 + 1] [i_2 - 3] [i_4]);
                }
                for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 4) 
                {
                    var_18 = ((/* implicit */unsigned int) (~(arr_0 [i_0 + 1])));
                    arr_20 [i_0] [i_2] [i_0] [i_0] = ((((/* implicit */int) arr_15 [i_0 - 2] [i_2 + 2] [i_2] [i_2 - 1] [i_2 + 2])) >> (((((/* implicit */int) arr_17 [i_0 + 1] [i_2] [i_0 + 1] [i_2 - 1])) - (79))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) << (((var_3) - (3215040606U)))));
                        arr_25 [i_0] [i_6] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) -1979900444)) ? (-1979900449) : (-1979900450))) : (((((/* implicit */_Bool) var_8)) ? (1979900449) : (var_0)))));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 4) 
                    {
                        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) / (1979900444)));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) var_7)) | (arr_8 [i_6]))))));
                        arr_30 [i_2] = ((/* implicit */unsigned long long int) ((-1979900459) / (((/* implicit */int) arr_9 [i_0 - 3] [(signed char)10] [i_0 - 1]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 1; i_9 < 12; i_9 += 3) 
                    {
                        arr_33 [i_2] [i_2 + 2] [i_3] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (((var_4) ? (var_3) : (((/* implicit */unsigned int) 1979900423))))));
                        var_23 = ((/* implicit */int) (-(arr_27 [i_0] [8] [i_2] [i_6 + 3] [i_9 - 1] [i_9])));
                        arr_34 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_2 - 3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))));
                    }
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((/* implicit */int) var_2)) | (((/* implicit */int) arr_24 [i_0] [i_2] [i_2] [i_3] [i_2])))) > (1979900423))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 3; i_10 < 12; i_10 += 3) 
                    {
                        arr_37 [i_0] [10LL] [i_0] [i_2] = ((/* implicit */unsigned long long int) -1979900450);
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_10 - 1] [i_6] [i_3] [i_2] [i_0])) ? ((+(var_0))) : (((/* implicit */int) var_2)))))));
                        arr_38 [i_0] [i_0] [i_0 + 1] [10LL] [(_Bool)1] |= ((/* implicit */int) ((arr_18 [(short)4] [i_0] [i_0 - 1] [(short)4] [i_0]) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_32 [i_0 - 3] [(short)9] [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0])))))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_0] [i_3] [i_6] [i_10])) & (arr_0 [i_2 + 1]))))));
                    }
                    for (unsigned short i_11 = 2; i_11 < 12; i_11 += 3) 
                    {
                        arr_42 [i_2] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) > (arr_8 [i_0 - 3])));
                        var_27 = ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_5)) ? (1979900441) : (((/* implicit */int) var_4)))) : (((((/* implicit */int) arr_31 [i_6] [(unsigned short)11] [i_6] [i_3] [i_2 - 1] [i_0])) | (1979900459))));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 4) 
                    {
                        var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_27 [i_0] [12ULL] [i_2 + 1] [(unsigned char)2] [i_6] [i_12]) : (((/* implicit */unsigned int) var_0))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
                        var_29 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_2)) ? (-1979900433) : (((/* implicit */int) arr_41 [11] [i_2] [i_3] [i_6 + 4] [i_12] [i_12])))) + (2147483647))) >> (((/* implicit */int) var_6))));
                        var_30 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_12 + 2] [i_6 + 3] [i_2 - 1] [i_0 - 3]))));
                    }
                }
                for (signed char i_13 = 2; i_13 < 11; i_13 += 4) 
                {
                    var_31 = ((/* implicit */signed char) (+(1979900479)));
                    arr_49 [i_0] [i_2] [i_2] [(unsigned short)3] = ((/* implicit */short) (-(((/* implicit */int) arr_43 [i_0] [i_2 + 2] [i_3] [i_2 + 2] [i_13]))));
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        var_32 &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (var_3)))) % ((+(1979900450)))));
                        var_33 = ((/* implicit */unsigned short) (((+(var_0))) - (((((/* implicit */_Bool) 1979900450)) ? (1979900418) : (-1979900450)))));
                        arr_53 [(short)12] [i_2] [i_2] [i_3] [i_13 - 2] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_0] [i_2 - 2] [i_3] [i_13 - 2] [i_14] [i_14])) || (((/* implicit */_Bool) -1979900480))))) != (((/* implicit */int) (!(((/* implicit */_Bool) -1979900479)))))));
                        var_34 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-1979900443) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (-1979900457))) : (-1979900480)));
                    }
                    for (unsigned long long int i_15 = 4; i_15 < 12; i_15 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [i_15 - 4] [i_0 - 3] [i_3] [i_13] [i_15] [(unsigned char)7] [i_0 - 3])) ? (((/* implicit */unsigned int) 1979900449)) : (arr_44 [i_15 - 4] [i_0 - 1] [i_3] [i_13 + 2] [i_3] [i_13] [i_3])));
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) (!(((/* implicit */_Bool) 1979900427)))))));
                    }
                    var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((long long int) 1979900455)))));
                }
                var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((-1979900423) + (2147483647))) >> (((var_0) - (1986220463))))))));
            }
            for (unsigned int i_16 = 2; i_16 < 12; i_16 += 3) 
            {
                arr_58 [i_0] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */int) var_6)) > (var_0)));
                arr_59 [i_0 - 3] [9ULL] [i_16 - 2] [i_2] = ((/* implicit */int) ((long long int) 1979900450));
                arr_60 [i_2] [(unsigned short)0] = ((/* implicit */int) var_2);
                var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_13 [i_16 - 2] [i_0 - 1] [i_16])));
                arr_61 [i_2 - 3] [i_2] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
            }
            for (int i_17 = 0; i_17 < 13; i_17 += 4) 
            {
                arr_64 [i_2] = ((/* implicit */long long int) var_8);
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 13; i_18 += 3) 
                {
                    for (unsigned long long int i_19 = 4; i_19 < 9; i_19 += 4) 
                    {
                        {
                            var_40 *= ((/* implicit */unsigned long long int) ((((((-1979900451) + (2147483647))) << (((((/* implicit */int) var_8)) - (70))))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            arr_69 [(short)10] [i_2] [i_17] [i_17] [i_2] = (~(((1979900456) / (1979900447))));
                            var_41 = ((/* implicit */unsigned char) (-(-1979900447)));
                        }
                    } 
                } 
            }
        }
        for (short i_20 = 3; i_20 < 12; i_20 += 3) 
        {
            var_42 -= ((/* implicit */unsigned char) max((((int) -1979900448)), (((/* implicit */int) var_9))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_21 = 4; i_21 < 11; i_21 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_22 = 0; i_22 < 13; i_22 += 2) 
                {
                    var_43 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1979900452) : (((/* implicit */int) var_7)))))));
                    var_44 |= ((/* implicit */long long int) var_4);
                    var_45 = ((/* implicit */short) ((arr_39 [i_22] [i_20 + 1] [i_22] [i_21 + 2] [i_20 + 1]) | (var_0)));
                }
                arr_76 [11LL] [i_20] [i_20 - 2] [i_20] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0 - 2] [i_20] [i_20 - 1] [i_21 - 3]))));
                var_46 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
                /* LoopSeq 1 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    var_47 = ((/* implicit */int) ((arr_56 [i_0] [i_20 - 2] [i_21]) | (arr_56 [i_0] [i_20 - 2] [i_21 - 1])));
                    var_48 -= ((/* implicit */unsigned short) (~(((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_77 [i_0] [i_20] [i_20] [i_23]))))));
                    var_49 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_21 - 4]))));
                    var_50 *= ((/* implicit */short) ((unsigned short) var_4));
                }
            }
        }
        var_51 -= ((/* implicit */unsigned long long int) var_9);
        arr_79 [i_0 - 1] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_4))))));
        arr_80 [i_0] [(unsigned short)12] = var_4;
    }
    /* vectorizable */
    for (unsigned char i_24 = 0; i_24 < 17; i_24 += 2) 
    {
        var_52 = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_7)) - (((/* implicit */int) var_1))))));
        var_53 ^= ((/* implicit */unsigned long long int) arr_81 [i_24]);
        var_54 = ((/* implicit */unsigned short) ((unsigned char) arr_83 [i_24]));
        arr_84 [i_24] = ((/* implicit */short) ((1979900409) > (((/* implicit */int) var_9))));
        /* LoopSeq 2 */
        for (int i_25 = 1; i_25 < 16; i_25 += 2) 
        {
            var_55 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_83 [i_25 + 1]))));
            var_56 = ((/* implicit */int) min((var_56), ((-(((/* implicit */int) var_9))))));
        }
        for (unsigned int i_26 = 1; i_26 < 14; i_26 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_27 = 2; i_27 < 13; i_27 += 2) 
            {
                var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) (-(((/* implicit */int) arr_93 [i_26] [i_26 + 3] [i_27])))))));
                arr_95 [i_24] [i_24] [i_26] [i_24] = arr_90 [i_24] [i_26] [i_24];
            }
            for (short i_28 = 0; i_28 < 17; i_28 += 2) 
            {
                arr_99 [i_26] [i_26] [i_28] = ((/* implicit */unsigned long long int) ((arr_88 [11LL] [i_24]) >> (((1979900449) - (1979900430)))));
                var_58 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_94 [i_28])) : (arr_92 [i_24] [i_24] [i_28])));
            }
            arr_100 [i_24] [i_26] [i_26 - 1] = var_7;
            arr_101 [i_26] [i_24] [i_26] = var_2;
        }
    }
    for (short i_29 = 0; i_29 < 15; i_29 += 4) 
    {
        var_59 |= ((/* implicit */unsigned int) ((1979900423) - (1979900460)));
        arr_105 [i_29] = ((/* implicit */unsigned short) var_6);
        var_60 += ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_0))) - (((/* implicit */int) ((arr_104 [i_29]) == (arr_104 [i_29]))))));
    }
    /* vectorizable */
    for (int i_30 = 0; i_30 < 16; i_30 += 4) 
    {
        var_61 = ((/* implicit */unsigned int) max((var_61), (((/* implicit */unsigned int) var_9))));
        arr_109 [i_30] |= ((/* implicit */unsigned long long int) arr_107 [i_30]);
    }
}
