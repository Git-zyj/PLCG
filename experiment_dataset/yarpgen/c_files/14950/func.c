/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14950
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) (_Bool)1);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((-1453286991), (((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]))))) ? (((/* implicit */int) min(((signed char)-39), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (signed char)-70))));
                                var_13 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)77))))) ? (1) : (((((/* implicit */int) (signed char)60)) / (((/* implicit */int) arr_13 [i_4] [i_4] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1])))));
                                arr_15 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) var_8);
    var_15 &= max((((/* implicit */signed char) (_Bool)0)), (var_9));
}
