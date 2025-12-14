/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = 53762;
        var_13 = (((var_0 % -373540541) ? ((((~2147483647) >= 4778581339611930864))) : ((var_5 ? -8388608 : var_6))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = -8388608;
        var_14 = (((arr_4 [i_1]) || var_4));
        arr_7 [i_1] = 26;
        arr_8 [i_1] = (!var_7);
        var_15 = (min(var_15, 192));
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_16 = var_1;
            var_17 -= -167;
            arr_16 [i_2] [i_3] = var_1;
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_18 = ((((((max(var_4, 26))) - -16650454480186163245)) % 16650454480186163245));
            arr_20 [i_2] [i_2] = ((((((var_1 && (arr_13 [i_4]))))) < (min(127, 0))));
            arr_21 [i_2] [i_2] [i_2] = 0;
        }
        var_19 = (((((var_9 + 7051616184969784368) ? var_12 : 8787503087616)) / ((((((-121 ? 1515201092 : 0))) ? -var_7 : ((127 >> (var_11 - 1828318727))))))));
    }
    #pragma endscop
}
