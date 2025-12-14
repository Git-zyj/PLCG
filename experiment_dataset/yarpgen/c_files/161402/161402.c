/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 += var_9;
                    var_13 = ((min(((arr_0 [i_1]), (max(13762260324460513694, 13762260324460513692))))));
                }
            }
        }
    }
    var_14 += var_3;
    var_15 = (min(var_15, ((min((var_10 == var_11), (var_11 % var_0))))));
    var_16 = (max(var_16, (117 != 13762260324460513704)));
    #pragma endscop
}
