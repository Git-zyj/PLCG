/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = var_2;
                arr_7 [i_0] [i_1] = -1438037206;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] [i_2] [i_0] = (((arr_4 [i_0]) ? 33 : (arr_2 [i_1])));
                    arr_12 [i_0] [i_0] = (((arr_9 [i_0] [i_0]) ? 84 : (arr_9 [i_2] [i_2])));
                    arr_13 [i_0] [4] [i_0] [i_0] = -6020930907493610368;
                    arr_14 [12] [i_1] [i_2] [i_0] = ((42 && (arr_9 [i_1] [i_0])));
                }
            }
        }
    }
    var_10 = 39;
    var_11 = (((((min((max(42, var_4)), (42 != var_2))))) & (1152921504539738112 ^ var_0)));
    var_12 = (1 == 1);
    #pragma endscop
}
