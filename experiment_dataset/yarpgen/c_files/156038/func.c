/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156038
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (var_6)));
                var_17 *= ((/* implicit */signed char) ((unsigned char) (signed char)127));
                var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) (unsigned short)24438))))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) > ((-(((/* implicit */int) (short)5827))))))) : (((/* implicit */int) (short)-5828))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_7))));
    var_20 = var_6;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 2) /* same iter space */
    {
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)109))));
        var_21 = ((/* implicit */unsigned short) ((arr_4 [i_2 - 1]) ? (((/* implicit */int) arr_3 [i_2 + 2] [i_2 + 3])) : (1135269830)));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 7; i_3 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_9))));
        arr_11 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) 0LL))) ? (((/* implicit */int) arr_10 [i_3 + 1])) : (((/* implicit */int) (unsigned char)248))));
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(var_11))))) / (((long long int) (short)16714))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
            {
                var_24 *= ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_3 + 1] [i_3 + 3])) > (((/* implicit */int) arr_16 [i_3 + 3] [i_3 + 3] [i_3 + 1] [i_5]))));
                arr_17 [i_3] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) (short)-27585)) + (27614)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15302))) : (arr_8 [i_3] [i_3])))));
            }
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_7 = 1; i_7 < 9; i_7 += 2) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_6])) + (((/* implicit */int) arr_10 [i_3 - 1]))));
                    arr_23 [i_3] [i_4] [i_4] [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)53756)) ? ((+(((/* implicit */int) (short)30034)))) : (((/* implicit */int) (unsigned char)250))));
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_3 + 2] [i_3] [i_3 - 1] [i_6] [i_6] [i_7 + 1])) ^ (((/* implicit */int) (unsigned char)251)))))));
                    var_27 += ((/* implicit */short) var_9);
                    arr_24 [i_3] [i_3] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)195)) << (((14418413780447527976ULL) - (14418413780447527968ULL)))));
                }
                var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (unsigned short)65535))));
            }
        }
        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 3; i_9 < 9; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        {
                            arr_34 [i_3] [i_10] [3ULL] [i_9] [i_8] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_3] [i_8] [i_9] [i_3 + 3] [i_8] [i_9 - 2])) ? ((-(((/* implicit */int) (unsigned char)242)))) : (((((/* implicit */_Bool) -2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_20 [i_9] [i_10] [i_10] [i_9] [i_8] [i_3]))))));
                            arr_35 [i_3] [i_3] [i_9] [i_10] [i_3] = ((((((/* implicit */int) (short)19554)) + (((/* implicit */int) arr_30 [i_3 + 2] [i_8] [i_8] [i_10] [i_10] [i_10])))) * (((((/* implicit */int) (unsigned char)19)) >> (((((/* implicit */int) (unsigned short)52432)) - (52424))))));
                            arr_36 [i_11] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) ^ (4037637059405431592ULL)));
                            var_29 += ((/* implicit */long long int) ((unsigned char) arr_18 [i_10] [2ULL]));
                            arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) var_13);
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))) & (arr_32 [i_3] [i_3 + 1] [i_8])));
            arr_38 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_8])) ? (((/* implicit */int) arr_1 [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) arr_1 [(short)16] [i_8]))));
        }
        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) /* same iter space */
        {
            arr_42 [(short)6] &= arr_27 [i_3] [i_3];
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_3] [i_3])) ? (arr_32 [i_12] [i_3] [i_3]) : (((/* implicit */unsigned long long int) arr_21 [i_3] [(short)3] [i_12] [i_12]))))) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) (short)-5815)))))))));
        }
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) var_13)) == (var_4))))));
    }
    for (unsigned long long int i_13 = 1; i_13 < 7; i_13 += 2) /* same iter space */
    {
        arr_45 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_29 [i_13 + 2])))) : (((arr_13 [4ULL] [4ULL]) * (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 3 */
        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            arr_48 [i_14] [i_13] = ((unsigned char) ((((((/* implicit */unsigned int) -1167493886)) | (21U))) | (((/* implicit */unsigned int) min((((/* implicit */int) var_9)), (var_4))))));
            var_33 = ((/* implicit */unsigned long long int) (unsigned char)11);
            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (short)17515)) : (((/* implicit */int) (unsigned char)108))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_1)))))));
        }
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
        {
            arr_51 [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)13)) ? (arr_21 [(short)5] [(short)5] [i_13 + 2] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
            /* LoopNest 3 */
            for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                for (short i_17 = 2; i_17 < 6; i_17 += 4) 
                {
                    for (long long int i_18 = 0; i_18 < 10; i_18 += 3) 
                    {
                        {
                            arr_59 [i_15] [i_17] [8LL] [i_16] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_33 [i_13 + 2] [i_15 + 1] [i_13 + 2] [i_16] [i_17 - 2] [i_18] [i_18]) : (arr_33 [i_13 + 1] [i_15 + 1] [i_15] [i_15] [i_17] [i_18] [i_18])));
                            arr_60 [i_13 - 1] [i_15] [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */int) ((arr_55 [i_16] [i_15] [i_16] [i_16]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) > (((/* implicit */int) (unsigned char)223))));
                            var_35 = ((((/* implicit */_Bool) 4697568744986473851LL)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_9)));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_19 = 0; i_19 < 10; i_19 += 2) 
        {
            var_36 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) min((arr_47 [i_13] [i_19]), (((/* implicit */unsigned char) var_11))))), (min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_29 [2ULL]) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) max((arr_54 [i_13] [i_13] [i_19]), (arr_56 [i_13] [i_13] [(short)6] [i_13])))) : (((/* implicit */int) ((unsigned short) (short)-11128))))))));
            arr_65 [i_13] [i_13] |= ((/* implicit */long long int) min((((unsigned long long int) ((var_11) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11127)) ? (((/* implicit */int) arr_25 [i_19])) : (((/* implicit */int) (unsigned char)172))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)3006)) + (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_5)))))));
        }
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2885164278U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))));
        arr_66 [i_13] [i_13] &= ((/* implicit */long long int) max((((((/* implicit */int) var_7)) >> (((((/* implicit */int) max((var_2), (var_1)))) - (120))))), ((~(((((/* implicit */int) (unsigned char)77)) << (((((/* implicit */int) arr_30 [i_13] [i_13] [i_13] [i_13 + 3] [i_13] [i_13 - 1])) + (2521)))))))));
    }
}
