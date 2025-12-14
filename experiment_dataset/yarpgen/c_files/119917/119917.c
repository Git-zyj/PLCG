/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((~((var_8 | (arr_4 [i_0] [i_0] [14])))))) ? -1948192338 : (min((arr_3 [i_0] [i_0] [i_0]), (arr_2 [i_0])))));
                arr_7 [i_0] [i_0] = ((-1 | ((1507437682 ? 2787529614 : var_0))));
                var_10 = (max((~-19), (min(var_5, 1507437660))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_11 = (max(var_11, (((((-4005 ? (((1649210571843187025 ? 1 : 4294967264))) : (((arr_1 [i_2] [i_2]) ? (arr_11 [i_0] [i_1] [i_2]) : (arr_5 [i_1] [i_1] [i_1]))))) + (((0 ? var_5 : ((((arr_4 [i_0] [i_0] [i_2]) & 1507437682)))))))))));
                            var_12 = ((((-0 - ((39 ? 1 : (arr_2 [i_0]))))) < (((((((arr_0 [i_0]) | var_9)) <= (arr_0 [i_0])))))));
                            var_13 = (246 + 1507437660);
                        }
                    }
                }
            }
        }
    }
    var_14 = -8191;
    #pragma endscop
}
