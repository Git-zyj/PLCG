/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111269
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((_Bool) ((unsigned int) var_6))))));
        var_13 &= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [(unsigned short)11] [(unsigned short)11])) && (((/* implicit */_Bool) arr_0 [i_1] [(_Bool)1])))) && (((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
        var_15 = ((/* implicit */unsigned short) ((0LL) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_1])) : (1188021472))))));
        var_16 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) || (((/* implicit */_Bool) (unsigned short)60170)))))));
        arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [(unsigned char)9])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_1] [i_1]))));
    }
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) 16LL);
        arr_9 [i_2] [i_2] = min((((/* implicit */long long int) (unsigned short)13888)), ((+(((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) : (-2391870869576912806LL))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned short) (+(3335544665U)));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_3]))))) && (((((/* implicit */int) arr_6 [i_3])) >= (((/* implicit */int) arr_6 [i_3]))))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) (~(arr_8 [i_4])));
            arr_15 [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) var_3)))));
            arr_16 [i_4] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_3] [i_4])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [4]))))) : (arr_11 [i_4])));
        }
    }
    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    {
                        arr_25 [i_5] [i_6 - 1] [i_6] [i_6] [i_6 - 1] = ((/* implicit */unsigned short) arr_11 [i_6]);
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((~(arr_13 [i_6 - 1] [i_6 + 1] [i_6 + 1]))) % ((+(((((/* implicit */_Bool) arr_8 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_5]))) : (arr_19 [i_6] [i_8]))))))))));
                        var_21 &= ((/* implicit */int) ((arr_11 [7U]) ^ (((long long int) ((var_9) << (((959422631U) - (959422621U))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            arr_28 [i_5] [i_6] [i_5] [i_5] [i_6] [i_9] = ((/* implicit */unsigned short) (~(arr_11 [i_6 + 2])));
                            arr_29 [i_6] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_6 - 1]))));
                        }
                        for (unsigned int i_10 = 4; i_10 < 12; i_10 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((((max((arr_24 [i_6]), (((/* implicit */long long int) var_8)))) | (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41746))) / (arr_23 [(unsigned short)6] [i_8] [i_7] [i_5] [i_5]))))) >> (max((((/* implicit */long long int) ((unsigned short) 0U))), (arr_23 [i_5] [i_6 - 1] [i_7] [i_6 - 1] [i_7])))));
                            var_23 ^= ((((((/* implicit */_Bool) arr_19 [i_10 - 4] [i_10 - 4])) ? (((/* implicit */int) arr_14 [i_10 - 3] [i_6 - 1])) : (((/* implicit */int) max((arr_14 [i_6] [i_10]), (arr_18 [i_5])))))) >= (((/* implicit */int) ((unsigned char) arr_8 [i_6 + 1]))));
                            var_24 ^= ((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned char)3))))));
                        }
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_33 [i_5]))));
                            var_26 = ((/* implicit */unsigned char) arr_6 [i_11]);
                        }
                    }
                } 
            } 
        } 
        var_27 = ((((/* implicit */_Bool) min((arr_24 [i_5]), (((/* implicit */long long int) arr_7 [i_5]))))) ? (((arr_24 [i_5]) - (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_24 [i_5])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
        {
            var_28 = ((unsigned short) arr_17 [i_12]);
            arr_36 [i_12] [(unsigned short)11] [i_12] = ((((/* implicit */_Bool) arr_35 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23788))) : (arr_8 [i_5]));
            var_29 = ((/* implicit */unsigned short) max((var_29), (var_7)));
        }
    }
    var_30 &= ((unsigned short) var_9);
    var_31 = ((/* implicit */long long int) max((var_7), (((/* implicit */unsigned short) var_1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 3) 
    {
        arr_41 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_13])) && (((/* implicit */_Bool) 3335544658U))));
        /* LoopSeq 1 */
        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            var_32 = ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_14]))));
            arr_45 [i_14] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_14])) >> (((((/* implicit */int) arr_43 [i_13] [i_13] [i_14])) - (152)))))) / (((unsigned int) arr_6 [i_13]))));
        }
    }
    for (int i_15 = 2; i_15 < 14; i_15 += 4) 
    {
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24152)) ? (3316590130021289784LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) arr_6 [i_15 + 1]))))) / (((/* implicit */int) ((max((7808878419782948320LL), (((/* implicit */long long int) var_11)))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [(unsigned char)2])))))))))));
        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_15])), (((((/* implicit */int) arr_40 [i_15])) ^ (((/* implicit */int) arr_42 [i_15] [i_15]))))))), (max((arr_48 [i_15 + 3]), (arr_48 [i_15 - 1]))))))));
        var_35 = ((/* implicit */unsigned short) (~(((((((/* implicit */int) arr_6 [i_15])) ^ (((/* implicit */int) var_0)))) ^ (((((/* implicit */int) arr_6 [i_15])) | (((/* implicit */int) arr_38 [i_15] [i_15]))))))));
    }
    for (unsigned short i_16 = 0; i_16 < 17; i_16 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_17 = 0; i_17 < 17; i_17 += 4) 
        {
            var_36 -= ((/* implicit */long long int) arr_40 [i_16]);
            var_37 = ((/* implicit */unsigned char) max((var_37), (arr_46 [i_17])));
        }
        for (unsigned char i_18 = 0; i_18 < 17; i_18 += 3) 
        {
            arr_57 [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) max((max((((((/* implicit */int) (unsigned short)12296)) >> (((992U) - (980U))))), (((/* implicit */int) ((unsigned short) arr_54 [i_16] [i_16]))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_56 [i_16] [i_18]))) >= (arr_55 [i_16] [i_18] [i_18]))))) < (5LL))))));
            arr_58 [i_18] = ((int) arr_37 [i_16]);
            arr_59 [i_18] [i_18] = ((/* implicit */unsigned char) (-(((max((((/* implicit */long long int) arr_39 [i_16])), (var_2))) + (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_16] [i_16] [i_18])))))));
        }
        /* vectorizable */
        for (unsigned short i_19 = 0; i_19 < 17; i_19 += 2) 
        {
            arr_63 [i_16] [i_16] [i_19] = var_3;
            /* LoopSeq 1 */
            for (unsigned short i_20 = 0; i_20 < 17; i_20 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_21 = 3; i_21 < 14; i_21 += 1) 
                {
                    var_38 = ((((/* implicit */int) arr_62 [i_21 - 3] [i_21 - 2])) + (((/* implicit */int) arr_62 [i_21 + 3] [i_21 + 1])));
                    /* LoopSeq 1 */
                    for (long long int i_22 = 2; i_22 < 14; i_22 += 2) 
                    {
                        arr_74 [i_22] [i_20] [i_20] [i_20] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_11))));
                        var_39 = arr_67 [i_20] [i_20] [i_20];
                    }
                    arr_75 [i_16] [i_16] [i_16] [i_16] &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_73 [i_19] [i_21 + 1] [i_21 + 3] [i_21] [i_19]))));
                }
                for (long long int i_23 = 0; i_23 < 17; i_23 += 4) 
                {
                    arr_79 [i_20] [i_20] [i_20] [(unsigned char)8] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) + (((/* implicit */int) ((unsigned short) arr_72 [i_20] [i_20] [i_20])))));
                    var_40 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
                }
                for (long long int i_24 = 0; i_24 < 17; i_24 += 3) 
                {
                    var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) (unsigned char)241))));
                    /* LoopSeq 3 */
                    for (unsigned char i_25 = 2; i_25 < 16; i_25 += 4) 
                    {
                        var_42 |= ((/* implicit */unsigned short) arr_55 [i_16] [i_16] [i_16]);
                        var_43 = ((/* implicit */unsigned int) -5803791089765757593LL);
                        arr_85 [i_20] [(unsigned short)7] [i_20] [(unsigned short)7] [i_20] = ((/* implicit */long long int) 737300226U);
                        arr_86 [i_24] [i_24] [i_20] [(unsigned char)8] [(unsigned char)8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_70 [i_16] [i_16] [i_20] [i_20] [i_25 + 1] [i_25 + 1] [i_25 + 1])) != (((/* implicit */int) (unsigned short)50834))));
                    }
                    for (int i_26 = 3; i_26 < 14; i_26 += 3) 
                    {
                        arr_89 [i_26] [i_20] [i_20] [i_19] [i_20] [i_16] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_70 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))) ^ (((/* implicit */int) arr_77 [i_26 - 2] [i_20] [i_26] [i_26] [i_26] [i_26 + 1]))));
                        arr_90 [i_16] [i_19] [i_19] [i_24] [i_19] |= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_54 [i_16] [i_16])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_10)))));
                        arr_91 [i_16] [i_16] [i_16] [i_16] |= ((/* implicit */_Bool) ((unsigned short) arr_88 [i_26 + 3] [i_26] [i_26] [i_26 - 1]));
                    }
                    for (unsigned short i_27 = 2; i_27 < 14; i_27 += 2) 
                    {
                        var_44 = ((/* implicit */long long int) ((unsigned char) arr_83 [i_16] [i_19] [i_19] [i_19] [i_19] [i_20] [i_27 + 1]));
                        var_45 ^= ((/* implicit */long long int) ((unsigned int) arr_56 [i_16] [i_27 + 1]));
                        arr_95 [10LL] [i_19] [i_20] [i_20] [i_20] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */long long int) ((/* implicit */int) arr_87 [i_16] [i_16]))) : (arr_51 [7U]))) % (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_16] [11] [i_27 + 3] [(unsigned short)8] [i_27] [11] [i_27])))));
                        var_46 = ((/* implicit */unsigned char) arr_44 [i_20] [i_27]);
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_28 = 0; i_28 < 17; i_28 += 3) 
                {
                    for (unsigned short i_29 = 0; i_29 < 17; i_29 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_54 [13U] [i_20]))))) ? (((/* implicit */int) (unsigned short)12296)) : (((/* implicit */int) arr_92 [i_20] [i_29]))));
                            var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) arr_62 [i_29] [i_19]))));
                            arr_101 [i_20] [i_20] [i_20] [i_28] [i_29] = ((/* implicit */int) arr_37 [i_16]);
                            var_49 = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_62 [i_16] [i_20])))));
                        }
                    } 
                } 
            }
        }
        var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_16]) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_69 [i_16] [i_16] [i_16])), (var_4)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_55 [0] [0] [i_16])))) : (min((((3557667070U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212))))), (max((((/* implicit */unsigned int) arr_93 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])), (arr_8 [i_16]))))))))));
        var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) var_4))));
        var_52 = ((/* implicit */_Bool) max((var_52), (((((((737300225U) + (arr_37 [i_16]))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_68 [i_16] [i_16] [i_16]))))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_16])))))));
    }
}
