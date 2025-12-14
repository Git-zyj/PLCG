/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118029
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_12 [i_1 - 3] [i_3] [i_3] |= arr_4 [5U] [5U];
                                var_14 *= max((arr_11 [i_0] [i_3] [i_2] [2U] [i_3] [i_4]), (((unsigned int) (-(4U)))));
                            }
                        } 
                    } 
                    var_15 ^= ((unsigned int) ((((arr_7 [i_0] [i_1] [i_1] [i_1]) / (var_3))) >= (max((arr_2 [i_1]), (var_6)))));
                }
                var_16 = ((((/* implicit */_Bool) ((unsigned int) 12582912U))) ? ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (4282384383U) : (var_3))))) : (var_12));
            }
        } 
    } 
    var_17 = var_4;
    var_18 = ((/* implicit */unsigned int) min((var_18), (var_0)));
    var_19 = 4282384383U;
}
