/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = -32760;

                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        var_14 = (max(var_14, (arr_7 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3])));
                        var_15 = (min((max((arr_6 [i_0] [i_1] [i_2]), ((7128 ? 59 : 7128)))), (((((-(arr_0 [i_2]))) > 43)))));
                    }
                }
            }
        }
    }
    var_16 = ((((((var_7 && var_11) ? var_11 : (!58407)))) ? (((var_5 && var_11) ? ((max(var_3, 5733))) : (!1073479680))) : var_6));
    var_17 = (max(var_17, (((~((32753 ? 58408 : (min(-1142794939928241641, 7116)))))))));
    var_18 = (min(var_18, (((var_3 ^ (((!(((var_5 ? 7124 : -1073479680)))))))))));
    #pragma endscop
}
