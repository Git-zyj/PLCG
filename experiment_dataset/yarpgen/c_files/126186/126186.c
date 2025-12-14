/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_11 |= (arr_4 [i_0]);
                arr_6 [i_1] [i_1] [i_1 + 2] = (((((((arr_4 [i_1]) & 10470778040285232557))) ? 17 : (~var_9))) << (((10470778040285232557 || ((min(7975966033424319037, 7975966033424319037)))))));
                var_12 = 9684588543914911786;
            }
        }
    }
    var_13 &= (((!var_2) ? var_8 : (((var_5 ? var_10 : 109)))));
    #pragma endscop
}
