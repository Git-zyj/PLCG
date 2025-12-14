/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((-((var_5 ? 15868991441086109492 : 4294967285)))) & (min(2577752632623442110, 18446744073709551611)));
    var_17 = (min(var_17, var_3));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = var_3;
        arr_3 [i_0] = ((((max(15868991441086109490, var_10))) ? ((((min((arr_0 [12]), var_12))) ? (((1451606617 ? (arr_0 [i_0]) : (arr_0 [i_0])))) : (max(2577752632623442121, -1)))) : (((((var_4 ? var_10 : (arr_0 [i_0])))) ? (arr_0 [i_0]) : -6802950383956700819))));
        arr_4 [i_0] [i_0] = ((((1 >> (249 - 220)))) ? ((min(var_10, var_0))) : ((var_12 ? var_5 : var_14)));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_18 = (max(var_18, (arr_5 [i_1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_1] [i_1] = (!(((4294967290 ? 15868991441086109492 : var_13))));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_14 [2] [2] [i_2] [i_1] = (~15868991441086109492);
                arr_15 [i_1] [i_2] [i_3] |= ((1453337876345156423 ? 710227622 : (2795470539 * 9024)));
                var_19 += (var_6 ? (arr_5 [i_1 + 1]) : (arr_5 [i_1 - 1]));
                var_20 &= var_14;
            }
        }
        var_21 = (min(((~(min(2577752632623442125, 710227620)))), ((710227622 ? 9996926158940679580 : (2647394817067264508 & 3054831243939295993)))));
    }
    #pragma endscop
}
