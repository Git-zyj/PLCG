/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133775
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((arr_7 [i_0] [i_0]) | (arr_7 [i_0] [i_0]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_12))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))))))));
                var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_5 [i_1 - 1])))));
                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_6 [i_1]))))));
                var_17 = ((/* implicit */long long int) var_10);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_0 [i_1 + 1] [i_2]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_1] [i_3 + 2] [i_3] = ((/* implicit */unsigned short) ((arr_5 [i_1 - 1]) ? (((/* implicit */int) arr_5 [i_1 + 2])) : (((/* implicit */int) arr_5 [i_1 + 1]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
                        {
                            var_19 = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_4])) % (((/* implicit */int) arr_9 [10U] [i_1])))) ^ ((-(((/* implicit */int) arr_2 [i_3 + 3]))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_4])) * (((/* implicit */int) arr_9 [10U] [i_1])))) ^ ((-(((/* implicit */int) arr_2 [i_3 + 3])))))));
                            var_20 = ((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)0)) | (arr_1 [i_2])))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                        {
                            arr_17 [i_5] [i_1] [i_3 + 2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_3);
                            arr_18 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((arr_16 [i_0] [i_3 - 1] [i_1 + 2]) ? (arr_8 [i_0] [7U] [i_1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_10 [i_0] [i_1] [i_0] [i_0]))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_3] [(unsigned short)10] = ((/* implicit */unsigned short) var_10);
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_3) / (arr_15 [i_0] [i_0] [(short)16] [i_0] [i_6] [i_0])))))))));
                            var_22 = ((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 + 3] [i_3 - 1] [i_3])) ? (((/* implicit */unsigned int) var_9)) : (arr_8 [i_1 + 2] [i_1 + 1] [i_3 + 3] [i_6]));
                        }
                        arr_23 [i_3] [1U] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((2426401287U) * (arr_0 [(unsigned short)18] [i_1 + 2]))))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((1095336070U) <= (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (1868566008U))))))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1023))))) : (((((/* implicit */_Bool) arr_19 [i_0] [i_1 + 3] [i_2] [i_2])) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_12))))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((-((-(var_0)))))));
}
