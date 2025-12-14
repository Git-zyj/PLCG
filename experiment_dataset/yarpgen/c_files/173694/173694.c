/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((((max((arr_0 [i_2 + 2]), var_17)))) != (((((arr_5 [i_0]) >= 1)) ? 1 : ((((!(arr_0 [i_1]))))))));
                    var_18 += (max(((1 ? 1 : -1502354172)), 11052947707635223705));
                }
            }
        }
    }
    var_19 = (18366 & 11);
    var_20 = var_10;
    var_21 = (max(var_21, ((((~(~0)))))));
    #pragma endscop
}
