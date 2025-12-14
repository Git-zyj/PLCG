/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_9;
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_8 [i_0] |= ((~((((min(251, 697))) ? (20 >= 4) : ((min((arr_5 [i_1]), (arr_2 [10]))))))));
                var_12 = (min(var_12, (((min((max((arr_4 [i_0]), 4294967285)), var_4))))));
                var_13 = 2901184170;
            }
        }
    }
    var_14 = ((14 + (((var_7 / (167 ^ var_5))))));
    #pragma endscop
}
