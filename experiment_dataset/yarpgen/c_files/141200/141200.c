/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(64292, 1));
    var_12 = (min(var_0, (((-108 + 2147483647) >> (var_1 - 3460)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = 12665850662445775838;
                var_13 ^= ((((min((!var_9), ((~(arr_0 [i_0] [i_1 + 1])))))) & (max(((-90 ? 9223372036854775807 : var_7)), 1872763414))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (((194 ? (((!(arr_4 [i_0] [i_1] [i_0])))) : (((((arr_6 [i_2] [7]) ? (arr_9 [i_2] [i_0] [i_2]) : var_8)) - ((((arr_10 [i_3] [i_1 + 3] [i_1 + 3] [i_0]) ? var_5 : -35))))))))));
                            var_15 = (max(var_15, ((((max((arr_10 [i_0] [i_1 + 3] [i_0 + 1] [i_3]), (max((arr_6 [i_0] [20]), 11669889492844366826)))) / ((max(var_10, var_1))))))));
                            var_16 = ((601175193748976848 ? ((var_1 << (((((((arr_5 [i_1]) ? var_4 : var_3)) + 65)) - 21)))) : (arr_1 [i_0])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
