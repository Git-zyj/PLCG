/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 &= (arr_7 [i_0] [i_0] [i_2 - 1] [i_2 - 1]);
                    var_17 = (arr_6 [i_2 + 1]);
                    arr_9 [i_0] [i_0] [i_0] [3] = (arr_1 [i_0] [i_0]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_18 -= (-6074911994272032089 == 235);
                var_19 -= -1121686625;
                var_20 = (((arr_10 [i_4]) ? (~1121686625) : (arr_13 [20])));
                var_21 = 3173280688;
                arr_15 [i_3] [19] = ((~(arr_10 [i_3 - 1])));
            }
        }
    }
    #pragma endscop
}
