/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_11 = ((~var_4) + (var_9 - var_4));
                            var_12 *= ((-var_8 < (~var_10)));
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] = (~var_4);
                            arr_12 [i_0] [i_0] [i_2] = ((((max(var_9, var_5))) ? (9090187215971925778 <= var_1) : (min(var_10, (var_0 | 44)))));
                        }
                    }
                }
                var_13 = ((-(!9090187215971925784)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_14 = var_0;
                var_15 = (max((!var_6), ((9090187215971925784 ? var_5 : var_7))));
                var_16 += var_2;
                arr_20 [i_5] = var_4;
            }
        }
    }
    #pragma endscop
}
