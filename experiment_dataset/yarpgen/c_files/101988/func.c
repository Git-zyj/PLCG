/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101988
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
    var_12 = ((/* implicit */signed char) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned int) (_Bool)1));
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 20; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) ((signed char) ((long long int) arr_1 [i_0])));
            arr_7 [i_0] [i_1 - 1] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]));
            arr_8 [i_0] [i_0] [i_1] = var_11;
        }
        for (signed char i_2 = 3; i_2 < 20; i_2 += 3) /* same iter space */
        {
            arr_13 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) arr_1 [i_2])))));
            arr_14 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
            /* LoopSeq 2 */
            for (unsigned char i_3 = 3; i_3 < 20; i_3 += 3) 
            {
                arr_17 [i_0] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) arr_5 [i_0])))));
                /* LoopSeq 2 */
                for (signed char i_4 = 3; i_4 < 21; i_4 += 3) /* same iter space */
                {
                    arr_20 [i_0] [i_3 - 1] [i_2 - 2] [i_0] [i_0] = ((/* implicit */short) (~(arr_12 [i_3 + 1] [i_2 - 2])));
                    var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -10LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_3))))) : ((+(arr_16 [i_0] [(unsigned short)14] [i_4] [i_4 - 3])))));
                    arr_21 [i_0] [i_2] [i_2] [i_0] = (~(arr_9 [i_3]));
                }
                for (signed char i_5 = 3; i_5 < 21; i_5 += 3) /* same iter space */
                {
                    var_14 += ((/* implicit */int) (_Bool)0);
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        arr_27 [i_0] [i_0] [i_3 - 3] [(_Bool)1] = ((/* implicit */unsigned char) arr_19 [11] [i_0] [i_0] [i_0]);
                        arr_28 [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_6 + 1] [i_0] [i_2 - 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_26 [i_6 + 1] [i_0] [i_2 - 1]))));
                        var_15 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_0])) & (((/* implicit */int) var_0)))) >> (((arr_11 [i_0]) - (13930638288171415972ULL)))))) : (((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_0])) & (((/* implicit */int) var_0)))) >> (((((arr_11 [i_0]) - (13930638288171415972ULL))) - (5807092076985739686ULL))))));
                        arr_29 [i_0] [i_0] [i_3 - 2] [i_0] = ((/* implicit */long long int) ((unsigned char) (_Bool)1));
                        arr_30 [(signed char)19] [i_2] [i_3 + 1] [i_5 - 3] [i_2] [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [(unsigned short)21])))) <= (((/* implicit */int) (unsigned char)37))));
                    }
                    for (short i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        arr_33 [3ULL] [i_5] [i_0] [i_0] [i_0] = ((unsigned char) arr_23 [i_0] [(signed char)20] [i_2 - 2] [i_2 + 2]);
                        arr_34 [i_0] [i_5] [(unsigned char)3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_32 [i_0] [i_0] [i_0] [i_0] [i_7]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_6)) - (141)))))) ? ((-(((/* implicit */int) (unsigned char)228)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-43)) != (((/* implicit */int) (unsigned char)219)))))));
                    }
                    for (short i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        var_16 &= ((((((/* implicit */int) arr_10 [i_8] [i_3] [(unsigned char)11])) < (((/* implicit */int) var_4)))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_24 [(unsigned char)8])))));
                        arr_37 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned char) arr_25 [i_3 - 1] [i_2] [i_3] [i_5] [i_8])))));
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_35 [i_5] [i_5 - 2] [i_5 - 2] [i_3 - 2] [i_2 - 3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_8] [(signed char)6] [i_5 + 1] [i_3 + 1] [(signed char)6])))));
                        arr_39 [i_0] [i_0] [i_0] [i_5 + 2] [i_8] = ((/* implicit */signed char) (unsigned char)18);
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_16 [i_0] [14LL] [i_5] [i_5]))));
                    }
                }
            }
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                arr_42 [i_0] [i_2 - 1] = ((/* implicit */unsigned char) (~(((arr_24 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)169)))))));
                arr_43 [i_0] [i_2] = ((/* implicit */long long int) (~((~(((/* implicit */int) var_2))))));
                arr_44 [i_0] [i_0] = var_9;
                var_18 = ((((/* implicit */int) var_0)) * (((((/* implicit */int) arr_4 [i_2])) ^ (((/* implicit */int) arr_4 [i_0])))));
            }
            var_19 = ((/* implicit */unsigned char) (~(16486256843515137195ULL)));
        }
        for (unsigned char i_10 = 1; i_10 < 20; i_10 += 3) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [(unsigned char)6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)14]))) : (arr_46 [i_10] [i_10] [i_0]))))))));
            arr_49 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_4))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_11 = 1; i_11 < 21; i_11 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_12 = 3; i_12 < 22; i_12 += 3) 
            {
                for (unsigned short i_13 = 4; i_13 < 21; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        {
                            arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)54)) > (((/* implicit */int) (_Bool)1)))))));
                            arr_63 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                            arr_64 [i_0] [i_11 + 2] [i_12] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) arr_53 [i_0] [i_0] [(_Bool)1] [i_13]));
                            arr_65 [i_0] [i_0] [i_12 - 1] [i_13] [i_12 - 1] [i_11] [i_14] = ((/* implicit */unsigned char) (~(arr_35 [i_0] [i_0] [i_12 - 3] [i_13] [i_13 - 2])));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_15 = 2; i_15 < 22; i_15 += 3) 
            {
                for (long long int i_16 = 1; i_16 < 19; i_16 += 3) 
                {
                    {
                        arr_72 [i_0] [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [(signed char)16] [i_11] [i_16 + 1] [i_16 + 1]))));
                        /* LoopSeq 2 */
                        for (long long int i_17 = 2; i_17 < 22; i_17 += 3) 
                        {
                            arr_77 [i_0] [i_16 + 3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_26 [i_11] [i_0] [i_15]);
                            arr_78 [i_0] [i_17 - 1] [i_17 - 1] [i_16] [i_15] [i_11] [i_0] = arr_66 [i_0] [i_11] [(unsigned short)9];
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) 6166757665072579511LL))));
                        }
                        for (unsigned char i_18 = 0; i_18 < 23; i_18 += 3) 
                        {
                            arr_81 [i_0] [i_0] [(unsigned char)2] [i_16] = ((/* implicit */signed char) (~(((/* implicit */int) arr_57 [(signed char)6] [i_11] [i_11] [(unsigned char)3]))));
                            arr_82 [i_18] [i_18] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((short) (unsigned char)211)))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (unsigned short)8987))));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (unsigned char)218))) && (var_11)));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-99)) - (((/* implicit */int) (signed char)41))));
            arr_86 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-7565952673849246230LL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))));
            arr_87 [i_0] [i_19] [i_0] = var_0;
        }
    }
    for (unsigned char i_20 = 0; i_20 < 10; i_20 += 3) 
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_61 [i_20] [i_20] [i_20] [i_20] [i_20]), (arr_61 [i_20] [i_20] [i_20] [i_20] [i_20]))))) ^ (((((/* implicit */_Bool) arr_61 [i_20] [i_20] [i_20] [i_20] [i_20])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_20] [i_20] [i_20] [i_20] [i_20])))))));
        var_26 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_12 [i_20] [i_20])) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) var_5)))) <= (((/* implicit */int) max((var_9), ((unsigned char)1))))));
    }
    /* LoopSeq 2 */
    for (long long int i_21 = 0; i_21 < 15; i_21 += 3) 
    {
        var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)193))))))) ? (arr_48 [i_21] [16LL] [i_21]) : (((/* implicit */long long int) ((/* implicit */int) arr_80 [i_21] [i_21] [(_Bool)1] [i_21] [i_21])))));
        arr_92 [i_21] = (unsigned char)37;
        var_28 ^= (_Bool)1;
        var_29 -= (unsigned char)20;
        arr_93 [i_21] [i_21] = ((/* implicit */_Bool) arr_10 [i_21] [i_21] [i_21]);
    }
    /* vectorizable */
    for (long long int i_22 = 0; i_22 < 10; i_22 += 3) 
    {
        arr_96 [i_22] [i_22] = ((/* implicit */long long int) (~(((/* implicit */int) arr_45 [i_22] [i_22] [i_22]))));
        var_30 ^= ((((/* implicit */_Bool) arr_32 [i_22] [(_Bool)1] [i_22] [(_Bool)1] [i_22])) ? (arr_32 [i_22] [(unsigned char)6] [i_22] [(unsigned char)6] [i_22]) : (arr_32 [i_22] [(unsigned short)2] [i_22] [i_22] [i_22]));
        var_31 = ((/* implicit */_Bool) (unsigned short)37812);
    }
}
