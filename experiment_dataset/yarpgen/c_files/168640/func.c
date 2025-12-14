/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168640
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
    var_10 &= ((/* implicit */unsigned char) var_8);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_1 - 1] [i_1] [i_2] [i_1 - 1] [i_4 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                            var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 1] [i_1 + 1])) ? (var_8) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((/* implicit */unsigned int) var_5)) : (arr_5 [i_1 - 1])))))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_11 [i_1 - 1] [i_1 + 1] [(short)16] [i_1 - 1] [(short)16]) : (arr_6 [i_0] [i_1 + 1] [i_2])))))));
                            var_13 += ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [(unsigned short)2] [15ULL] [15ULL]);
                            arr_19 [i_0] [i_5] [i_0] [i_0] [i_2] [i_2] [i_5] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((short) 3688827181799717420LL))) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) arr_0 [i_5])) ? (3688827181799717420LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7332))))))), ((~(var_3)))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) (unsigned short)50256)), (var_7)))))) < (((((/* implicit */_Bool) 17204990603087933270ULL)) ? (((arr_17 [i_5] [i_0] [10U] [i_2] [i_1] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) 2251524935778304LL)))) : (arr_17 [i_0] [i_1] [i_1 - 1] [i_3] [4U] [i_5] [i_3])))));
                        }
                        var_14 = ((/* implicit */unsigned short) arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [4ULL] [i_2]);
                    }
                    var_15 = ((/* implicit */int) var_4);
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) ((unsigned short) var_9))) ? (arr_12 [i_1 + 1] [i_1 + 1]) : (((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 - 1])) ? (arr_12 [i_1 - 1] [i_1 - 1]) : (arr_12 [i_1 - 1] [i_1 + 1])))))));
                    arr_21 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))));
                    arr_22 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)15279), (arr_7 [i_0] [i_1 + 1] [i_1] [i_1 - 1])))) || (((/* implicit */_Bool) max((arr_7 [i_0] [i_1] [i_2] [i_1 - 1]), (arr_7 [i_0] [i_0] [i_0] [i_1 + 1]))))));
                }
            } 
        } 
        arr_23 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (((/* implicit */long long int) arr_12 [i_0] [i_0])) : (arr_16 [i_0] [i_0] [8LL] [i_0]))) <= (((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (arr_16 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246)))))));
        var_17 = ((/* implicit */int) (unsigned char)166);
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        var_18 = ((/* implicit */short) ((((unsigned long long int) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) % (((((/* implicit */_Bool) arr_1 [i_6])) ? (arr_18 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) var_9))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 3) 
        {
            arr_28 [i_6] [6LL] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-14036)) ? (((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_6])) : (var_5)))) <= ((+(var_7)))));
            /* LoopSeq 3 */
            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                arr_31 [i_7] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                var_19 = ((/* implicit */unsigned short) ((unsigned long long int) arr_5 [i_7 + 1]));
                arr_32 [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)50247))));
            }
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_30 [i_6] [i_7 - 1] [i_9]) : (arr_30 [i_6] [i_7 + 1] [i_7])));
                var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-31149))) >= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_9] [i_6] [i_6]))) : (268304384U)))));
            }
            for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 4) 
            {
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [(unsigned short)4]))) : (arr_2 [i_7]))))));
                /* LoopSeq 2 */
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    var_23 ^= ((/* implicit */unsigned char) ((unsigned long long int) 17204990603087933270ULL));
                    arr_41 [8ULL] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (!(arr_34 [i_6] [i_6] [i_10])));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)29666))));
                        var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 448659482569194063ULL)) ? (arr_11 [i_12] [i_12] [i_12] [i_12] [i_12]) : (((/* implicit */unsigned long long int) arr_33 [i_7 - 1] [i_7 - 1] [i_6]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 3958214171U)) : (1129773149480235015LL))) : (-6486864738175763799LL)));
                        var_26 = ((/* implicit */short) var_3);
                    }
                    for (short i_13 = 0; i_13 < 14; i_13 += 3) 
                    {
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 3053800905U))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_38 [i_7] [i_10] [i_10 + 1]))));
                        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_10 - 1] [(_Bool)1]))));
                    }
                }
                for (unsigned int i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        var_29 += ((/* implicit */unsigned short) -2491264722188681391LL);
                        arr_52 [i_6] [i_6] [i_6] [i_14] [(short)2] = arr_50 [i_6] [i_7] [i_6] [i_14] [i_15];
                    }
                    for (unsigned short i_16 = 0; i_16 < 14; i_16 += 3) 
                    {
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (-(arr_11 [i_7 + 1] [i_7 + 1] [i_10] [i_7 + 1] [i_14]))))));
                        var_31 = ((/* implicit */unsigned short) 3053800905U);
                        arr_56 [i_6] = ((arr_33 [i_10 - 1] [i_7 + 1] [i_10]) << (((var_9) - (3630896531U))));
                        var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_7 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_16] [i_10 + 1] [i_6]))));
                        var_33 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_7] [i_7 - 1] [i_10 - 1])) ? (arr_11 [i_6] [i_6] [i_6] [i_7 - 1] [i_10 + 1]) : (arr_17 [i_7] [i_7] [9] [i_7 + 1] [i_10 - 1] [i_10] [i_10])));
                    }
                    for (unsigned long long int i_17 = 2; i_17 < 12; i_17 += 1) 
                    {
                        var_34 = ((/* implicit */int) arr_24 [i_6]);
                        var_35 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_26 [i_6] [i_6]) : (((/* implicit */int) (unsigned char)96))))) ? (((arr_54 [i_6] [i_7] [(_Bool)0] [i_14] [(_Bool)0] [2] [2LL]) ^ (var_7))) : (var_7)));
                        arr_59 [4U] [4U] [i_6] [i_7] [i_7] [i_7 - 1] [i_7] = ((/* implicit */unsigned long long int) (short)-10242);
                        var_36 -= ((/* implicit */unsigned int) (unsigned short)50256);
                    }
                    for (unsigned char i_18 = 0; i_18 < 14; i_18 += 3) 
                    {
                        arr_63 [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 30778232U)) | ((+(arr_35 [i_18] [i_7])))));
                        var_37 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) var_1))));
                        var_38 += ((((/* implicit */_Bool) (unsigned short)55213)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_61 [i_6] [i_7] [i_6] [(signed char)0]))))) : (((((((/* implicit */int) var_1)) + (2147483647))) >> (((var_7) - (1012283980U))))));
                    }
                    var_39 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_10] [i_10 - 1] [i_10] [i_7 - 1] [i_7] [i_6])) ? (arr_39 [6]) : (arr_18 [i_6] [i_10 + 1] [i_6] [i_7 - 1] [i_6] [i_6])));
                    arr_64 [i_6] [i_10] [i_7 - 1] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_48 [i_10 + 1] [i_10] [1] [i_10] [1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525))) : (arr_17 [i_6] [i_7 + 1] [i_7] [i_10] [i_10] [i_14] [i_14]))) > (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                    var_40 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)16383)) ? (var_3) : (var_4)))));
                }
            }
        }
        for (unsigned char i_19 = 2; i_19 < 11; i_19 += 4) 
        {
            arr_69 [i_6] [i_6] = ((/* implicit */unsigned char) arr_46 [i_6] [i_19] [i_19] [i_6] [i_19]);
            var_41 = ((/* implicit */unsigned short) arr_18 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
        }
    }
    for (unsigned int i_20 = 3; i_20 < 16; i_20 += 3) 
    {
        var_42 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_13 [i_20 - 2] [i_20] [i_20 - 2] [i_20 + 1] [i_20] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_20 - 2] [i_20] [(unsigned short)16] [i_20 - 1] [i_20] [i_20]))) : (var_4))));
        var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_21 = 1; i_21 < 8; i_21 += 4) 
    {
        var_44 = ((/* implicit */unsigned int) (-((~(9426447599237106279ULL)))));
        /* LoopNest 2 */
        for (signed char i_22 = 0; i_22 < 11; i_22 += 2) 
        {
            for (signed char i_23 = 2; i_23 < 8; i_23 += 4) 
            {
                {
                    arr_81 [i_21] [i_22] [i_21] = ((/* implicit */signed char) arr_57 [i_23]);
                    arr_82 [i_21] [5U] [(signed char)2] [5U] = ((/* implicit */unsigned short) ((((arr_50 [i_21] [i_22] [i_23] [i_23] [i_23]) >> (((9082395002313025600ULL) - (9082395002313025549ULL))))) > (((/* implicit */unsigned long long int) var_0))));
                    var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_23 + 3] [i_22] [i_21 + 2]))) == (var_4)));
                }
            } 
        } 
        arr_83 [i_21 + 2] = ((/* implicit */unsigned long long int) ((arr_9 [i_21] [i_21] [12ULL] [i_21]) > (arr_9 [i_21] [i_21 - 1] [i_21 + 3] [i_21])));
    }
}
