/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133751
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
    var_15 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 4; i_2 < 10; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_1 - 4] [i_2] [(signed char)5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_9 [i_0])))) : (var_4))))));
                                arr_11 [(short)6] [(short)6] [(unsigned short)8] [(short)6] [i_3] [i_3] [(unsigned short)8] = ((/* implicit */_Bool) 4683796155056286881ULL);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) (_Bool)1);
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_2 - 1] [(unsigned short)4] [i_2 - 4])) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1] [(signed char)6]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        arr_14 [i_1] [i_2] = (unsigned short)60877;
                        arr_15 [12] [i_5] [(unsigned char)12] [12] |= ((/* implicit */short) ((_Bool) arr_12 [i_5 - 1] [i_1 - 4] [i_5] [i_5] [(unsigned short)6] [i_2 - 4]));
                        var_19 = ((/* implicit */unsigned short) arr_6 [i_0] [i_1 + 1] [8ULL] [i_1]);
                    }
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */short) (_Bool)0);
                }
                for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    arr_20 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_18 [(signed char)10] [i_1 + 1])), (arr_13 [i_0] [i_1] [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned char)11] [i_1 + 1] [(_Bool)1] [(unsigned char)2]))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (arr_13 [i_0] [i_0] [(_Bool)1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_6]))))))) + (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) arr_1 [(unsigned char)0] [i_1 - 2]))))))));
                    var_21 = ((/* implicit */unsigned char) arr_9 [i_0]);
                    var_22 = ((/* implicit */short) min((((arr_13 [i_0] [i_1 - 4] [i_1 - 4] [i_1 + 1]) & (((/* implicit */unsigned long long int) arr_18 [(_Bool)1] [i_1 + 1])))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (arr_18 [i_0] [i_1 + 1]))))));
                }
                arr_21 [(unsigned short)8] [(unsigned short)8] [i_1] = ((/* implicit */_Bool) ((min((arr_4 [i_1] [i_1 - 3] [i_0]), (arr_4 [i_0] [i_1] [i_1 - 4]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) && (arr_4 [i_0] [i_0] [i_0]))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]))))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (858107615U))) : (((/* implicit */unsigned int) (+(arr_18 [3ULL] [i_1]))))))) ? (((((/* implicit */int) arr_2 [i_1 - 1])) * (((/* implicit */int) arr_2 [i_1 - 2])))) : (((/* implicit */int) var_5))));
            }
        } 
    } 
    var_24 = var_0;
    var_25 |= ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
}
