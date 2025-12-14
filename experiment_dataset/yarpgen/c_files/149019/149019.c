/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((!var_4) ? var_3 : var_5)) >= (63 <= 51321)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (((arr_3 [i_0] [i_0]) != ((var_5 >> (((arr_2 [i_0] [i_1]) - 84))))));
            var_12 = (max(var_12, var_2));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_13 += 3030659259;
            arr_9 [i_0] [i_0] [i_0] = (max((arr_4 [i_0] [i_2] [i_2]), (-20304 <= 1536315161)));
            arr_10 [i_0] [i_0] [i_2] = (min(-var_10, (~36028797018963967)));
        }
        var_14 = var_8;
        var_15 = ((~(arr_7 [i_0])));
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        var_16 = ((-(((var_10 <= var_3) << ((((var_3 ? var_8 : var_7)) - 2418171151562020763))))));
        var_17 = var_7;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        var_18 = (min(var_18, (((21837 ? 1 : 42568)))));
        var_19 = (((arr_14 [i_4 - 1]) + -1));
        arr_16 [i_4] [i_4] = -1109486445;
        arr_17 [i_4] = (arr_11 [i_4]);
        arr_18 [i_4] = (((-10 != 255) >> (-1 + 29)));
    }
    var_20 = var_5;
    var_21 = (((((((max(0, var_2))) + (42569 * 491520)))) ? (!var_1) : (((var_4 / (-9223372036854775807 - 1))))));
    #pragma endscop
}
