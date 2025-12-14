/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_9;
    var_15 = ((((var_4 ? 1 : var_0))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [0] [i_0] = ((-2503396811677108681 % (arr_0 [i_0 + 3])));
        var_16 = 7012972049391366764;
        var_17 = (arr_0 [i_0 + 4]);
        var_18 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_19 = (((arr_3 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_20 = (min(var_20, ((((arr_5 [16] [i_2] [17]) ? (arr_7 [i_1 + 2] [i_3]) : (arr_10 [16] [6] [i_3] [i_3]))))));
                    var_21 = ((!(~-2503396811677108681)));
                }
            }
        }
    }
    #pragma endscop
}
