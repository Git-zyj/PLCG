/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139211
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
    var_13 = min((((/* implicit */int) (!((!(var_8)))))), (1104734731));
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) ((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), (var_6)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((unsigned char) arr_10 [i_4] [i_3] [(signed char)14] [(unsigned char)5] [i_0]));
                                arr_11 [i_4 - 1] [16ULL] [i_2 - 1] [i_2] [i_1] [(short)3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_7 [i_2 + 2] [i_2 + 2])));
                                var_16 |= ((/* implicit */unsigned int) ((arr_4 [i_1 + 1] [i_0]) >= (arr_4 [i_1 + 1] [8])));
                            }
                        } 
                    } 
                    arr_12 [i_2 + 1] [i_0] = (-(((/* implicit */int) var_8)));
                }
                for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */int) max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1 + 1]))));
                    var_18 = ((/* implicit */_Bool) max((((long long int) (+(((/* implicit */int) arr_5 [i_5 - 1] [i_0]))))), (((/* implicit */long long int) var_12))));
                    var_19 += ((/* implicit */unsigned short) arr_0 [i_1 - 1]);
                    var_20 *= ((/* implicit */unsigned short) min((min((((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_5 + 2] [19U]))) * (arr_0 [i_0])))))), (((((/* implicit */_Bool) var_2)) ? ((-(var_9))) : (((((/* implicit */unsigned long long int) var_7)) * (0ULL)))))));
                }
                arr_16 [i_1] = ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1])) - (-1)))), (max((((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_0])), (arr_2 [i_0] [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_1] [i_0])))) : (max((var_6), (arr_2 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) var_12))))))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7)))) : (max((var_9), (((/* implicit */unsigned long long int) var_10))))))));
}
