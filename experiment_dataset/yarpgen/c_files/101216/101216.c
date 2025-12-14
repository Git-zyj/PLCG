/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (min(7161, 138));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_20 = ((5790605574944949100 ? (max((arr_3 [i_0]), ((118 ? var_14 : (arr_0 [i_1]))))) : 2147483647));
                        var_21 = (arr_2 [i_0] [i_0] [i_0]);
                        arr_10 [i_0] [i_0] [i_0] [i_2] [i_2] = (arr_8 [16] [i_0] [1] [i_0] [1]);
                        var_22 = (min(var_22, (arr_4 [i_0])));
                    }
                }
            }
        }
    }
    var_23 = (var_12 % -var_1);
    #pragma endscop
}
