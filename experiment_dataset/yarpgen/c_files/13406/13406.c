/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(252, 0));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (18446744073709551615 * 124);
                arr_7 [i_0] = (((var_4 | (arr_6 [i_0]))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_16 = var_11;
        var_17 = (min(6718204031287365900, (max(18446744073709551615, 0))));
        var_18 += ((!(arr_9 [i_2 + 1])));
        arr_10 [3] [i_2] = (max(var_11, (arr_8 [i_2])));
    }
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        arr_15 [i_3] = (((~(var_11 / 20))));
        var_19 = (min((!var_2), (!var_6)));
        arr_16 [i_3] = (((arr_13 [8] [i_3]) * (96 / var_2)));
        arr_17 [i_3] [i_3] = min(22, (~var_2));

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_20 [i_3] = (!0);
            arr_21 [i_3] [i_3] [i_3] = 9031573078856145630;
            var_20 = (max(var_20, ((max((!var_12), ((min(var_11, var_5))))))));
            arr_22 [i_3] [i_3] [i_3 + 3] = (max(((max((!var_0), var_3))), 0));
        }
    }
    #pragma endscop
}
