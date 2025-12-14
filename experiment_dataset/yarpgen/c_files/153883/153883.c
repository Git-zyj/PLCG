/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((255 ? 255 : (min(255, ((0 ? var_1 : 16806879078868652709))))));
    var_12 = 234;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_0] [19] [1] = 512;
                    arr_11 [i_0] [i_2] = ((-(((242 ? var_1 : 21)))));
                    arr_12 [i_2 - 1] [i_2 - 1] |= (((-32767 - 1) ? (!-32100) : 0));
                }
            }
        }
    }
    #pragma endscop
}
