/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!var_5) << var_7);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            var_14 = (~-16383);

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_15 = (arr_2 [i_0]);
                arr_7 [i_0] [i_0] [i_0] [i_0] = arr_2 [i_0];
            }
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {

                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    var_16 = ((19866 ? 16676065750499102554 : 28528));
                    var_17 += 161755752;
                }
                var_18 |= ((((((arr_8 [i_3]) ? -9819 : (arr_10 [i_0])))) ? (arr_1 [i_0]) : (arr_0 [i_1] [i_1 + 1])));
            }
            var_19 = (min(var_19, (arr_5 [22] [i_1])));
        }
        var_20 = (((arr_3 [i_0] [14] [i_0]) << (var_6 - 15465843928900063663)));
        var_21 &= 1;
    }
    var_22 += (((((var_4 ? var_9 : 1))) ? ((-(min(1, -1)))) : var_11));
    var_23 = (min(var_23, ((((!var_1) ? var_3 : 1)))));
    #pragma endscop
}
