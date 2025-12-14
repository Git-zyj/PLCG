/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14998
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
    var_10 = ((var_6) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (var_5))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) var_2);
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                arr_11 [i_2] [i_1] [i_1 - 1] = ((/* implicit */_Bool) ((unsigned int) arr_0 [i_1 - 1]));
                var_12 -= arr_6 [i_0 + 1] [(signed char)20] [i_0];
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    for (unsigned int i_4 = 2; i_4 < 24; i_4 += 3) 
                    {
                        {
                            arr_16 [i_4] [i_2] [i_1] [i_1] [i_2] [0U] = ((/* implicit */short) ((_Bool) arr_6 [i_1] [i_1 + 1] [i_4 - 2]));
                            arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4 - 2] [i_4] [(_Bool)1])) ? (arr_14 [i_2] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4]) : (arr_14 [i_2] [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4])));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_2] [i_4] [i_4 - 2] = var_7;
                            var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_4] [i_4] [i_4 + 1] [i_4])) ? (((/* implicit */int) arr_12 [i_1] [i_4] [i_4] [i_4] [i_4 - 2] [i_4])) : (((/* implicit */int) arr_15 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 - 2] [i_4]))));
                        }
                    } 
                } 
            }
            arr_19 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_15 [i_1] [i_1] [1ULL] [i_1] [i_1] [9ULL]), (((/* implicit */unsigned short) min((var_6), ((_Bool)1))))))), (max((arr_13 [i_1] [i_1 + 1] [i_1 + 1] [(short)16] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_2))))));
        }
        arr_20 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 2]))) < (var_3)))) >> (((((int) arr_3 [i_0 + 2])) - (24355)))));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_12 [(signed char)20] [(signed char)20] [i_0] [16U] [i_0 - 1] [(signed char)20])))))));
    }
}
