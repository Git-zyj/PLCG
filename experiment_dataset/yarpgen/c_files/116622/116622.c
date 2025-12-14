/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [10] [8] [10] &= (((((((var_8 && (arr_1 [10]))) || ((((-32767 - 1) * 32767)))))) - (((-32767 - 1) ? 32767 : 32767))));
                    var_20 = 32767;

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        var_21 = (((((32754 <= 32765) ? (32767 / var_5) : ((((((-32767 - 1) + 2147483647)) >> (-32759 + 32787)))))) == (arr_3 [i_0 - 1])));
                        var_22 = ((((!(arr_10 [2] [i_3 - 1] [i_2 + 2] [i_0] [9] [i_2])))));
                    }
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        arr_14 [1] [i_1] [i_2] [4] = var_16;
                        var_23 = var_14;
                        var_24 *= (arr_0 [i_0]);
                    }
                    var_25 -= ((max((arr_8 [i_0 + 3] [i_0 + 1] [i_1 - 1] [i_1 + 1]), var_10)));
                }
            }
        }
    }
    var_26 = (((var_17 | ((var_15 ? var_18 : var_4)))));
    #pragma endscop
}
