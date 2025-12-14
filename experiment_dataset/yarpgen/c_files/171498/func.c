/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171498
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
    var_20 = ((/* implicit */_Bool) var_15);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                arr_8 [i_2] [(unsigned short)14] [i_2] = arr_6 [i_0] [i_1] [i_1] [i_2];
                arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 2]))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_16)) > (((/* implicit */int) arr_6 [i_0] [(unsigned short)4] [i_2] [(unsigned short)0]))))) % (((((/* implicit */_Bool) arr_7 [(unsigned short)16] [i_1 + 2] [i_1 - 1] [i_2 - 1])) ? (((/* implicit */int) (unsigned short)39066)) : (((/* implicit */int) arr_1 [i_0] [i_1 - 2])))))))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(arr_4 [i_1 - 2] [i_1 + 1] [i_2 + 3]))))));
                            arr_14 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)26469)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)26492)) != (((/* implicit */int) (unsigned char)55))))) : (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned short)39066))))));
                        }
                    } 
                } 
            }
            var_23 ^= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 2])))))));
            arr_15 [i_0] [i_1 + 3] = ((/* implicit */unsigned char) min((((unsigned short) ((((/* implicit */_Bool) var_12)) ? (8891401171052957988LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_0])))))), ((unsigned short)53710)));
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_18 [13LL] [i_1] [i_1] [i_5] = arr_5 [i_1 + 1];
                arr_19 [i_0] [i_5] = ((_Bool) ((((((/* implicit */int) var_3)) - (((/* implicit */int) arr_1 [i_0] [i_1])))) + (((/* implicit */int) arr_5 [i_5]))));
            }
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        var_24 -= ((/* implicit */_Bool) var_13);
                        arr_26 [i_6] [i_6] [i_6] [i_1] [i_0] |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_16 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7])) ? (arr_7 [(unsigned short)8] [i_0] [i_1] [i_7 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_7 + 1] [i_7] [i_7] [i_7]))))) > (arr_7 [(_Bool)1] [i_0] [i_7] [i_7])));
                    }
                } 
            } 
        }
        arr_27 [i_0] [(unsigned short)12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (((-(((/* implicit */int) (unsigned short)9683)))) >= (((/* implicit */int) arr_22 [(unsigned short)3] [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        arr_31 [i_8] = ((/* implicit */unsigned short) ((((arr_7 [(unsigned char)14] [i_8] [i_8] [i_8]) ^ (arr_7 [(unsigned short)12] [i_8] [i_8] [i_8]))) > (((arr_7 [(unsigned short)8] [i_8] [i_8] [i_8]) & (arr_7 [(unsigned char)14] [i_8] [i_8] [i_8])))));
        var_25 = ((/* implicit */_Bool) arr_7 [(unsigned char)12] [i_8] [i_8] [i_8]);
        /* LoopSeq 2 */
        for (unsigned char i_9 = 3; i_9 < 9; i_9 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                for (short i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        {
                            arr_44 [i_8] [i_11] [i_9] [i_11] [i_12] [i_10] [i_8] = ((/* implicit */short) arr_22 [i_8] [(unsigned short)7] [i_8]);
                            arr_45 [i_8] [i_8] [i_8] [i_8] [i_9] [i_12] = ((/* implicit */unsigned char) arr_17 [i_8] [i_9] [i_9]);
                        }
                    } 
                } 
            } 
            arr_46 [i_9] = ((/* implicit */_Bool) (+(var_4)));
            arr_47 [i_9] = ((((/* implicit */_Bool) arr_25 [i_8] [i_8] [i_8])) ? (min((9223372036854775807LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_37 [i_9] [i_9] [i_9] [i_9]))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_26 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)28843)))))));
            var_27 = ((/* implicit */unsigned short) min((var_27), (min((arr_10 [i_8] [i_13] [i_13]), (((/* implicit */unsigned short) ((unsigned char) var_4)))))));
            arr_50 [i_13] [i_13] [i_8] = ((/* implicit */long long int) arr_3 [i_8] [i_8]);
        }
    }
    for (unsigned short i_14 = 3; i_14 < 12; i_14 += 4) 
    {
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_16 [i_14] [i_14] [i_14 - 1] [i_14 + 1]))) > (((((/* implicit */_Bool) arr_16 [i_14 + 1] [i_14] [i_14 + 1] [i_14 + 2])) ? (((/* implicit */int) arr_25 [i_14] [i_14 + 2] [i_14 - 2])) : (((/* implicit */int) arr_16 [i_14] [i_14 + 1] [(unsigned short)15] [i_14])))))))));
        arr_53 [(short)8] |= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)14645))));
        /* LoopSeq 1 */
        for (long long int i_15 = 0; i_15 < 14; i_15 += 2) 
        {
            arr_57 [i_14] = ((/* implicit */unsigned char) (~(arr_17 [i_14 + 2] [i_14] [i_14])));
            var_29 = ((/* implicit */unsigned char) arr_11 [i_14] [i_14] [i_14] [i_15] [i_15]);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_16 = 1; i_16 < 10; i_16 += 2) 
        {
            arr_62 [i_14] [i_14] [i_14] = ((/* implicit */short) (unsigned char)196);
            var_30 = ((/* implicit */unsigned char) -9223372036854775807LL);
            /* LoopSeq 2 */
            for (unsigned short i_17 = 0; i_17 < 14; i_17 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_18 = 0; i_18 < 14; i_18 += 3) 
                {
                    arr_69 [i_14] [i_16 + 1] = ((/* implicit */short) ((((/* implicit */int) arr_61 [i_14 - 3] [i_14] [i_16 + 3])) % (((/* implicit */int) arr_61 [i_14 - 3] [i_14] [i_16 + 3]))));
                    /* LoopSeq 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_14 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_16 + 1] [i_16] [i_16] [i_16 - 1] [i_16 - 1]))) : (-418694064878370744LL)));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)30040))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_17 [i_14] [i_16] [i_17])))) : (arr_12 [i_14 - 3] [(unsigned short)2] [i_14 - 1] [i_14] [i_14])));
                        arr_73 [i_14] [i_16] [i_17] [i_18] = arr_7 [i_14] [i_16 + 4] [i_18] [i_19];
                        var_33 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_14] [i_14 - 1] [i_14] [i_16 - 1] [i_19])) ? (arr_17 [i_14 - 1] [i_14] [i_14 + 2]) : (arr_17 [i_14 - 1] [(unsigned short)6] [i_14])));
                        arr_74 [i_14] [i_18] [i_18] [i_16] [i_17] [i_16] [i_14] = ((/* implicit */unsigned short) (~((-(arr_65 [i_17] [i_17])))));
                    }
                    for (unsigned char i_20 = 0; i_20 < 14; i_20 += 4) 
                    {
                        var_34 += ((/* implicit */unsigned char) ((-3708346504435441613LL) | (arr_51 [i_16 + 2] [i_14 - 3])));
                        arr_77 [i_14] [i_16] [i_16 + 1] [i_16 + 1] [i_16] [i_16 + 3] = ((/* implicit */long long int) (short)32699);
                        arr_78 [i_14] [i_14] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) + (arr_17 [i_14] [i_14] [i_14]))));
                    }
                }
                for (unsigned short i_21 = 0; i_21 < 14; i_21 += 3) 
                {
                    var_35 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_13 [i_21]))))));
                    arr_82 [i_14 - 1] [i_14] = ((unsigned char) ((unsigned short) (-9223372036854775807LL - 1LL)));
                }
                /* LoopSeq 1 */
                for (unsigned short i_22 = 0; i_22 < 14; i_22 += 3) 
                {
                    arr_86 [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45921)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_14]))))) : (((/* implicit */int) arr_5 [i_14 - 2]))));
                    arr_87 [i_14 + 1] [i_14] = ((/* implicit */unsigned short) (short)18665);
                }
            }
            for (short i_23 = 0; i_23 < 14; i_23 += 4) 
            {
                var_36 |= ((/* implicit */short) arr_76 [i_14] [i_23] [i_23] [i_23] [i_14 - 1]);
                var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-18641)) ? (((/* implicit */int) arr_72 [i_23] [i_16] [i_23] [i_14] [i_16] [i_14])) : (((/* implicit */int) var_9)))) << (((((/* implicit */int) (unsigned short)1024)) - (1023))))))));
            }
        }
        arr_90 [(unsigned char)0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
    }
    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (!(((((((/* implicit */int) (unsigned short)16616)) & (((/* implicit */int) var_7)))) >= ((-(((/* implicit */int) (unsigned char)35)))))))))));
}
