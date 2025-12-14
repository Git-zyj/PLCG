/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((max(var_9, var_15))), (max((((var_5 ? 848644163 : var_5))), var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (!65514);
                    var_18 &= (+(((((max((arr_2 [7]), var_15))) < var_4))));
                    arr_9 [i_1] [i_1] = (var_13 <= var_11);
                }
            }
        }
    }
    var_19 |= (min((max(116, 95)), 0));
    #pragma endscop
}
