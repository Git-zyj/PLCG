/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_10 *= ((0 << (((104 * 31126) / (104 * 8392769059781341385)))));
                            var_11 = (min(var_11, (-27 + 6154870598180251513)));
                            arr_12 [i_0] [i_2] [i_2] [i_3] &= (((((8589934591 % 24665) >> (757469392 - 757469357))) % 138964537));
                        }
                    }
                }
                arr_13 [i_1] = (1 > -1);
            }
        }
    }
    var_12 = 1593502234129957338;
    #pragma endscop
}
