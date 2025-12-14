/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107061
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
    var_19 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])));
        var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_22 = ((/* implicit */short) min((((unsigned long long int) max((((/* implicit */unsigned long long int) var_10)), (arr_0 [i_0] [i_0])))), (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 8; i_1 += 1) /* same iter space */
        {
            var_23 -= ((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 3])) ? (arr_0 [i_0] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0] [i_1 + 1])))));
            var_24 -= ((/* implicit */unsigned char) arr_0 [i_0] [i_1]);
            arr_5 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) min((1536074542U), (1536074542U)))), (((long long int) arr_0 [i_1 + 1] [i_1 + 3]))));
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((long long int) arr_4 [i_1])))));
        }
        for (int i_2 = 2; i_2 < 8; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_3 = 2; i_3 < 8; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    {
                        arr_15 [i_0] [i_0] [i_3] [i_3] [i_4] &= var_2;
                        var_26 = ((/* implicit */short) ((unsigned char) max((((/* implicit */unsigned long long int) arr_12 [i_2 - 1] [i_3 - 2])), (arr_13 [i_2 + 1] [i_3] [i_3 - 2]))));
                    }
                } 
            } 
            var_27 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned short) arr_13 [i_2 - 2] [i_2 + 3] [i_2 - 2]))), (arr_11 [i_0] [i_0])));
        }
    }
    var_28 -= ((/* implicit */unsigned char) var_3);
}
