/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122166
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)73)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) max((((/* implicit */signed char) var_8)), (var_4)))) : (((/* implicit */int) var_1)))) : ((((-(((/* implicit */int) var_9)))) / (var_7)))));
    var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((var_14) ? (((/* implicit */int) max(((_Bool)1), (var_2)))) : (((/* implicit */int) (_Bool)1))))));
    var_18 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)239)))) : (((/* implicit */int) var_8))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((-26) / (((/* implicit */int) (short)23087))))) ? (((/* implicit */int) arr_0 [(short)17] [(short)17])) : ((-(((/* implicit */int) arr_0 [i_0] [(_Bool)0]))))))));
        var_20 = ((/* implicit */int) max((((/* implicit */long long int) max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))))), (max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [(signed char)15] [i_0])) % (((/* implicit */int) var_15))))), ((~(arr_1 [i_0])))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)-48)) + (755540541))))) / (((var_8) ? (((/* implicit */int) (short)7373)) : (((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0 - 1]))))))));
    }
    for (long long int i_1 = 2; i_1 < 20; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_15 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (short)-23088)) + (((/* implicit */int) arr_4 [i_1] [i_1 + 2] [i_1]))));
                            arr_16 [i_1] [i_4] [i_1] = ((/* implicit */int) (signed char)90);
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)126)) ? (1974056390) : (-109080427)));
                        }
                    } 
                } 
                arr_17 [i_1] [(signed char)6] [20] [(short)18] |= ((/* implicit */_Bool) ((unsigned char) arr_6 [i_1 + 2] [i_1 + 1] [i_1 + 2]));
            }
            arr_18 [i_1] = ((/* implicit */signed char) (~((~(((arr_6 [(signed char)9] [(signed char)9] [i_2]) * (((/* implicit */int) var_8))))))));
        }
        for (long long int i_6 = 2; i_6 < 20; i_6 += 4) 
        {
            var_23 ^= ((/* implicit */unsigned char) max((var_7), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (arr_12 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 1]))))));
            arr_22 [i_1] [i_1] [i_1] = arr_8 [i_6] [i_6] [16U] [(short)16];
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            var_24 = ((/* implicit */signed char) arr_20 [i_1] [i_1] [i_7]);
            arr_26 [i_1] = ((/* implicit */unsigned char) (+(arr_9 [i_1] [i_1] [i_1] [(_Bool)1] [5U])));
            arr_27 [i_1] [i_1] = ((((/* implicit */_Bool) (signed char)-9)) ? ((-(((/* implicit */int) (unsigned short)11086)))) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])));
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (unsigned short)36135))));
        }
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_30 [9] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_1] [i_1 - 2]))))) ? (((((/* implicit */_Bool) arr_20 [i_1 + 2] [i_8] [i_8])) ? (arr_20 [i_1 - 1] [i_1 + 2] [i_8]) : (arr_3 [i_1]))) : (((int) ((((/* implicit */int) (signed char)5)) >> (((((/* implicit */int) (signed char)-109)) + (127))))))));
            var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) var_15)) == (((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 2] [(signed char)6])) ? (((/* implicit */int) var_12)) : (arr_6 [i_1] [i_1] [i_1]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69))) * (25165824U)))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) <= (var_7)))) : (max((arr_6 [i_8] [i_8] [i_1]), (((/* implicit */int) arr_4 [i_1] [i_1] [i_8]))))))));
        }
        arr_31 [i_1] [i_1] = ((/* implicit */unsigned short) arr_0 [i_1] [i_1]);
        var_27 ^= ((/* implicit */long long int) ((((/* implicit */int) var_1)) == (((/* implicit */int) max(((unsigned short)2), (((/* implicit */unsigned short) arr_24 [(short)12])))))));
    }
    for (long long int i_9 = 2; i_9 < 20; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            var_28 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)77)), ((unsigned short)54449)));
            var_29 -= ((/* implicit */signed char) max((max(((-(51765310958176560LL))), (((/* implicit */long long int) ((arr_14 [(signed char)20] [(short)14] [i_9] [(signed char)14] [(unsigned char)12]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)5])))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_9 + 2] [i_9 + 2] [16ULL])) & (((/* implicit */int) arr_11 [i_9 + 2] [i_9 + 1] [(signed char)2])))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 11193536676506173910ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (490529962U)));
                    var_31 = ((/* implicit */long long int) var_0);
                }
                var_32 = (!(((/* implicit */_Bool) (signed char)-97)));
                arr_47 [i_9] [i_9] [(signed char)10] [i_9] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_40 [i_9] [i_11] [i_11] [i_11])))) + (2147483647))) << (((((/* implicit */int) arr_0 [i_9 + 2] [i_9 + 2])) - (92)))));
                arr_48 [i_9] [i_11] [9ULL] [(signed char)14] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) : (7474758273221310704LL)));
            }
            for (unsigned char i_14 = 1; i_14 < 18; i_14 += 1) 
            {
                arr_51 [i_9] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_12 [i_14 + 4] [i_14] [i_14 + 4] [(signed char)20] [i_14 + 3] [(signed char)20])))) ? (((/* implicit */long long int) arr_9 [i_9 + 2] [i_9 - 2] [i_11] [i_14 - 1] [(unsigned short)21])) : ((~(arr_12 [i_14 + 1] [i_14 + 4] [i_14 + 1] [(_Bool)1] [10] [7])))));
                arr_52 [i_9] [i_11] [i_9] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_21 [i_9 + 1])) ? (arr_6 [i_14 + 1] [i_14 + 3] [i_14 + 3]) : (((/* implicit */int) arr_21 [i_9 + 1])))), (max((((((/* implicit */_Bool) arr_8 [i_9] [6LL] [i_11] [i_11])) ? (var_6) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_9 - 1]))))))));
                /* LoopSeq 1 */
                for (unsigned short i_15 = 2; i_15 < 19; i_15 += 2) 
                {
                    arr_57 [i_9] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)19)) >> (((/* implicit */int) ((7474758273221310704LL) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_11] [i_9])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0))))))))));
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (_Bool)1))) * ((-(((/* implicit */int) arr_53 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))));
                    var_34 -= ((/* implicit */signed char) var_1);
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_0)), (((arr_14 [i_9 + 1] [i_14 + 1] [i_15 + 2] [i_9] [(unsigned char)10]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_9] [i_11] [i_9])))))));
                        arr_60 [i_16] [(_Bool)1] [i_9] [i_11] [i_9] = ((/* implicit */unsigned char) (signed char)-3);
                    }
                    for (signed char i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        var_36 = ((/* implicit */short) ((((/* implicit */int) arr_32 [i_9] [i_9])) == ((+(((/* implicit */int) arr_2 [i_9 + 2]))))));
                        var_37 = ((/* implicit */long long int) var_5);
                        arr_63 [i_9] [i_9] [i_9] [(_Bool)1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [(_Bool)1] [i_14 + 2] [i_9 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)-109)))) : (arr_36 [(_Bool)1] [i_14 - 1] [i_9 + 1])));
                        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) (+(max((((((/* implicit */_Bool) (short)23087)) ? (-6445028289843143633LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (-(((/* implicit */int) (short)23327))))))))))));
                        var_39 *= arr_50 [i_9] [i_11] [i_14 + 3];
                    }
                }
            }
            var_40 -= arr_44 [i_9] [i_9 - 2] [(signed char)14] [i_9 - 1];
            arr_64 [(unsigned char)19] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_53 [i_9] [i_9 + 2] [i_9] [i_9 + 2] [i_9] [i_11])) << (((max((arr_36 [i_9 + 2] [i_11] [i_11]), (((/* implicit */unsigned long long int) var_3)))) - (18446744072999521402ULL)))));
            arr_65 [i_9] [i_9] [i_11] = ((/* implicit */unsigned short) arr_13 [i_9 + 1] [i_9] [(unsigned char)15] [(unsigned char)15] [i_11]);
        }
        var_41 = ((/* implicit */_Bool) ((((/* implicit */int) arr_46 [(_Bool)1] [i_9 + 1])) | (((/* implicit */int) (unsigned short)522))));
    }
}
