/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_16, var_15));
    var_20 &= 498884870735665313;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = var_16;
        var_21 = (((!(arr_0 [i_0 + 1]))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (((+(((((((arr_6 [i_1]) ? 251 : var_18))) < (~852615481)))))))));
        var_23 = (arr_7 [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    {
                        var_24 = (min(var_24, 94));
                        arr_19 [i_2] [i_3] = (((((~(arr_14 [i_5 - 1] [9] [i_3] [i_5 + 1])))) ? (((arr_5 [i_4 + 2]) % (arr_9 [i_5 + 1]))) : ((((arr_5 [i_4 + 2]) ? (arr_5 [i_4 - 1]) : (arr_14 [i_5 + 1] [i_3] [i_3] [16]))))));
                    }
                }
            }
        }
        arr_20 [i_2] = 57089;
    }
    #pragma endscop
}
