/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12509
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) (unsigned char)118))))) || (((/* implicit */_Bool) (short)-1338))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_3)) / (((/* implicit */int) arr_2 [i_2])))) > (((/* implicit */int) arr_1 [i_2 + 2]))));
                        var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)106))))) ? (((/* implicit */int) ((_Bool) arr_9 [i_0] [i_3] [i_2] [i_3]))) : (((/* implicit */int) var_12))));
                    }
                } 
            } 
        } 
        arr_10 [i_0 - 1] = ((/* implicit */short) arr_1 [i_0]);
        arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)153)) % (((/* implicit */int) (short)12259))));
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 22; i_4 += 4) 
        {
            var_19 = ((/* implicit */signed char) ((var_6) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [(unsigned short)15] [i_4 - 2] [(unsigned short)15] [(short)22] [i_4])) / (((/* implicit */int) (short)-28914))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (3296592808U)))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_13 [i_0] [i_0 - 2] [i_0 + 1]))));
            arr_14 [i_0] [i_4] [i_4] = ((/* implicit */unsigned long long int) 3271316230U);
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    for (unsigned char i_7 = 4; i_7 < 22; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((signed char) var_11)))));
                            arr_23 [i_0] [i_4] [i_5] [i_0] [i_0] [(unsigned char)3] [i_6] = ((arr_4 [i_4] [i_0] [i_0] [i_0 + 1]) - (((((/* implicit */int) var_6)) ^ (-601276865))));
                        }
                    } 
                } 
                arr_24 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_17 [i_5] [i_5 + 4] [(unsigned short)15] [i_4] [i_4] [i_0])))) : (arr_12 [i_0 - 3] [i_4 - 2] [i_5 + 4])));
                /* LoopSeq 4 */
                for (long long int i_8 = 1; i_8 < 20; i_8 += 4) 
                {
                    arr_28 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */short) ((((var_9) || (((/* implicit */_Bool) arr_17 [i_5] [i_4] [i_5] [i_8] [(unsigned short)19] [(unsigned short)19])))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_17 [i_0] [(signed char)3] [i_0] [i_0] [i_0] [i_5]))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-7137)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_26 [(unsigned char)1] [10LL] [i_5] [i_8])) : (((/* implicit */int) arr_0 [i_0]))))) : (var_2)));
                }
                for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    arr_31 [i_0] [(signed char)11] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0 + 2])) % (((/* implicit */int) arr_2 [i_0 - 2]))));
                    var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4 + 1]))) - (arr_12 [i_9] [i_5 - 1] [i_4 + 1])));
                }
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    var_24 = ((/* implicit */signed char) var_1);
                    arr_36 [i_0] [i_5] [i_5] [i_10] = ((/* implicit */signed char) arr_4 [i_10] [i_5] [i_4] [i_0]);
                    arr_37 [i_0 - 1] [i_0 + 1] [i_5] [i_0 + 1] [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10632))) <= (18446744073709551607ULL))));
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        arr_41 [i_0] [i_5] [i_0] = ((/* implicit */unsigned long long int) arr_26 [(unsigned char)4] [i_4] [i_4] [i_0]);
                        arr_42 [i_5] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) && (((/* implicit */_Bool) (unsigned char)118))));
                        arr_43 [i_5] [i_10] [i_5] [i_0] [i_5] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned char)102))))));
                    }
                    arr_44 [i_5] [i_0] [(unsigned short)6] [i_0] [(unsigned char)19] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5 + 3] [i_4 + 1] [i_0 + 1] [i_0]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_4 - 2] [i_5] [i_10])) : (18446744073709551615ULL)))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    var_25 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_12] [i_4 + 1] [i_0] [i_0 - 3] [i_0] [i_0]))) <= (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5] [i_5])))))));
                    arr_47 [i_5] = ((/* implicit */signed char) ((short) arr_45 [i_5] [i_5] [i_4] [i_4] [i_0] [i_5]));
                    var_26 |= (!(((/* implicit */_Bool) (short)-30018)));
                }
                var_27 = ((/* implicit */unsigned char) (!((_Bool)0)));
            }
            for (long long int i_13 = 2; i_13 < 22; i_13 += 1) 
            {
                arr_50 [i_4] [i_4 + 1] [i_4 + 1] |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) (short)26084)) : (((/* implicit */int) arr_40 [0ULL] [i_13 + 1] [i_4 - 2] [(_Bool)1] [i_0] [i_0] [i_0 - 3]))));
                var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
                var_29 = (!(((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-7130)))))));
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) var_10)))) + (arr_29 [i_13] [i_4] [i_4] [i_0 - 3]))))));
            }
        }
    }
}
