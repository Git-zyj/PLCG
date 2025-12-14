/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_18 = (max(var_18, (arr_0 [0])));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        var_19 -= ((!((((var_7 ? (arr_0 [i_3]) : 1))))));
                        var_20 += (arr_8 [i_2 - 1] [i_1]);
                    }
                }
            }
            var_21 = (min(var_21, (arr_12 [2] [i_1] [2] [2] [i_0] [i_1])));
            var_22 = (arr_2 [i_0 + 2] [i_1 - 1]);
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_23 = (min(var_23, ((((arr_9 [i_0] [i_4]) ? ((9223372036854775788 % (arr_9 [i_4] [i_0]))) : (arr_1 [i_0] [i_0 - 1]))))));
            arr_15 [i_0] [0] [i_4] = (((1614715746582522997 ? 61 : 13197)));
            arr_16 [i_4] = -65;
        }
    }
    for (int i_5 = 3; i_5 < 20;i_5 += 1)
    {
        var_24 = ((~((4294967295 ? 27 : 52338))));
        var_25 = (max(58698, ((1 ? 2878957890826194582 : 9223372036854775789))));
        var_26 += ((!((max((arr_18 [i_5 - 1] [6]), ((max(20723, (arr_17 [14])))))))));
    }
    var_27 = (min((!var_4), ((27 ? -7671305305315378623 : -40))));
    var_28 = var_10;
    #pragma endscop
}
