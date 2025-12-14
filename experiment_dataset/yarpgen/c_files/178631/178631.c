/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_19 = (max(var_19, (arr_1 [i_0] [i_0 + 1])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_0] = (((arr_2 [i_0 + 1] [i_0 - 1]) ? (var_13 > var_6) : (((arr_2 [i_0 + 1] [i_0 + 1]) >> (32762 - 32749)))));
                        var_20 = (max(var_20, (((!(arr_7 [i_0 + 1] [i_0] [i_0] [i_0]))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_17 [i_4 + 3] [i_4] [i_4] = (min((!4294967295), (arr_15 [i_0] [i_4] [i_5] [i_0])));
                        var_21 = var_2;
                    }
                }
            }
        }
    }
    var_22 = -var_12;
    #pragma endscop
}
