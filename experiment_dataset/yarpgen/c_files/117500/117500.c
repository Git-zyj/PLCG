/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(6819301539874791808, 1));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((0 ? 0 : (-127 - 1)))) ? (((((((arr_3 [i_0] [i_0] [i_0]) ? 556572035 : (arr_3 [i_0] [i_0] [i_1 - 2])))) > var_5))) : ((max(var_9, (var_6 != var_18))))));
                arr_7 [i_1] = ((~((158591929725877470 ? var_14 : -71))));
                arr_8 [i_0 - 3] [0] = -7800911270487273041;
                arr_9 [1] [1] [i_0] = (arr_3 [9] [i_0] [i_1]);
            }
        }
    }
    var_21 = ((((min(var_9, var_3))) && (((min(399582729, var_13)) < (max(851019119367697660, 32737))))));
    #pragma endscop
}
