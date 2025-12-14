/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    var_17 = (~var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_18 = (((3689089254 / -10562990330423175443) ? (max(((9 ? (arr_1 [i_0]) : var_14)), ((max((arr_9 [i_1]), (arr_2 [i_3])))))) : var_11));
                            var_19 -= ((min((arr_2 [i_3]), (arr_10 [i_1 + 2] [i_1 - 1] [i_1] [i_1 + 2] [1] [2]))));
                        }
                    }
                }
                var_20 = (min(var_20, 415437901071104792));
                var_21 = (min(var_21, (arr_5 [0])));
                arr_11 [i_0] [i_1] = ((542779675 ? (arr_8 [i_0] [i_0] [i_1 - 1] [i_1]) : ((~(max(var_13, var_0))))));
            }
        }
    }
    var_22 = ((max(var_8, (var_0 & var_1))));
    #pragma endscop
}
