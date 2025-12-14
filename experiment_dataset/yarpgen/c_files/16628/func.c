/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16628
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
    for (unsigned short i_0 = 3; i_0 < 6; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [5] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) ((signed char) -6310343434762335916LL)))))), (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 4] [i_0 - 3])) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2] [i_0 + 2])) : (((/* implicit */int) arr_3 [i_0 + 3] [i_0 - 2] [i_0 - 1]))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */_Bool) arr_0 [i_2] [i_0]);
                    var_16 = ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) 0ULL);
}
