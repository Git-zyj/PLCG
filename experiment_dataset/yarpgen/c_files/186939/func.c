/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186939
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 |= var_2;
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_10 [i_3] [i_3] [i_2] [i_1 + 1] [i_1] [i_0 - 3] = var_11;
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 4094175424U)) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1 + 1] [i_2])) : (((/* implicit */int) arr_4 [(signed char)6] [i_1] [(signed char)6]))))))) ? ((-(((/* implicit */int) (short)-1)))) : ((+(((/* implicit */int) (_Bool)0))))));
                            var_17 = ((/* implicit */_Bool) (-(((arr_3 [i_0 + 1]) ? (((/* implicit */int) arr_2 [i_0] [(_Bool)1])) : (((/* implicit */int) arr_9 [i_3] [i_2] [i_1 + 1] [i_0 - 2]))))));
                            var_18 = ((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) arr_6 [i_0 - 2] [i_0 + 1] [i_1 + 1] [i_1 + 1])) ^ (((/* implicit */int) arr_6 [i_0 - 2] [i_0 + 1] [i_1 + 1] [i_1 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 *= var_0;
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (short i_5 = 1; i_5 < 9; i_5 += 4) 
        {
            {
                arr_17 [i_5] = ((/* implicit */_Bool) min(((signed char)7), (((/* implicit */signed char) (_Bool)1))));
                arr_18 [i_4] [i_5] = ((/* implicit */short) arr_13 [10U]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_6);
}
