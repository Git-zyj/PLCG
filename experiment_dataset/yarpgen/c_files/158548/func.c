/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158548
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_8))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] [10U] = ((/* implicit */short) (~(var_1)));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_13 = ((/* implicit */long long int) ((unsigned long long int) -1517423969));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) -1517423969));
            arr_9 [i_0] [i_1] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) > (((((/* implicit */int) arr_1 [i_0])) >> (((var_9) - (1087678765U)))))))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) > (((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) >> (((var_9) - (1087678765U))))))));
            var_14 &= ((/* implicit */unsigned long long int) 1517423968);
        }
        for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            var_15 = var_6;
            arr_13 [i_0] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1315)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */int) var_10))))) : ((~(var_11)))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 2; i_3 < 17; i_3 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) (~(1499864368U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) != (((/* implicit */unsigned long long int) var_4)))))) : (1856500874U)))));
                var_17 &= ((unsigned int) 2U);
                /* LoopSeq 1 */
                for (unsigned short i_4 = 2; i_4 < 20; i_4 += 3) 
                {
                    arr_18 [(unsigned short)4] [i_2] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) arr_17 [i_4] [i_0] [i_4 - 2] [i_3 - 2] [i_0] [i_3]));
                    var_18 += ((((/* implicit */_Bool) 14634056095997140185ULL)) && (((/* implicit */_Bool) var_10)));
                }
            }
            for (unsigned short i_5 = 2; i_5 < 17; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        arr_28 [i_0] [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) (-(-1164687108128108983LL)));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) -626193798)) ? (((/* implicit */int) (unsigned short)21323)) : (arr_26 [i_2 - 2] [i_2] [i_2] [i_0] [i_7])));
                        arr_29 [i_7] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)-6464);
                        arr_30 [i_0] [i_0] [18U] [i_0] [i_6] [i_6] [i_7] = var_3;
                        var_20 += ((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) -1517423969))));
                    }
                    for (unsigned short i_8 = 1; i_8 < 17; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */short) var_9);
                        arr_33 [i_0] [(unsigned short)9] [i_6] [(short)11] [i_6] [i_6] = ((((/* implicit */_Bool) (short)32747)) ? (((/* implicit */int) arr_10 [i_5 - 2])) : (((/* implicit */int) arr_10 [i_0])));
                        arr_34 [(unsigned short)16] [i_2] [14U] [14U] [i_8] &= ((/* implicit */unsigned char) (!(arr_25 [i_6 + 1] [i_5] [i_5] [i_5 - 2] [i_5 - 2] [i_5])));
                    }
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        var_22 *= ((/* implicit */unsigned char) var_2);
                        var_23 += ((/* implicit */int) ((unsigned char) arr_14 [i_9] [i_9]));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 3; i_10 < 18; i_10 += 1) 
                    {
                        arr_39 [i_0] [i_2] [i_5] [i_6] [i_0] = (i_0 % 2 == 0) ? (((((arr_7 [i_0] [i_0]) + (2147483647))) << (((((/* implicit */int) (unsigned short)13286)) - (13286))))) : (((((((arr_7 [i_0] [i_0]) - (2147483647))) + (2147483647))) << (((((/* implicit */int) (unsigned short)13286)) - (13286)))));
                        var_24 *= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_25 [(unsigned short)12] [i_5 + 1] [i_5] [i_5] [i_5] [i_5]))));
                    }
                }
                arr_40 [(short)6] [i_0] [i_2] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) | (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5 + 2]))) : (((((/* implicit */_Bool) 561837100349339820LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [0] [12]))) : (var_9)))));
            }
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_4)) * (arr_38 [i_0] [i_0] [i_0] [i_11]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25654)))));
            var_26 = ((/* implicit */short) (+(((/* implicit */int) var_0))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned short) var_2);
            var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((unsigned short) arr_42 [14] [i_0] [14]))) : ((~(((/* implicit */int) arr_2 [i_0] [i_12]))))));
            /* LoopSeq 2 */
            for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    var_29 -= ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_0))))));
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((unsigned long long int) arr_49 [i_12] [i_14])))));
                    var_31 = ((/* implicit */int) (+(var_11)));
                }
                for (short i_15 = 0; i_15 < 21; i_15 += 4) /* same iter space */
                {
                    arr_53 [i_0] [i_0] [i_13] [i_0] = (~((~(var_11))));
                    /* LoopSeq 3 */
                    for (long long int i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        arr_57 [i_13] [i_15] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) arr_41 [i_0] [i_0] [i_13]))))));
                        arr_58 [i_0] [i_0] [i_13] &= ((/* implicit */long long int) (+(var_3)));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        var_32 = ((/* implicit */int) (-(arr_6 [i_12] [i_0])));
                        arr_61 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    for (unsigned char i_18 = 0; i_18 < 21; i_18 += 1) 
                    {
                        arr_65 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1499864368U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-561837100349339821LL)))) ? (((((/* implicit */_Bool) var_9)) ? (var_9) : (var_11))) : (arr_52 [i_0] [i_0] [i_0] [i_15] [i_15] [i_18])));
                        var_33 *= ((/* implicit */unsigned long long int) ((((-1517423969) + (2147483647))) << (((((/* implicit */int) arr_16 [i_18] [i_15] [i_13])) - (8284)))));
                        arr_66 [i_18] [i_15] [i_13] [i_0] [i_12] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_60 [i_0] [i_12] [i_13] [i_15] [i_18] [8U]))) == ((+(var_1)))));
                        arr_67 [i_0] [i_0] [i_15] [i_18] = ((((/* implicit */int) arr_32 [i_0] [i_18] [i_13] [13ULL] [(unsigned short)18])) & (((/* implicit */int) arr_25 [i_18] [i_15] [i_15] [i_0] [i_12] [i_0])));
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (-((~(((/* implicit */int) var_0)))))))));
                    }
                    arr_68 [i_0] = ((/* implicit */int) (~(-561837100349339820LL)));
                    var_35 += var_0;
                }
                for (short i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
                {
                    var_36 = ((/* implicit */long long int) (-(var_8)));
                    arr_71 [i_12] [i_12] [i_0] [i_12] = ((/* implicit */unsigned int) var_4);
                    /* LoopSeq 3 */
                    for (unsigned int i_20 = 0; i_20 < 21; i_20 += 1) 
                    {
                        arr_75 [i_0] [(short)1] [i_0] [i_19] [i_19] [i_19] = ((/* implicit */int) 4294967295U);
                        arr_76 [i_0] [i_19] [i_0] [i_12] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((arr_62 [i_20] [(unsigned short)17] [i_20] [i_19] [i_20] [i_20] [i_13]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))))));
                        arr_77 [i_0] [i_19] [i_0] [i_13] [i_13] [i_12] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) 1132631467)) == (531582200U))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((arr_46 [(short)0] [i_0]) ^ (var_1))))));
                        var_37 = ((/* implicit */short) (+(((unsigned long long int) arr_50 [i_0] [(short)19] [i_13] [i_19]))));
                    }
                    for (unsigned long long int i_21 = 2; i_21 < 18; i_21 += 1) 
                    {
                        arr_80 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_38 [i_21] [i_12] [i_0] [i_12]))));
                        arr_81 [i_0] = ((/* implicit */_Bool) ((short) (unsigned short)13707));
                    }
                    for (int i_22 = 0; i_22 < 21; i_22 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((((/* implicit */_Bool) arr_52 [i_22] [i_12] [i_19] [(unsigned char)16] [i_22] [i_19])) ? (arr_52 [i_0] [(short)18] [(short)18] [i_12] [i_22] [i_12]) : (1366965458U)))));
                        var_39 = ((/* implicit */short) (+(((/* implicit */int) var_10))));
                        var_40 = ((/* implicit */unsigned char) ((long long int) arr_15 [i_0] [i_19] [i_0]));
                    }
                }
                var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((int) arr_59 [i_13])))));
            }
            for (unsigned long long int i_23 = 1; i_23 < 19; i_23 += 1) 
            {
                var_42 -= ((unsigned long long int) arr_52 [i_23] [i_12] [i_23 + 2] [i_12] [i_23 + 2] [i_23 + 2]);
                var_43 *= ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
            }
            arr_87 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_12 [i_12] [i_0] [i_0])) ? (((/* implicit */int) arr_25 [i_0] [i_12] [i_12] [i_0] [12U] [i_12])) : (((/* implicit */int) var_10))))));
        }
        var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) ((((/* implicit */long long int) (+(2795102928U)))) / (arr_35 [4] [i_0] [i_0] [(unsigned char)8] [4]))))));
    }
    var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) (+(var_5))))));
}
