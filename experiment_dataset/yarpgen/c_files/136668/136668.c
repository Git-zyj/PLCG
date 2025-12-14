/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_18 = (arr_8 [i_2] [i_0] [i_0]);
                            var_19 = ((((((((arr_2 [i_3] [i_3]) >= (arr_2 [i_0] [i_1])))) == 122))) - var_11);
                        }
                    }
                }
                var_20 = (-(arr_2 [i_0] [i_1]));
                var_21 = (arr_11 [i_1]);
            }
        }
    }
    #pragma endscop
}
