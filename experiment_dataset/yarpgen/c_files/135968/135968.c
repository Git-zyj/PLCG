/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (var_9 << ((((((var_6 ? (min(-1008823723429163407, 2147483647)) : 1008823723429163407)) + 1008823723429163430)) - 20)));
                var_10 = ((((max((arr_2 [i_1]), (~var_1)))) ? ((((!(((140 ? 1008823723429163418 : -1008823723429163407))))))) : ((-(((arr_0 [i_1]) ? var_4 : var_1))))));
                var_11 = (((1008823723429163407 < var_3) ? ((var_7 ? (((min(1, (arr_5 [i_0] [12] [i_0]))))) : 1008823723429163407)) : (((((-1008823723429163420 ? (arr_1 [i_0] [i_1]) : var_9))) ? (var_5 + 1008823723429163443) : var_8))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_12 = ((((max((((arr_7 [i_2] [i_2]) - var_4)), (1008823723429163407 / var_8)))) ? -1008823723429163418 : 1008823723429163406));
        var_13 = ((-((-var_7 >> (!1008823723429163418)))));
        var_14 ^= var_0;
    }
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        arr_12 [i_3] = (min((((arr_9 [i_3 + 2]) ? (arr_9 [i_3 + 1]) : var_8)), (arr_8 [i_3 + 3] [i_3 + 4])));
        var_15 = (((arr_9 [i_3]) ? ((1008823723429163409 ? 1 : -1008823723429163407)) : (arr_7 [i_3 + 3] [i_3 + 3])));
    }
    var_16 &= (!var_4);
    #pragma endscop
}
