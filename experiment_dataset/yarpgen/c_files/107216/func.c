/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107216
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
    var_12 |= ((/* implicit */short) var_9);
    var_13 = var_11;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) var_7);
                    var_14 = ((/* implicit */unsigned int) (+(arr_7 [i_0] [i_0] [i_0] [i_2 - 1])));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */int) var_8);
                }
                for (signed char i_3 = 3; i_3 < 16; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        arr_19 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)5855))));
                        arr_20 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_3] [i_0] = ((/* implicit */short) 0ULL);
                        var_15 = min(((((+(((/* implicit */int) (short)-5831)))) * (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_4])))), (((/* implicit */int) arr_13 [i_0] [i_1 + 1] [i_3] [i_4])));
                        arr_21 [i_0] = (-(((/* implicit */int) var_9)));
                        arr_22 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) var_2);
                    }
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        arr_26 [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_3 + 1]);
                        var_16 = ((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_5] [9LL]);
                        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-5831)) ? (((((/* implicit */_Bool) (short)-5831)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_5 [i_0 + 2] [i_1 + 1] [i_3 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) arr_17 [2LL] [i_3] [i_1] [2LL])))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        arr_31 [i_0 + 2] [i_1] [i_0] [i_6] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_3)) & (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0 + 1] [i_1] [i_3 - 3] [i_6])) != (((/* implicit */int) var_9)))))));
                        arr_32 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_8))));
                    }
                    var_19 = ((/* implicit */int) ((arr_29 [i_3 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5855))) : (max((arr_18 [i_1 + 1] [i_1 - 1] [i_0] [i_1 + 1]), (arr_18 [i_1 + 1] [i_1 - 1] [i_0] [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) arr_37 [i_0] [i_1]);
                                arr_38 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-5831)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-115))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_28 [14] [i_3] [i_1]))));
                                var_22 = ((/* implicit */unsigned short) var_4);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    var_23 *= ((/* implicit */unsigned long long int) arr_37 [i_1] [i_1 - 1]);
                    var_24 = ((/* implicit */short) 779304679U);
                    arr_41 [i_0] = ((/* implicit */signed char) arr_6 [i_0]);
                }
                var_25 = ((/* implicit */unsigned long long int) var_1);
            }
        } 
    } 
}
