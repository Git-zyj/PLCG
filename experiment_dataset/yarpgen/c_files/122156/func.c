/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122156
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
    for (int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                arr_8 [i_0 - 1] [i_0] [i_0] = ((/* implicit */int) var_1);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 7; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 7; i_3 += 2) 
                    {
                        arr_16 [i_3] [i_3] [i_2 + 1] [i_3] = ((/* implicit */long long int) ((unsigned int) -1LL));
                        arr_17 [i_3] [9LL] [i_2] [i_0 - 3] [i_0 - 3] [i_3] = 2941899590U;
                        arr_18 [i_3] = ((/* implicit */int) (~((~(var_8)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            arr_22 [i_0] [i_1 + 2] [i_2 + 1] [i_3] [i_3] = ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */unsigned int) arr_1 [i_2 - 1])) : (511U));
                            var_11 = ((/* implicit */unsigned int) arr_15 [i_2] [i_3] [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2]);
                        }
                    }
                    arr_23 [i_0] [i_1] [i_0 - 3] = ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (517U) : (((/* implicit */unsigned int) var_6)));
                }
                var_12 &= 113626483;
            }
        } 
    } 
    var_13 = var_3;
    var_14 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((4294966795U) * (var_10))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_5)) : (var_10))))));
    var_15 = ((/* implicit */long long int) var_3);
}
