/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((~(~var_1)))) ? (((var_14 | 2615439986) ? var_3 : (((var_7 + 2147483647) << (var_4 - 4412))))) : ((1 << (((~var_2) - 3824056428))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 += ((-var_15 ? ((((!(arr_4 [10] [i_0] [10]))) ? var_13 : ((var_2 / (arr_0 [2] [2]))))) : 1));
                var_18 = (min(var_18, (((2305843009213693951 ? var_3 : (((min(var_14, var_10)) << (((min((arr_2 [8] [8]), var_6)) - 3957178266)))))))));
                var_19 *= (min(var_4, var_12));
                var_20 += ((1 ? (arr_2 [10] [10]) : ((((var_4 > (arr_2 [6] [6])))))));
            }
        }
    }
    #pragma endscop
}
