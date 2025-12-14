/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((max(-24201, 1)))));
                    arr_8 [i_0] [i_0] [i_2] = (arr_4 [i_0 + 4]);
                    arr_9 [i_0] [i_0 - 2] [i_1] [2] = ((((-(!var_13))) < var_11));
                    var_19 ^= (arr_3 [13] [8] [i_0]);
                }
            }
        }
        arr_10 [i_0] [i_0] = var_0;
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (((((arr_5 [i_3 - 1] [i_3 - 2]) ? (arr_5 [i_3 + 1] [i_3 - 2]) : var_13)) & 0));
        var_20 += (((max(1, (((arr_1 [i_3] [i_3]) ? var_13 : 32767)))) != (((min(1, (arr_0 [i_3 - 1] [i_3 - 1])))))));
        arr_15 [18] = (arr_3 [i_3 - 1] [i_3 - 2] [i_3 - 2]);
    }
    var_21 = ((-(!1)));
    var_22 = (min(var_22, -14333));
    var_23 ^= (((((var_6 ? -32767 : 2713258598)) != 27378)));
    #pragma endscop
}
