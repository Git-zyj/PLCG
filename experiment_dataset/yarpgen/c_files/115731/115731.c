/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (((((25877 ? 15290 : 2395433076551454546))) ? 15314 : var_7));
                arr_4 [i_0] [i_0] [i_1] = ((((((8246957695547515797 ? 62913 : (arr_0 [i_1 + 3]))))) ? 8246957695547515795 : 3));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_3] = ((476904630 ? (min(17642, 476904630)) : (15290 > -15287)));
                            var_16 += (((((~46599) | var_3)) ^ (min(13813932540248905495, 10053813841132113921))));
                            arr_12 [12] [i_1] = ((((min((arr_7 [i_0] [i_0] [1]), (arr_7 [i_0] [i_0] [i_2])))) ? (((var_9 ? var_3 : (arr_8 [i_0] [i_1] [5] [i_3] [3] [i_2])))) : 104));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
