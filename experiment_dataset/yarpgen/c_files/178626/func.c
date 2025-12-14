/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178626
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
    var_16 |= ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 6; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (-((-((+(((/* implicit */int) var_2))))))));
                    var_18 = ((/* implicit */short) (+(((/* implicit */int) ((((var_11) ^ (var_11))) == (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_15))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0 + 4] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_15))))) && (((/* implicit */_Bool) var_11))))));
                                arr_16 [i_0] [i_0] [(signed char)3] [i_2] [i_4] [i_0] = var_15;
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_1);
}
