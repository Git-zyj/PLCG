/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-32767 - 1);

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_20 = (((max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 2]))) / (((arr_1 [i_0 - 1]) & (arr_1 [i_0 + 2])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = (arr_0 [i_0] [2]);
                    var_21 = (max((arr_9 [i_0] [i_1] [i_0 - 1] [i_1]), (max(18446744073709551615, (18446744073709551615 | 1)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 7;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    {
                        arr_20 [i_0] [i_3] [i_4] = 47;
                        arr_21 [0] [0] [0] [0] [i_3] = ((-48 == (((-127 - 1) | 353095931))));
                        var_22 += (arr_14 [i_0] [i_3] [i_4]);
                    }
                }
            }
        }
        var_23 = 1;
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_24 [i_6] = min((arr_22 [i_6]), (((arr_23 [i_6] [i_6]) / 47)));
        var_24 = (min(var_24, 0));
        var_25 -= (((((-984863809802103459 != (((-(arr_22 [i_6]))))))) * (arr_22 [i_6])));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_26 += (max(11214, (max(54322, (arr_26 [i_7])))));
        arr_27 [i_7] [i_7] = -22437;
    }
    var_27 *= (~var_16);
    var_28 = (min(var_28, var_16));
    #pragma endscop
}
