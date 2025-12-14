/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (+-18446744073709551615);
                    arr_8 [i_0] [i_0] [10] = ((min(178466912, var_12)) >= (((6960609748761420303 ? 203 : (arr_4 [i_0] [i_1] [i_1 + 1])))));
                    var_17 = var_10;
                    var_18 *= ((((var_3 ? (arr_0 [i_2] [i_1 + 1]) : 2147483647)) - (max(((var_9 ? (-2147483647 - 1) : var_2)), 2147483647))));
                }
            }
        }
    }
    var_19 = (((1182647906 <= var_0) || ((((var_8 ? -10442 : 12380))))));
    #pragma endscop
}
