/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 ^= 127;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_0] = (((((((min(30123, (arr_1 [i_0] [i_0])))) - (arr_2 [i_1] [i_0] [i_0])))) ? (((((min(var_13, var_9))) ? var_14 : var_3))) : var_7));
            arr_5 [i_0] [i_0] = ((var_5 ? -62229 : ((10 ? 47694 : -1740403029))));
            arr_6 [i_0] [i_1] = ((((!((max(1152921504606846975, (arr_3 [i_0] [i_1])))))) || (-165334150 | -44)));
        }

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_17 = (arr_1 [i_0] [7]);
            var_18 = (((~47284) + (min((arr_7 [i_2 - 1] [i_2 + 1]), ((16005 ? -89 : 2147483626))))));

            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                var_19 = (min(var_19, (((((max((((arr_9 [14] [i_0] [i_0]) ? 1 : var_13)), (arr_9 [8] [12] [i_3])))) ? (((!(((var_13 ? var_0 : var_0)))))) : var_5)))));
                var_20 = (min(var_20, (((((var_5 | (arr_2 [i_0] [i_0] [i_0])))) && var_11))));
                var_21 = (var_2 * 18446744073709551615);
            }
            arr_11 [i_0] [0] [i_2] = ((~(max(((max(-1063112467, (arr_9 [i_2] [i_2] [i_2])))), var_10))));
        }
    }
    var_22 = ((((var_1 * (7377006232851626980 / -2))) * (((((var_7 ? 0 : var_9)))))));
    var_23 = (var_5 ? (min(var_4, (min(var_8, var_7)))) : (((max((max(-14596, 1)), var_4)))));
    #pragma endscop
}
