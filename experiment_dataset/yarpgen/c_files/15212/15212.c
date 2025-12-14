/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 += ((~(arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1])));
                    var_12 = (min(var_12, (1394903076 != 1)));
                    arr_9 [12] |= (((arr_0 [6]) ? (~46976) : var_1));
                }
            }
        }
    }
    var_13 = (min(var_13, var_2));
    var_14 += (min(46976, (((((var_4 ? var_3 : var_9))) ? (min(var_3, 13705)) : var_7))));
    var_15 ^= (((1 ? (((var_7 >> (var_3 - 121136790039084201)))) : 67043328)));
    #pragma endscop
}
