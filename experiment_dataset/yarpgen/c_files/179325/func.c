/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179325
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
    var_19 = ((/* implicit */unsigned long long int) var_14);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) arr_2 [i_0]);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned short)65535))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                arr_10 [i_0] [i_0] [i_0] [(signed char)9] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) <= (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (unsigned short)1))))));
                /* LoopSeq 1 */
                for (short i_3 = 3; i_3 < 17; i_3 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_3] [i_1]);
                        var_23 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_3 - 3])) / (((/* implicit */int) arr_1 [i_3 - 3]))));
                    }
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                    {
                        var_24 *= ((/* implicit */unsigned short) (~(2497927598193958305LL)));
                        arr_17 [(short)9] [0U] [i_0] [0U] [i_3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) arr_15 [i_0] [i_0] [i_2] [i_3 - 2] [i_5] [i_0]))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_14 [i_5] [i_3] [i_1] [i_1]))))))) : (((arr_16 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)511)))))));
                    }
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (short)32767))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_1] [i_0])))) : (arr_8 [i_6]))))));
                        arr_20 [i_0] [i_1] [i_2] [9LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7))))) > (((((/* implicit */_Bool) (+(3222531380760167731ULL)))) ? (((/* implicit */int) arr_19 [(unsigned short)15] [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */int) (signed char)31)) < (((/* implicit */int) (unsigned char)24)))))))));
                        var_26 *= max((((/* implicit */unsigned int) (unsigned short)65531)), (((unsigned int) min((arr_16 [i_1]), (((/* implicit */long long int) (signed char)127))))));
                        var_27 = ((/* implicit */unsigned short) ((short) (unsigned short)4));
                    }
                    arr_21 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_3]))) / (var_10)))), (arr_12 [i_0] [i_2] [i_0] [i_2] [i_0])));
                }
                var_28 ^= ((/* implicit */unsigned long long int) 3885413788U);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [8U] [8U] [i_0]))))) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))));
                    var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                    var_31 *= ((/* implicit */unsigned int) (signed char)(-127 - 1));
                    var_32 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)18344)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 3) 
                {
                    var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_8 + 3] [i_8 - 2] [i_0] [i_0])) - ((-(((/* implicit */int) (unsigned short)46657))))));
                    var_34 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_8 + 1] [i_8 + 1] [i_8] [i_8])) ? (9832253924968465721ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_2] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_1]))) : (3272781919U))))));
                    /* LoopSeq 3 */
                    for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        arr_31 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (short)32763))));
                        arr_32 [17ULL] [i_0] [16ULL] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_1] [i_8 + 3]))) : (arr_6 [i_0] [i_8 - 1] [3U])));
                        arr_33 [i_8] [i_1] [i_1] [i_1] [i_9] [i_8] [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))));
                        arr_34 [i_0] [0LL] [i_0] [(short)14] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) 11551096576985918697ULL));
                    }
                    for (short i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                    {
                        var_35 = ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) (short)27323)))));
                        var_36 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_10] [i_1] [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_19 [i_0] [i_8] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_8] [i_8] [i_1]))))) + (arr_7 [i_8 - 1] [i_8 - 1] [i_8 + 3])));
                        arr_38 [(unsigned short)0] [i_1] [i_2] [i_2] [i_2] &= ((/* implicit */long long int) (-(18446744073709551607ULL)));
                    }
                    for (short i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */short) ((((/* implicit */int) arr_40 [i_2] [i_8 - 2] [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_8])) * (((/* implicit */int) arr_40 [i_0] [i_0] [i_8 + 3] [i_11] [17LL] [i_11] [i_11]))));
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) arr_16 [i_1]))));
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_1])) ? (((/* implicit */int) arr_0 [i_8 + 2])) : (((/* implicit */int) arr_0 [i_8 - 1])))))));
                        var_40 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32763))) == (arr_24 [2U] [i_1] [i_1] [i_1]))))) - (arr_41 [(signed char)14] [i_8 + 1] [i_1] [i_8 - 1] [i_8 - 1])));
                    }
                }
            }
            var_41 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_18 [i_1] [i_1] [i_0] [i_0] [i_0]), (arr_18 [i_0] [i_0] [i_0] [i_1] [i_1]))))));
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_14 = 0; i_14 < 18; i_14 += 3) 
                        {
                            arr_49 [i_0] [i_1] [i_0] [i_0] &= ((/* implicit */signed char) arr_5 [i_0]);
                            arr_50 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (short)1636);
                        }
                        arr_51 [i_0] = ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned short)36100)))) / ((~(((/* implicit */int) arr_26 [i_0] [i_0] [i_1] [i_12] [i_1]))))))) ? (max((11551096576985918697ULL), (((/* implicit */unsigned long long int) (signed char)-4)))) : (arr_28 [i_0] [i_0] [i_12] [i_0] [i_1]));
                    }
                } 
            } 
        }
        for (int i_15 = 4; i_15 < 16; i_15 += 3) 
        {
            var_42 = ((/* implicit */long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [i_0] [i_15] [i_15 + 1] [i_0] [i_0]))))), ((short)32763)));
            var_43 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_0] [i_0] [(unsigned short)4] [i_15 - 4] [i_15])) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (_Bool)0))))), ((-(18446744073709551615ULL)))));
        }
    }
    var_44 = ((/* implicit */unsigned int) max((min((max((((/* implicit */unsigned long long int) (signed char)106)), (8ULL))), (((/* implicit */unsigned long long int) (-(var_9)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_5)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)40343))) <= (9223372036854775807LL))))))))));
}
