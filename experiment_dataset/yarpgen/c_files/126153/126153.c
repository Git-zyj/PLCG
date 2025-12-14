/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 ^= (~4813894006502643781);
                arr_6 [23] [i_0] [22] = ((((((arr_5 [23]) >= -1605622041765175576))) >= 8808));
            }
        }
    }
    var_13 = (9210289302653128646 ? var_3 : ((-(min(var_7, 320951419919699419)))));
    var_14 = 42;
    #pragma endscop
}
