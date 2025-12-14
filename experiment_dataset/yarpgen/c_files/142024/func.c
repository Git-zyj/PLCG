/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142024
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
    for (long long int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            arr_7 [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [(short)23]))));
            var_17 = ((/* implicit */signed char) ((unsigned short) 73455760));
            arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148)))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))) ^ (arr_10 [i_0] [i_3])))));
                    arr_13 [i_0] [i_1] [i_3] [(signed char)16] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_13) ^ (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) (unsigned char)152)))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)39500))))) : (((((/* implicit */_Bool) (unsigned short)39500)) ? (2179609901775420064ULL) : (7453366960329994888ULL)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        var_20 += ((/* implicit */unsigned long long int) var_0);
                        arr_17 [i_0 - 2] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_4] [i_3 - 1] [i_3 + 1] [i_3] [i_2] [i_0] [i_0])) & (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0 - 2]))));
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (signed char)123))));
                    }
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                    {
                        arr_20 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_3] = ((/* implicit */short) (((-(((/* implicit */int) (short)-32765)))) > (((/* implicit */int) ((((/* implicit */int) var_0)) > (var_10))))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [(signed char)22]))) : (arr_11 [i_0] [i_0 - 2] [i_0] [i_0] [i_5])))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0]))))))));
                        var_23 -= (~(((/* implicit */int) arr_16 [i_1 - 2] [i_3] [i_3 - 1] [i_0] [i_3] [i_5] [i_5])));
                        var_24 = ((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)-86)) && (((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0]))))));
                    }
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
                    {
                        arr_24 [i_0] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 989685796U)) ? (((/* implicit */long long int) (+(989685796U)))) : (arr_14 [i_0] [i_0] [i_0] [(signed char)11] [i_0 + 1])));
                        arr_25 [i_3] [i_3] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_1 - 2] [i_1 - 2]))));
                    }
                    arr_26 [i_3] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((989685796U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0 - 2])))));
                }
                for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 3) /* same iter space */
                {
                    arr_31 [i_7] [2] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_2]))));
                    arr_32 [i_0 - 2] = ((/* implicit */int) (!(((3305281500U) == (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                }
                for (signed char i_8 = 3; i_8 < 23; i_8 += 3) 
                {
                    arr_36 [i_8] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                    var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32754)) ? (arr_35 [i_0] [i_0 - 1] [i_0 - 1] [i_0]) : (arr_35 [i_0] [i_0 - 2] [(short)6] [i_0])));
                }
                var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 2] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_1 - 2]))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        {
                            arr_43 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) arr_27 [i_0] [i_2] [i_10])))) : (((/* implicit */int) arr_41 [i_0]))));
                            arr_44 [i_0] [i_10] = (((!(((/* implicit */_Bool) arr_22 [i_0])))) ? (((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_9] [i_9] [i_9] [i_10])) ? (((/* implicit */unsigned long long int) 989685786U)) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_42 [i_1] [i_2])))));
                        }
                    } 
                } 
                arr_45 [14] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0 - 2] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1 - 2] [i_1] [i_0])))))) : (((unsigned long long int) arr_29 [i_0] [i_1 - 2] [i_2]))));
            }
            var_27 = ((/* implicit */signed char) ((int) 989685796U));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_13 = 1; i_13 < 24; i_13 += 1) 
                {
                    arr_52 [(_Bool)1] [i_12] [i_11] = ((/* implicit */signed char) arr_49 [i_0] [i_11] [i_12] [i_12]);
                    arr_53 [i_0] [i_11] [i_0] [i_0] [(signed char)21] [i_0] = ((/* implicit */short) arr_49 [i_13] [i_13] [i_13 - 1] [i_13]);
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (unsigned char)241))));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0 + 1] [i_13 - 1] [12] [i_13])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))) & (1117124476U))) : (((/* implicit */unsigned int) var_10))));
                    var_30 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) var_16)))));
                }
                for (int i_14 = 4; i_14 < 22; i_14 += 3) /* same iter space */
                {
                    var_31 = ((/* implicit */short) (+((+(((/* implicit */int) (signed char)86))))));
                    var_32 = ((((/* implicit */_Bool) 3305281500U)) ? (((/* implicit */int) (short)-25789)) : (((/* implicit */int) (signed char)-63)));
                }
                for (int i_15 = 4; i_15 < 22; i_15 += 3) /* same iter space */
                {
                    arr_59 [i_0] [i_0] |= ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 2]));
                    /* LoopSeq 3 */
                    for (unsigned char i_16 = 1; i_16 < 23; i_16 += 3) 
                    {
                        arr_63 [i_0] = ((/* implicit */int) var_0);
                        arr_64 [(unsigned char)2] [i_11] [i_0] = ((/* implicit */signed char) (+(arr_28 [i_0] [i_11])));
                    }
                    for (short i_17 = 0; i_17 < 25; i_17 += 2) 
                    {
                        var_33 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_17] [i_15 - 3] [i_12] [i_12] [i_0] [i_0]))))) ? (((/* implicit */int) arr_9 [i_11])) : (((/* implicit */int) ((((/* implicit */int) arr_22 [i_12])) == (((/* implicit */int) (signed char)-71)))))));
                        var_34 *= ((/* implicit */signed char) (~(((/* implicit */int) var_14))));
                        arr_68 [i_0 - 2] [i_11] [i_12] [6ULL] [6ULL] [(short)8] [i_12] = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 989685810U))))) : (-890634513));
                        arr_69 [(signed char)0] [4ULL] [i_17] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) -1115234986105902783LL)) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) arr_38 [i_15 - 4] [(unsigned char)15] [i_11] [i_0 + 1] [i_0 + 1] [2])) : (((/* implicit */int) arr_42 [i_0 - 1] [i_0 + 1]))));
                    }
                    for (int i_18 = 1; i_18 < 21; i_18 += 3) 
                    {
                        arr_72 [i_18 + 4] [i_15] [i_15] [i_11] [i_11] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)(-127 - 1)))));
                        var_35 = ((/* implicit */signed char) ((((/* implicit */int) arr_61 [i_0 + 1] [(short)8])) << (((var_2) - (17470203722854958267ULL)))));
                        var_36 = ((/* implicit */signed char) ((arr_28 [i_0 - 1] [i_15 + 2]) + (arr_33 [i_15 - 1] [i_15 + 2] [i_15 + 1] [(signed char)24])));
                        arr_73 [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                    }
                }
                var_37 = ((/* implicit */unsigned short) 0);
                arr_74 [i_11] = 18151837665076340170ULL;
            }
            var_38 -= ((/* implicit */unsigned char) arr_2 [i_11]);
        }
        /* vectorizable */
        for (unsigned char i_19 = 0; i_19 < 25; i_19 += 4) 
        {
            var_39 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)70))));
            var_40 |= 989685796U;
            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) arr_75 [i_0 - 1] [i_0 - 2])) ? (arr_23 [i_0] [i_0] [(short)10] [i_0 - 2] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0 - 1] [i_19] [i_19] [i_0] [i_19] [i_0 - 1] [i_0])))));
            var_42 = ((/* implicit */short) ((((((/* implicit */_Bool) 816036815)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)-121)))) * (((/* implicit */int) arr_39 [i_19] [i_19] [i_0] [i_0]))));
            var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) var_16))));
        }
        var_44 = ((/* implicit */signed char) min((var_44), ((signed char)85)));
    }
    var_45 = (unsigned char)191;
}
