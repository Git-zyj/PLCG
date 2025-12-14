/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166985
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
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_11 [i_0] [i_1] [i_2] [i_0] [i_3] [i_1]))))))));
                            var_20 -= ((/* implicit */unsigned int) (short)29364);
                            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_1])))))));
                            var_21 = ((/* implicit */unsigned int) -2076578858);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            arr_17 [i_0] [i_4] = ((/* implicit */unsigned int) 10);
                            var_22 += ((/* implicit */unsigned long long int) 3167777262U);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) max((-3), (max((((/* implicit */int) arr_10 [14U] [i_0 + 1] [i_1] [i_0 + 1] [i_1])), ((~(((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_0] [i_0]))))))));
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((short) 2076578858)))));
            }
        } 
    } 
    var_25 &= var_15;
    var_26 = var_2;
}
