/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] = (max((max(var_17, (arr_4 [i_1] [i_1] [i_1]))), (59 > -24834)));
                            var_20 ^= (min(((~(((17106 < (arr_5 [i_0] [5] [11] [20])))))), 49552));
                            arr_10 [10] [i_1] [i_2] [1] &= -4682659628268497443;
                        }
                    }
                }
                arr_11 [i_0] = (!((min((arr_3 [i_0] [i_0 - 2] [i_1]), -0))));
            }
        }
    }
    var_21 = ((!((((max(var_14, var_4))) < (~543674474796625743)))));
    #pragma endscop
}
