/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_12));
    var_14 = (~384);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = min(((((arr_7 [1] [1] [i_0]) >= -13827228408767888749))), (min(1218169970, 0)));
                    arr_10 [i_0] [i_0] = arr_0 [i_0];
                }
            }
        }
    }
    var_16 = var_11;
    var_17 = (min(var_17, (32767 && 32762)));
    #pragma endscop
}
