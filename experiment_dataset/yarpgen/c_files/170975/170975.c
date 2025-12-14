/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 = (max(var_17, 33554431));
        arr_2 [i_0] [i_0] &= 134287441;
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_18 = 1;
        arr_7 [i_1] [4] = (arr_5 [i_1]);
        var_19 = (max(var_19, ((max((arr_3 [i_1 - 1]), ((-(arr_3 [i_1 + 1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_20 = 242;
                    arr_14 [i_1] [i_2] [i_1] [i_3] = ((!((!((max(3612080087732678539, 269799155)))))));
                    arr_15 [i_1] [i_1] = ((!(arr_6 [i_1])));
                    var_21 = 262144;
                }
            }
        }
        var_22 += (min((min(242, 0)), (arr_9 [i_1 + 1] [i_1 - 1] [i_1 + 1])));
    }
    var_23 = 250;
    var_24 = ((173 * (!7)));
    #pragma endscop
}
