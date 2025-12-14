/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 15030322676995810685;
    var_15 = max(var_13, var_4);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_16 = (min(var_16, 1728453027080064048));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_17 = (max(var_17, (arr_0 [i_0 - 1] [i_1])));

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    arr_13 [i_0 - 2] [i_1] [i_2] [i_3] = (((((5895629686610425702 ? -27666 : 27666))) ? -27666 : -27666));

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_18 = 4886401638223677181;
                        arr_17 [i_3] [i_4] [i_2] [i_3 + 1] [i_1] [i_3] [4] = 5157836671018831888;
                    }

                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        arr_20 [i_1] [i_1] [i_5 - 1] = -27666;
                        var_19 = arr_1 [i_3] [15];
                    }
                }
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    var_20 = ((27680 ? -27666 : -27671));
                    var_21 = 27670;

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        arr_27 [i_6 + 1] [i_1] [i_2] [17] [i_7] [17] [i_0] &= (arr_7 [i_0] [i_1] [i_2]);
                        arr_28 [3] = ((8086915406247014237 ? -27666 : (((arr_5 [i_2] [i_1] [i_2]) ? 27694 : (arr_1 [i_7] [i_0])))));
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        arr_31 [i_0] [i_0] [i_2] [i_6 + 1] [2] [i_0 - 2] = arr_10 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1];
                        var_22 |= 29380;
                    }
                }
                arr_32 [i_2] [i_1] [i_2] = 29380;
            }
        }
    }
    #pragma endscop
}
