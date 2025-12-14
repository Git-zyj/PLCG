/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 = 49172;
        var_19 -= (~34880);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0 + 1] [i_0] [i_0] = 28440;
            arr_6 [i_0] [i_0] [i_1] = ((!(102 - 366832463)));

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_20 = (min(var_20, ((-(!28440)))));
                arr_10 [i_0] [i_1] [i_0] = (((((max(-114, 13928))) ? (-1 / 196) : (!-23307))));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_13 [i_0] [2] = (13524484921067693262 & 7497186444838175030);
                arr_14 [7] [i_1] [i_0] [i_1] = ((16279377828740842697 ? 1965088634 : -1141288311));
                var_21 = 17269214498619441014;
            }
            arr_15 [i_0] = -18254;
            arr_16 [i_0] [i_0] = ((-(min(16279377828740842672, 16279377828740842650))));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_21 [i_0] [i_4] = (!695859464);
            var_22 = -100;
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_23 = -47;
            arr_25 [i_0] [11] [i_0] = (~1127201133);
        }
        var_24 ^= (((~(64 > 1011770607))));
    }

    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            var_25 = (min(var_25, 0));
            var_26 += 3592167819089875988;
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_36 [i_6] [i_8] [i_8] = (!-1);
            arr_37 [5] [i_8] = (min((632 < 14796145366640853229), (-54 + 0)));
        }
        arr_38 [i_6] |= -1424848539;
        var_27 = 26;
        arr_39 [4] = 18302628885633695744;
    }
    var_28 = (min(12774, 39048));
    #pragma endscop
}
