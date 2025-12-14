/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 67;

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_13 = ((1 ? (((arr_6 [i_2] [i_2] [i_2] [i_2]) ? 4294967295 : 1)) : var_12));
                    var_14 = (((~(arr_7 [i_0 - 3] [i_0 - 3] [i_0 + 2]))));
                    var_15 *= ((((~661890062) && var_4)));
                    var_16 = (((((arr_2 [i_0] [i_1] [1]) & (arr_2 [i_0] [i_0] [i_2])))));
                }
            }
        }
    }
    var_17 &= var_3;
    #pragma endscop
}
