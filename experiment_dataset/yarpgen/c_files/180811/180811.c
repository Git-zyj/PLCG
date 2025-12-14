/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_9;
    var_19 = 4294967295;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (0 && 127);
        var_21 = (max(var_21, (((~(((var_9 ^ 0) | (1 != 4294967287))))))));
        var_22 = ((~((~(arr_1 [i_0])))));
        var_23 -= ((!(((arr_0 [i_0]) != (arr_0 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_24 = (max(var_24, (((((arr_2 [i_1 - 1] [i_1 - 1]) >> (8188 - 8165)))))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_25 = var_1;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_14 [i_1] [i_1] [i_3] [i_4] [i_4] = ((~(-127 - 1)));
                            arr_15 [i_1] [8] [i_3] [i_4] [11] [i_3] [i_1] = (var_14 | 36028797018963904);
                        }
                    }
                }
            }
            arr_16 [i_2] = (min((min(8, (-32767 - 1))), ((max((arr_10 [i_1 - 1]), (arr_10 [i_1 - 1]))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            var_26 = (((arr_4 [i_6]) ? (arr_4 [i_1]) : 1572864));
            var_27 += -1040187392;
            var_28 = (20 != var_14);
        }
    }
    #pragma endscop
}
