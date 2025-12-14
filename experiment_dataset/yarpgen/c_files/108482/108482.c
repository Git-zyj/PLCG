/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] = arr_1 [i_0];
                arr_6 [i_1] [1] [i_0] = (((max(((min(var_8, var_8))), (min(var_6, 255))))) ? (min(31, 9361057013162208834)) : ((((((1 ? -1 : 255))) ? ((var_10 ? var_6 : 174)) : 1))));
            }
        }
    }
    var_13 -= var_6;
    var_14 = (((((-(2356033824 / 195)))) != var_3));
    #pragma endscop
}
