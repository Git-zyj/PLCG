/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (var_2 > var_6);

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
        var_17 -= (arr_1 [i_0]);
        var_18 = ((((((min(var_15, var_12))) ? ((((arr_2 [i_0]) ? var_9 : (arr_0 [i_0] [i_0])))) : (var_5 * var_1))) > -17012802785342595439));
        var_19 = (((max((((var_1 ? (arr_2 [i_0]) : 2147483647))), (((arr_3 [i_0]) ? (arr_0 [i_0] [i_0]) : var_13)))) > var_10));
        arr_5 [i_0] = (var_12 || var_3);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [4] = var_9;
        var_20 = ((!(arr_0 [i_1] [i_1])));
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {
                    var_21 = (!(!-2147483647));
                    arr_19 [i_2] [7] [i_4] [i_4] = (min(((1 ? 1 : (arr_14 [i_2 + 1] [i_3 - 1] [i_4 + 2]))), (((!(var_15 | var_0))))));
                    arr_20 [19] [i_3] [19] [i_3] = (min(0, 8514240418644069276));
                    var_22 = ((-(arr_10 [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
