/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175306
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2]))) ^ (arr_2 [i_0 + 1])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((arr_10 [i_0] [i_1] [i_2 + 1] [i_1]) && (((/* implicit */_Bool) arr_9 [(_Bool)0] [(_Bool)0] [i_2 - 1] [i_2 - 1])))))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_12))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */int) ((unsigned short) 8323072U));
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            arr_18 [i_2] [i_4] = ((/* implicit */_Bool) (((_Bool)0) ? (10118730065942180402ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_20 ^= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_12 [(unsigned char)1] [18U] [i_5] [i_5] [i_5] [(unsigned char)1])))) * (((((/* implicit */int) arr_10 [i_5] [(_Bool)1] [i_2] [(_Bool)1])) % (((/* implicit */int) var_12))))));
                            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_8 [i_4] [i_0] [i_0] [i_0])) <= (((((/* implicit */unsigned int) 2147483647)) - (var_4)))));
                        }
                        for (signed char i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            arr_22 [(_Bool)1] [i_2] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 - 1] [i_0]))) % (((((/* implicit */_Bool) (short)768)) ? (1858199256U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            arr_23 [0] [i_4] [i_2] [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) (unsigned char)0);
                            arr_24 [4ULL] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_0 - 1] [i_6 - 1] [i_0 + 2] [i_4] [(_Bool)1])) >> (((((/* implicit */int) arr_20 [i_0] [i_6 - 1] [i_0 + 2] [i_4] [i_4])) - (95)))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) ((((-619233) + (2147483647))) >> (((arr_7 [i_7] [i_1]) + (1242634069054169499LL)))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((unsigned short) ((arr_14 [i_2 - 1] [i_1] [i_2] [i_7]) >> (((/* implicit */int) (_Bool)1)))))));
                            var_23 = ((/* implicit */signed char) var_1);
                            var_24 = ((arr_4 [i_0 + 1] [i_7] [i_7]) ? (((/* implicit */int) arr_4 [i_0 + 3] [i_4] [i_4])) : (-619246));
                        }
                    }
                    arr_27 [i_0 + 3] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((-(3264569345U)))));
                }
            } 
        } 
        arr_28 [i_0] = ((/* implicit */_Bool) var_13);
        /* LoopSeq 1 */
        for (unsigned char i_8 = 1; i_8 < 17; i_8 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                arr_34 [1] [i_8] [i_9] [i_9] = ((/* implicit */short) (unsigned short)44127);
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_0 + 3] [5ULL])) == (((/* implicit */int) (_Bool)1)))))));
                arr_35 [i_0] [i_0 + 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) arr_6 [i_0 + 2] [i_0 + 1] [i_8 + 1]));
                arr_36 [i_8] [i_8] [i_8] [i_8 + 2] = ((/* implicit */signed char) arr_16 [i_8] [(unsigned char)17]);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                arr_40 [i_0] [i_10] [i_10] = ((/* implicit */signed char) ((var_13) >> (((arr_31 [i_8 - 1]) - (459410131U)))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 4; i_11 < 18; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((var_4) <= (((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) arr_5 [i_0] [i_10] [(_Bool)1] [i_12])) : (((/* implicit */int) (unsigned short)65535))))))))));
                            var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1030397929U) & (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (4091494266649476377ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [(_Bool)1] [(unsigned char)15] [i_12])))));
                            arr_45 [i_10] [i_8] [(signed char)4] [i_11] [i_11 - 2] [(unsigned char)14] [i_12] = ((/* implicit */unsigned short) arr_13 [i_0] [i_8] [i_11 + 1] [(short)9]);
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((unsigned char) arr_1 [i_0 + 3] [i_8 + 2])))));
                            var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_11] [i_12])) % (arr_8 [i_0] [i_10] [(unsigned short)11] [i_12])))));
                        }
                    } 
                } 
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_8] [17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_8 + 2] [i_8 + 1]))) : (var_0)));
                /* LoopSeq 2 */
                for (unsigned char i_14 = 1; i_14 < 16; i_14 += 1) /* same iter space */
                {
                    arr_50 [i_14] [(signed char)4] [i_8] [i_0] = ((/* implicit */long long int) ((arr_13 [i_0 + 1] [i_8 + 1] [i_8 + 2] [i_14 + 3]) - (arr_13 [i_0 + 2] [i_8 + 2] [i_8 - 1] [i_14 - 1])));
                    arr_51 [(unsigned char)5] [i_0] [i_8] [i_8] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-160))));
                }
                for (unsigned char i_15 = 1; i_15 < 16; i_15 += 1) /* same iter space */
                {
                    var_31 += ((/* implicit */_Bool) var_3);
                    arr_55 [(_Bool)1] [i_8 + 1] [i_13] [i_13] = ((/* implicit */unsigned short) ((arr_8 [i_0 - 2] [i_8 + 2] [i_13] [i_15]) / (((/* implicit */int) arr_9 [i_0 + 3] [i_8 + 1] [i_15 + 3] [i_15 + 3]))));
                    /* LoopSeq 1 */
                    for (int i_16 = 1; i_16 < 18; i_16 += 2) 
                    {
                        arr_59 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_15 + 1] [i_15 + 3] [i_15 - 1] [i_15])) < (((/* implicit */int) (signed char)24))));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_15 [i_0] [i_8]))))))));
                        arr_60 [i_0] [i_0] [i_0] [i_15 + 3] [i_16] [i_8] = ((/* implicit */short) arr_54 [i_15 + 1] [(signed char)9] [i_15] [i_15]);
                        arr_61 [i_13] = ((/* implicit */unsigned short) ((short) arr_16 [7U] [i_16]));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned short i_17 = 0; i_17 < 19; i_17 += 1) 
                {
                    arr_65 [i_0 - 2] [i_17] = ((/* implicit */unsigned int) 4091494266649476369ULL);
                    arr_66 [i_0] [i_0] [i_17] [i_17] = ((/* implicit */unsigned long long int) arr_13 [i_17] [i_13] [i_8] [i_0 - 2]);
                }
                var_33 = ((((/* implicit */_Bool) (+(12732965529214043696ULL)))) && (arr_33 [(unsigned short)10] [i_8 - 1] [i_13]));
                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((arr_63 [i_0] [i_0] [i_0 + 2] [i_0 + 1]) * (((/* implicit */unsigned int) var_8)))))));
            }
            var_35 = ((/* implicit */_Bool) max((var_35), (var_6)));
        }
    }
    var_36 = ((/* implicit */unsigned int) max((var_10), (((((/* implicit */int) var_7)) * (((/* implicit */int) var_11))))));
    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) var_3))));
}
