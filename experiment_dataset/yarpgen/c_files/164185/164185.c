/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-54 <= 27348);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 + 3] [i_1] = 2147483584;
                arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 3] = (((((91 != ((max(1, (arr_3 [i_0] [i_0] [i_0]))))))) ^ ((~(var_4 != var_4)))));
                arr_7 [i_0 + 2] [i_1] = ((1 ? 18809505 : 805306368));
                var_19 = var_15;
                var_20 = (arr_2 [i_0 - 1] [i_0 - 1]);
            }
        }
    }
    var_21 = (min(var_21, var_9));
    var_22 = (((((var_0 ? 1971834559 : 3574084241887492807))) + (max(22167, 733205032))));
    #pragma endscop
}
