/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += -var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] [9] [9] = (min(20720, -20721));
            var_18 *= 120;
            var_19 += 1740312986;
            var_20 += (((((37586 & ((0 ? 3 : 65535))))) ? (((var_15 >= (min(1397215769, -4))))) : (((var_14 * 10888) ? (arr_4 [i_1] [i_1] [i_0]) : (-32632 >= var_14)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_21 = -572405362;
            var_22 = (max(var_22, (((((arr_3 [i_2] [i_0] [i_0]) % (arr_4 [i_0] [i_0] [i_0])))))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_23 = (((var_10 ? ((128 ? 5712927872702039607 : var_1)) : var_8)));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_24 = (max(var_24, (((min(3497430580, ((min(1, var_13)))))))));
                        var_25 = 91;
                        var_26 = ((((min(var_3, 26841))) ? 2102354574859651674 : ((((arr_7 [i_0] [i_5]) % 38694)))));
                    }
                }
            }
        }
        arr_17 [i_0] = ((-(((arr_3 [i_0] [i_0] [i_0]) ? 1132156913 : (var_8 / var_12)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_20 [i_6] = 2064896301;
        var_27 += (1 % var_3);
        var_28 = (arr_4 [i_6] [i_6] [i_6]);
    }
    #pragma endscop
}
