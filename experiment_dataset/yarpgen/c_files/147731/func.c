/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147731
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                arr_8 [i_0] [i_0] [i_1] [i_2] &= ((((/* implicit */int) min((var_10), (((/* implicit */short) arr_7 [1U] [i_1 + 1] [i_1 + 1] [i_1]))))) > ((~((-(((/* implicit */int) var_0)))))));
                arr_9 [(unsigned short)17] [8U] [(short)15] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)16383), (((/* implicit */short) (signed char)2))))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) && (((/* implicit */_Bool) 8192))));
                var_14 ^= ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) arr_3 [i_0] [18ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967295U))), (((/* implicit */unsigned int) (~(8206)))))), (((/* implicit */unsigned int) var_11))));
                var_15 = ((((/* implicit */unsigned int) -702298306)) ^ (((1748747311U) << (8ULL))));
            }
            /* vectorizable */
            for (int i_3 = 1; i_3 < 15; i_3 += 4) 
            {
                var_16 = arr_2 [i_1] [i_3 + 1];
                var_17 = ((/* implicit */unsigned long long int) arr_2 [8U] [i_3]);
                arr_12 [i_3] = ((/* implicit */short) ((180588029U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
            }
            for (signed char i_4 = 1; i_4 < 16; i_4 += 2) 
            {
                arr_16 [i_0] [i_1] [i_4] [17U] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_3 [i_0] [i_4 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (16711680U))), (((unsigned int) arr_3 [i_0] [i_4 + 3]))));
                var_18 = ((/* implicit */unsigned char) arr_5 [i_4] [i_4 + 2] [i_1] [i_0]);
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 2; i_6 < 16; i_6 += 3) 
                    {
                        arr_24 [i_6] = ((/* implicit */unsigned char) (signed char)-84);
                        arr_25 [i_0] [i_1] [i_1] [i_0] [i_6] [i_6] [i_1] = ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) (unsigned char)91)))));
                        var_19 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((arr_22 [i_6] [i_6] [12U] [i_6] [i_0]) ? (((/* implicit */int) var_10)) : (arr_17 [i_0] [i_1] [i_5] [(_Bool)1]))))) >> (((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_6] [i_1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_19 [i_1] [14U] [i_5] [i_1]))) == (max((((/* implicit */unsigned long long int) (unsigned short)65278)), (4ULL))))))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_14 [i_0] [(unsigned char)9] [i_4] [14U]))));
                }
                for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
                {
                    var_21 = (-(((((((/* implicit */int) var_1)) * (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))));
                    arr_29 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) && (((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_7]))));
                }
            }
            var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min(((-(((/* implicit */int) (signed char)82)))), (((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 3]))))), (min((min((((/* implicit */unsigned int) 8199)), (4114379274U))), (((/* implicit */unsigned int) max((((/* implicit */short) var_4)), (var_3)))))))))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])) - (1429878369)));
        }
        for (short i_9 = 1; i_9 < 16; i_9 += 4) 
        {
            var_25 = 4114379266U;
            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) - (((/* implicit */int) var_11)))))));
            var_27 = ((/* implicit */int) var_12);
            /* LoopSeq 3 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_11 [i_9 + 3] [(signed char)13] [i_0])) ? (arr_19 [i_10 - 1] [i_9 + 1] [i_9 + 3] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (signed char)84)))))))))))));
                var_29 = ((/* implicit */int) max((((((/* implicit */_Bool) (short)2605)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32765))) : (180588057U))), (((/* implicit */unsigned int) max((((/* implicit */short) arr_15 [i_10] [i_10] [i_10] [i_10 - 1])), (var_13))))));
            }
            for (short i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned char) ((unsigned int) (short)-25185));
                var_31 -= ((/* implicit */short) (~((-(((/* implicit */int) (signed char)-10))))));
            }
            for (short i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
            {
                arr_44 [i_0] [i_0] [i_12] [i_12] &= ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((short)16383), (((/* implicit */short) arr_23 [i_0] [(_Bool)1] [2ULL] [(short)3] [i_0 - 3]))))), (1885019122U)))) ? (((((/* implicit */_Bool) (-(977507158)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)200)), ((unsigned short)65535))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))) + (1885019122U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200))));
                var_32 = ((((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)24), (((/* implicit */unsigned char) var_2)))))) * (min((0U), (((/* implicit */unsigned int) (short)-4194)))))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)140))))));
                /* LoopSeq 4 */
                for (unsigned int i_13 = 0; i_13 < 19; i_13 += 4) /* same iter space */
                {
                    arr_48 [(_Bool)1] [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [(unsigned short)16]))));
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((unsigned char) (~((+(((/* implicit */int) (unsigned char)31))))))))));
                    var_34 = ((/* implicit */signed char) var_13);
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))) * ((~(4114379269U)))))));
                }
                for (unsigned int i_14 = 0; i_14 < 19; i_14 += 4) /* same iter space */
                {
                    var_36 = var_8;
                    var_37 = ((/* implicit */unsigned short) ((min((min((((/* implicit */unsigned int) var_2)), (4059302036U))), (arr_45 [i_0] [(_Bool)1] [(short)4] [(short)4]))) / (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                }
                for (unsigned int i_15 = 1; i_15 < 17; i_15 += 4) 
                {
                    var_38 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
                    arr_55 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                    arr_56 [i_0] [i_12] [13ULL] [i_15 - 1] [i_9 + 2] [(unsigned char)3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)24437)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))))) ? (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_43 [i_15 - 1] [i_9 + 1] [i_0 + 1] [i_15])))) : (((/* implicit */int) (((~(((/* implicit */int) var_11)))) != (((/* implicit */int) min((((/* implicit */short) var_4)), (var_12)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_39 = ((/* implicit */_Bool) ((short) arr_13 [i_9 + 3] [i_9] [i_9]));
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [(unsigned char)15] [(unsigned char)15] [i_9 + 1] [(unsigned char)15] [15ULL])) == (((((/* implicit */int) var_9)) >> (((arr_35 [i_9] [i_12] [i_16]) - (1192581366U)))))));
                        var_41 = ((/* implicit */unsigned char) var_6);
                        arr_59 [i_12] [i_15] [i_16] = ((/* implicit */_Bool) ((((((/* implicit */int) var_11)) <= (((/* implicit */int) var_13)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_8)) ? (arr_41 [i_12] [(_Bool)1]) : (((/* implicit */int) arr_20 [i_0 + 1]))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        arr_62 [i_15] [i_15] [8ULL] = arr_52 [(unsigned char)9] [(unsigned short)7] [i_12] [(unsigned char)16] [i_9] [15ULL];
                        arr_63 [i_0] [i_9] [i_17] [i_15] [i_17] [i_9] &= ((/* implicit */signed char) var_0);
                    }
                    arr_64 [i_9] [i_15] [i_15] [8ULL] [i_15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                }
                for (short i_18 = 0; i_18 < 19; i_18 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        arr_70 [(short)6] [i_18] [i_18] [12U] [i_0] [i_9] [i_0] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1429878369) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) : (min((180588025U), (((/* implicit */unsigned int) var_7)))))));
                        var_42 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (short)32767)) >= (((/* implicit */int) (_Bool)1)))))));
                        var_43 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [(unsigned char)0] [i_12] [i_9] [10U])) ? (((/* implicit */int) arr_42 [(_Bool)1] [i_18] [i_12] [(_Bool)1])) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) min((arr_42 [12] [(signed char)9] [i_9] [(signed char)9]), (var_3)))) : (((((/* implicit */int) var_7)) << (((/* implicit */int) var_5))))));
                    }
                    for (unsigned long long int i_20 = 3; i_20 < 18; i_20 += 3) 
                    {
                        arr_73 [i_0] [i_0] [i_0] [(unsigned short)3] [i_0] = (((-(((/* implicit */int) arr_51 [i_12])))) != (((/* implicit */int) var_6)));
                        var_44 = ((/* implicit */unsigned long long int) ((short) ((arr_5 [i_0] [(unsigned char)13] [i_0] [i_0 - 1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))));
                        arr_74 [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_0] [i_0] [14U] [(unsigned char)18]))))) * (((((/* implicit */_Bool) var_9)) ? (arr_28 [i_18] [i_9] [i_9]) : (((/* implicit */unsigned int) arr_17 [i_0] [i_9] [(unsigned short)11] [i_18]))))))));
                        var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) arr_0 [i_12] [i_9]))));
                    }
                    for (unsigned short i_21 = 1; i_21 < 17; i_21 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_0] [i_0])) ? (arr_45 [i_0] [i_9] [(_Bool)1] [i_9 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? ((+(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) arr_41 [(short)15] [i_9])) ? (arr_41 [i_0] [i_9]) : (((/* implicit */int) var_13)))))))));
                        var_47 = ((/* implicit */int) var_0);
                    }
                    var_48 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) arr_35 [i_9] [i_9] [i_9])))));
                }
                arr_78 [i_0] [i_0] [i_12] [i_12] &= ((/* implicit */unsigned long long int) arr_43 [i_0] [i_9] [i_12] [i_12]);
            }
            var_49 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_47 [i_0 - 4] [i_9] [i_9] [i_0 - 4] [i_9] [i_0 - 4])))) | ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_9] [i_9]))))))));
        }
        var_50 |= ((/* implicit */unsigned short) (short)1981);
        arr_79 [i_0] = ((/* implicit */unsigned short) ((arr_53 [i_0 - 4] [i_0] [i_0] [(unsigned short)0]) ? (((((/* implicit */_Bool) max((var_13), (((/* implicit */short) (unsigned char)94))))) ? (((/* implicit */int) max((arr_47 [i_0] [i_0] [(short)4] [i_0] [(unsigned char)0] [i_0]), (var_3)))) : (((((/* implicit */int) var_4)) - (-21067597))))) : (max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))));
        arr_80 [i_0] = ((/* implicit */signed char) var_12);
        /* LoopSeq 3 */
        for (short i_22 = 4; i_22 < 16; i_22 += 3) /* same iter space */
        {
            arr_83 [i_22] &= ((/* implicit */unsigned int) ((((/* implicit */int) max((var_7), (((/* implicit */signed char) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_4)))))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            arr_84 [i_22] [i_22] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [(short)3])) ? (((/* implicit */int) (_Bool)1)) : (((int) ((unsigned int) var_4)))));
            arr_85 [i_22 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (((arr_5 [i_0] [10] [i_0 - 4] [i_0]) ? (min((14836979312636884954ULL), (((/* implicit */unsigned long long int) 4059302018U)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))));
        }
        for (short i_23 = 4; i_23 < 16; i_23 += 3) /* same iter space */
        {
            var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 12303617126246405426ULL)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (_Bool)0)))))));
            var_52 += ((/* implicit */short) (+((-(((((/* implicit */_Bool) 6U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))))));
            var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) ((((((/* implicit */int) min((((/* implicit */short) arr_77 [i_0] [i_23] [i_0 - 4] [i_23] [13U] [(short)2] [(signed char)5])), (var_10)))) + (2147483647))) >> ((((~(((/* implicit */int) arr_77 [i_0] [i_0] [i_0 - 3] [i_23] [(short)9] [i_23] [i_23])))) + (21))))))));
            arr_88 [i_0] = ((/* implicit */_Bool) var_13);
        }
        for (short i_24 = 1; i_24 < 16; i_24 += 1) 
        {
            var_54 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (_Bool)1))) != (((/* implicit */int) ((unsigned short) max(((unsigned char)105), ((unsigned char)188)))))));
            var_55 = ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_2 [i_0 - 4] [i_24 + 3])) : (arr_72 [(short)5] [(unsigned char)9] [i_24] [i_24 + 2] [i_0 - 1]))) & (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)43)), (1744610396U))))));
        }
    }
    var_56 += ((/* implicit */_Bool) var_4);
}
