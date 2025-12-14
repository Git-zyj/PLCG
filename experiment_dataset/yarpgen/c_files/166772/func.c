/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166772
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
    var_13 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */int) var_3))));
    var_14 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) arr_1 [i_0]);
                arr_6 [4U] = ((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */unsigned short) min((arr_2 [i_1]), (arr_2 [i_0])))), (min((arr_4 [i_0]), (((/* implicit */unsigned short) arr_3 [i_0] [i_0]))))))), (max((((/* implicit */int) arr_4 [i_0])), (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_1]))))))));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), (arr_4 [i_0]))))))) ? (min((((/* implicit */int) arr_4 [i_1])), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_3 [(unsigned short)5] [(unsigned short)5])))))) : (min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_3] = max((min((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_4 [10LL])) : (((/* implicit */int) arr_7 [i_0])))), (((/* implicit */int) min((arr_11 [i_0] [i_1] [(unsigned char)10]), (((/* implicit */unsigned short) arr_2 [i_0]))))))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_0] [i_1])), (arr_9 [i_2] [i_0] [i_2 - 1])))));
                            arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((arr_11 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_0 [i_0]))))) ? (min((134213632U), (124U))) : (((/* implicit */unsigned int) min((arr_8 [i_2] [i_2] [i_2] [i_2]), (arr_10 [i_0] [i_3] [i_2 - 2] [i_3] [i_2 - 2] [i_3])))))), (((/* implicit */unsigned int) arr_3 [i_1] [i_3]))));
                            arr_15 [i_0] [i_0] [i_0] [(short)4] [i_0] = min((max((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) arr_12 [i_1] [i_2])))), (((/* implicit */int) arr_3 [i_1] [4U])))), (((/* implicit */int) min((max((arr_9 [i_1] [i_2] [i_1]), (((/* implicit */unsigned short) arr_2 [i_0])))), (arr_9 [i_0] [i_1] [i_0])))));
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_0])), (max((arr_7 [i_0]), (((/* implicit */unsigned short) arr_12 [4] [i_1]))))))) ? (min((((/* implicit */int) arr_11 [i_2] [i_1] [i_1])), (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_12 [i_1] [i_1])) : (arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1]))))) : (min((((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0] [10LL])), (arr_9 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_7 [i_0]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
