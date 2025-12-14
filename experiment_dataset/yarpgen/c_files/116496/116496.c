/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((var_6 << (var_16 - 14740653142234492685)));
    var_19 = (min(var_19, (((!((((-21166 ? 1231414164 : var_16)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((arr_2 [2] [i_1] [i_0]) ? 5641986038758444761 : (min(var_10, ((min((arr_1 [i_1]), var_15))))))))));
                var_21 = ((((min((arr_0 [i_0] [i_1]), (8253067047690337430 > 2957044413256742102)))) && (arr_2 [i_1] [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((((arr_6 [i_2] [i_3] [i_3] [i_0]) ? (arr_0 [i_1] [i_2 - 2]) : (((arr_0 [i_3] [i_1]) | ((12804758034951106854 ? var_14 : 666319651)))))))));
                            var_23 *= (min((((-21155 ? (arr_2 [3] [i_1] [3]) : var_13))), (min(((53 * (arr_6 [i_1] [i_3] [i_2] [i_3]))), ((var_4 ? 21165 : var_1))))));
                            arr_9 [i_1] [i_1] [i_1] = (((((!(arr_7 [i_1] [21] [i_2 + 1] [i_2 + 1])))) - (((arr_7 [i_1] [i_2] [i_2 + 1] [i_2 + 1]) ? 95 : (arr_7 [i_1] [i_1] [i_2 + 1] [i_2 + 1])))));
                            arr_10 [i_0] [i_1] [i_0] [7] [i_0] [i_0] = (max((((arr_2 [i_3] [i_2 + 1] [i_2 + 1]) ^ (arr_8 [i_3] [i_3] [i_3] [i_2 + 1]))), ((-(arr_8 [i_2 + 1] [5] [i_3] [i_2 + 1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
