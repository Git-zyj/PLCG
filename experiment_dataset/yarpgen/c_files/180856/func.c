/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180856
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) >> (((var_8) - (344902253U)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))) - (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_10))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 - 3])) : (arr_0 [i_0 + 3])));
    }
    for (unsigned short i_1 = 3; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((/* implicit */int) (short)12358)) >> (((((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned int) (signed char)1)), (arr_4 [(unsigned char)13]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (567227507U)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) (_Bool)1);
            /* LoopSeq 1 */
            for (int i_3 = 3; i_3 < 14; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    var_17 ^= ((/* implicit */_Bool) arr_7 [i_1 + 1] [i_3 + 1] [i_4 + 1]);
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_5])) - (((arr_8 [i_1 + 1] [i_1]) & (((/* implicit */int) max((arr_13 [(short)13] [(short)13] [i_3] [(short)13] [1U] [i_3] [(short)13]), (((/* implicit */unsigned char) var_2)))))))));
                        arr_15 [i_1] [i_2] [i_2] [6] [i_4] [i_2] [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_8)) ? (arr_1 [i_4] [i_4 + 2]) : (arr_1 [i_4] [i_4 + 4])))));
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) min((arr_0 [i_4]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (max((((/* implicit */int) (signed char)(-127 - 1))), (var_0))) : (((/* implicit */int) arr_3 [i_1])))) + (2147483647))) >> (((/* implicit */int) var_3)))))));
                        arr_16 [i_4] [i_5] [i_4] [i_4] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)5120)) || (((/* implicit */_Bool) (short)-12359)))) ? (((((/* implicit */_Bool) 2080768)) ? (((/* implicit */int) (short)12339)) : (((((((/* implicit */int) arr_6 [i_3] [i_3] [i_3])) + (2147483647))) << (((((/* implicit */int) (short)12354)) - (12354))))))) : (max(((-2147483647 - 1)), (-1486676557)))));
                        var_20 = ((/* implicit */signed char) min((var_4), (((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_13 [i_1] [(short)10] [i_3 + 1] [i_4 - 1] [i_4] [i_3 + 1] [i_1]))))));
                    }
                }
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (294991541U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86))) - (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [(unsigned char)10] [9])) ? (arr_12 [i_2]) : (var_10)))) ? (arr_4 [i_1 - 1]) : (((/* implicit */unsigned int) arr_12 [i_2]))))));
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)60415)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)3)))) << (((((/* implicit */_Bool) 1599715777U)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [(unsigned char)13] [(unsigned char)13] [(short)14])) : (((/* implicit */int) var_12))))))));
                    arr_19 [i_1] [i_6] [6] = (!(arr_5 [i_1]));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_0)) : (arr_4 [(short)8]))), (((/* implicit */unsigned int) ((var_0) * (((/* implicit */int) arr_10 [i_1] [i_1] [i_3] [i_6] [i_6] [i_1]))))))), (((/* implicit */unsigned int) (_Bool)1)))))));
                }
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-115))));
                    arr_22 [7] [i_2] [(short)4] [i_7] = ((/* implicit */signed char) ((((arr_1 [i_1 + 3] [i_3 + 1]) < (arr_1 [i_1 - 1] [i_3 + 1]))) ? (1271483148U) : (((/* implicit */unsigned int) ((arr_5 [i_1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_9))))))))));
                }
            }
            arr_23 [i_1] &= ((/* implicit */unsigned char) ((max((arr_12 [i_2]), (arr_12 [i_2]))) | (((/* implicit */int) ((arr_12 [i_2]) <= (arr_12 [i_2]))))));
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_14 [10] [i_1 - 1] [(unsigned char)6] [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) var_5)))))));
            var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_8])))))));
        }
        arr_26 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [0] [1U] [i_1])) : (arr_25 [(unsigned short)0] [i_1] [9]))), (arr_25 [i_1] [11U] [i_1])));
        arr_27 [i_1] = ((/* implicit */signed char) var_12);
    }
    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        var_27 = ((/* implicit */int) (((!(((/* implicit */_Bool) 1615925402U)))) || (((((/* implicit */_Bool) arr_29 [i_9])) || (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (signed char)-126))))))));
        arr_30 [i_9] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_29 [(signed char)14])) * (((/* implicit */int) arr_29 [i_9])))))))), (max((((/* implicit */unsigned short) (_Bool)1)), (min(((unsigned short)5120), (arr_28 [i_9] [i_9])))))));
        var_28 = ((/* implicit */unsigned short) ((((var_7) & (((/* implicit */int) var_11)))) >> (((((((/* implicit */_Bool) arr_29 [i_9])) ? (((/* implicit */int) arr_29 [i_9])) : (((/* implicit */int) arr_29 [(unsigned char)17])))) - (205)))));
        var_29 = -2147483637;
        var_30 = ((/* implicit */unsigned short) max((((((((/* implicit */int) arr_28 [i_9] [i_9])) & (((/* implicit */int) arr_28 [(signed char)1] [i_9])))) >> (((((/* implicit */int) arr_29 [i_9])) - (206))))), ((((+(((/* implicit */int) arr_29 [i_9])))) % (((((/* implicit */_Bool) arr_29 [i_9])) ? (((/* implicit */int) arr_28 [i_9] [i_9])) : (((/* implicit */int) arr_28 [i_9] [i_9]))))))));
    }
}
