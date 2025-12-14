/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175086
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
    var_13 ^= 851351130U;
    var_14 = 1885320063U;
    var_15 = 33554176U;
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                arr_6 [i_1 - 1] = max((4261413119U), (619445055U));
                var_16 = ((/* implicit */unsigned int) max((var_16), (max((((arr_5 [i_0 + 1] [i_0]) << (((var_0) - (1358910756U))))), ((~(arr_0 [i_0 - 1] [i_1 + 1])))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] = ((unsigned int) (~(max((arr_4 [i_1]), (arr_14 [i_0] [i_0])))));
                                arr_16 [i_4] [i_3 - 1] [i_2] [i_4] [i_0] [i_0] [9U] = ((((unsigned int) min((1629971083U), (2409647232U)))) / (max((((unsigned int) 851351121U)), (((((/* implicit */_Bool) arr_1 [i_3])) ? (4294967295U) : (15U))))));
                                var_17 = max((4294967289U), (33554177U));
                                arr_17 [i_4] [i_4] [i_0] = ((((/* implicit */_Bool) 1610612736U)) ? (((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (arr_2 [i_2 - 1]) : (var_4))) : (((max((11U), (33554177U))) - (((((/* implicit */_Bool) 4294967295U)) ? (1140748372U) : (0U))))));
                                var_18 = arr_14 [i_2] [i_1];
                            }
                        } 
                    } 
                } 
                var_19 = ((unsigned int) 2294094030U);
            }
        } 
    } 
    var_20 = ((unsigned int) ((2409647233U) % (373671804U)));
}
