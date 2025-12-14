/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (max(var_17, var_8));
                var_18 = (i_0 % 2 == zero) ? ((((-(((arr_2 [i_0] [i_0 + 1]) >> (((arr_1 [i_1] [i_0]) - 3497)))))))) : ((((-(((arr_2 [i_0] [i_0 + 1]) >> (((((arr_1 [i_1] [i_0]) - 3497)) - 49536))))))));
            }
        }
    }
    var_19 = var_4;
    var_20 += ((81 ? 6251 : var_14));
    #pragma endscop
}
