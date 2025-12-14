/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16708
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || ((!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */int) (!((_Bool)1))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_0])), (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4))) < (arr_1 [i_0]))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0])) : (var_1)))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) ((arr_12 [i_3 - 1] [i_2] [i_2] [i_2]) || (((/* implicit */_Bool) ((arr_12 [i_3 + 1] [i_2] [i_1] [i_1 - 2]) ? (((/* implicit */int) arr_12 [i_3 - 1] [i_3] [i_2] [i_2])) : (((/* implicit */int) arr_12 [i_3 - 1] [i_2] [i_2] [i_2])))))));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)4)) - (((((/* implicit */int) (unsigned short)65531)) / (((arr_13 [i_1]) / (((/* implicit */int) arr_6 [i_3]))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_4 = 1; i_4 < 9; i_4 += 1) /* same iter space */
        {
            arr_17 [i_1] = ((/* implicit */unsigned int) var_7);
            arr_18 [i_1] [i_1] [i_1 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_7 [i_1 + 1]), (arr_7 [i_1 + 1])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_0)))));
        }
        for (signed char i_5 = 1; i_5 < 9; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1 - 1] [i_5 + 2])) * (((/* implicit */int) arr_5 [i_1 - 3] [i_5 + 1]))));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((arr_22 [i_1 - 3] [i_1 - 1]) - (arr_22 [i_1 - 3] [i_1 - 1]))))));
            }
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_5] [i_5])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */short) (_Bool)1))))) ? (var_1) : (((/* implicit */int) max(((unsigned short)65530), ((unsigned short)24)))))))));
            arr_25 [i_1 - 1] [i_1] [i_5] = ((/* implicit */int) ((arr_22 [i_1] [i_5 + 1]) & (max((((/* implicit */unsigned int) (_Bool)1)), (arr_23 [i_1] [i_5 - 1] [i_1])))));
            arr_26 [i_1] [i_1 - 1] [i_1] = arr_2 [i_5];
        }
    }
    var_16 = ((/* implicit */unsigned int) var_9);
}
