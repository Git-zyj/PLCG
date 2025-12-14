/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161935
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_1])) : (((/* implicit */int) arr_3 [i_0 - 2] [i_0]))))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1])) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_1])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_1])))) : (((/* implicit */int) arr_3 [i_0 + 1] [i_1]))));
                    var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_5 [i_0 - 3] [i_1] [i_2])) ? (((/* implicit */int) arr_5 [i_0 - 3] [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_3 + 1])) ? (((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1] [i_2] [i_2] [i_4] [i_3 - 2])) ? (((/* implicit */int) arr_5 [i_4] [i_2] [i_0])) : (((/* implicit */int) arr_4 [i_3 + 1])))) : (((((/* implicit */_Bool) arr_8 [i_4 + 2] [i_3] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) arr_7 [i_3])) ? (((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_1] [i_2] [i_3 + 1] [i_4 + 3] [i_3])) ? (arr_8 [i_4] [i_3 - 1] [i_1] [i_0 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2] [i_3 - 1] [i_4 - 3])))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_10 [i_3 - 2] [i_1] [i_2] [i_3 - 1] [i_4] [i_0])) : (((/* implicit */int) arr_4 [i_0]))))))));
                                arr_11 [i_4 + 2] [i_1] [i_3] [i_3] [i_4] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_3]))))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_2] [i_3 + 1] [i_4 - 3])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_10 [i_4 - 3] [i_4 - 2] [i_3 - 2] [i_2] [i_1] [i_0 - 1])))) : (((arr_9 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] [i_2] [i_0 - 1]) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3 - 2] [i_0 - 3] [i_4]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_1] [i_4 + 1]))))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_0 - 2] [i_1] [i_4])) : (((/* implicit */int) arr_5 [i_1] [i_4] [i_2])))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_3] [i_0]))))) ? (((arr_4 [i_1]) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_9 [i_4] [i_3] [i_3] [i_3] [i_2] [i_1] [i_0])))) : (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_4 [i_0]))))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0 - 3]))))) ? (((/* implicit */int) arr_4 [i_0 - 3])) : (((arr_4 [i_0 - 3]) ? (((/* implicit */int) arr_4 [i_0 - 3])) : (((/* implicit */int) arr_4 [i_0 - 3]))))));
                                arr_12 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3 + 1] [i_4 + 2] |= ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_4] [i_2] [i_3] [i_4 + 3] [i_0 - 2] [i_1])) : (((/* implicit */int) arr_0 [i_4 - 1]))))) : (arr_6 [i_0 - 2] [i_1] [i_2] [i_3 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3 - 2] [i_1] [i_2] [i_1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_10 [i_2] [i_1] [i_0 + 1] [i_3 + 1] [i_3 - 1] [i_2])) : (((/* implicit */int) arr_10 [i_4 - 1] [i_2] [i_2] [i_3] [i_3 - 2] [i_1]))))));
                                arr_13 [i_4 - 1] [i_4] [i_3 - 1] [i_2] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 - 2] [i_1] [i_2] [i_3] [i_4 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_4]))) : (arr_8 [i_0 - 2] [i_0 + 1] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 3]))) : (arr_8 [i_0 - 3] [i_4 - 1] [i_0 - 1] [i_3 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 2]))))) : (((arr_9 [i_4] [i_4] [i_4] [i_4 - 2] [i_4] [i_4] [i_3 - 2]) ? (arr_6 [i_4 - 2] [i_4 + 2] [i_4 + 2] [i_3 - 2]) : (arr_6 [i_4 - 2] [i_4] [i_4 - 3] [i_3 - 2]))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]);
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_4 [i_0 - 3]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1])))) : (((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_3 [i_1] [i_0 - 2])))) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (var_16) : (var_14)));
    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_8))));
}
