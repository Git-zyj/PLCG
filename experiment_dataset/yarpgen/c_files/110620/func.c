/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110620
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 1])));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_1 [i_1 + 1] [i_1 + 1])) : (var_5)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_0] [i_0] = ((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0]))));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_6 = 3; i_6 < 12; i_6 += 4) 
                        {
                            arr_21 [i_0] [i_5] [i_3] [i_3] [i_0] = arr_9 [i_0] [i_0];
                            var_18 = ((/* implicit */signed char) ((arr_4 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_4])))));
                            arr_22 [i_0] [i_0] [i_4] [i_5] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)10629))));
                        }
                        for (long long int i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_25 [i_4] [i_5] [i_4] [i_0] [(unsigned char)4] [(unsigned char)4] [i_0]);
                            var_19 = ((unsigned short) var_12);
                        }
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) -6430878227531221904LL)) ? (arr_19 [i_0] [i_3] [i_0] [i_3] [i_8] [i_8] [i_0 + 1]) : (arr_19 [i_8] [i_3] [i_0] [i_0] [i_8] [i_5] [i_0 + 1])));
                            arr_29 [i_0] [i_0] [i_4] [i_4] [i_0] [i_5] [i_8] = ((arr_16 [i_0] [i_0] [i_0 + 1] [i_0]) && (((/* implicit */_Bool) (unsigned char)172)));
                            arr_30 [i_0] [(unsigned char)9] [i_4] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [(short)6])) / (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1]))) : (arr_13 [(_Bool)1] [(_Bool)1] [i_0])));
                            arr_31 [i_0 + 1] [i_0] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_18 [i_8]);
                        }
                        for (signed char i_9 = 1; i_9 < 10; i_9 += 4) 
                        {
                            var_21 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_17 [i_0] [i_5])) : (-6430878227531221908LL))) % (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0 + 1])))));
                            var_22 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_33 [(short)4] [3U] [3U] [i_4] [i_5] [3U])))) - ((+(((/* implicit */int) var_9))))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) ((_Bool) arr_6 [i_0]));
                        var_24 = ((/* implicit */_Bool) ((arr_0 [i_0]) * (arr_0 [i_0])));
                        var_25 = arr_3 [i_0] [i_0];
                    }
                } 
            } 
            var_26 ^= ((/* implicit */int) var_13);
            arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_20 [i_0] [i_0 + 1] [i_0 + 1]) / (arr_20 [i_0] [i_0 + 1] [i_0 + 1])));
            /* LoopSeq 3 */
            for (signed char i_10 = 1; i_10 < 12; i_10 += 3) 
            {
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0 + 1])) ? (((/* implicit */int) arr_18 [i_0 + 1])) : (((/* implicit */int) arr_18 [i_0 + 1]))));
                var_28 -= ((/* implicit */unsigned long long int) ((arr_11 [(unsigned char)2]) + (arr_11 [(short)0])));
            }
            for (long long int i_11 = 0; i_11 < 13; i_11 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned short) ((arr_38 [i_0 + 1] [i_3] [i_0]) & (((/* implicit */long long int) ((arr_28 [i_0] [i_0] [i_3] [i_3] [i_11] [i_3] [i_11]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [12ULL]))) : (arr_0 [i_0]))))));
                arr_41 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (6430878227531221904LL)));
            }
            for (long long int i_12 = 0; i_12 < 13; i_12 += 4) /* same iter space */
            {
                var_30 = ((/* implicit */int) var_0);
                arr_45 [i_0] [i_12] [10LL] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_3] [i_12])) : (arr_0 [i_0])))) ? (((arr_20 [i_0] [i_3] [i_0]) ^ (((/* implicit */long long int) arr_24 [i_0] [i_0] [i_0] [i_0 + 1] [i_3] [i_0 + 1] [i_12])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_3])) ? (((/* implicit */int) arr_27 [i_3] [i_3])) : (((/* implicit */int) arr_18 [0ULL]))))));
            }
        }
        var_31 += ((/* implicit */unsigned char) (+(var_5)));
    }
    var_32 = var_5;
    var_33 = ((/* implicit */unsigned char) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)14099))));
}
