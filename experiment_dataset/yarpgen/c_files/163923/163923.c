/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_7;
        var_15 = var_6;
        var_16 = (min((min(var_1, var_0)), (max(var_1, var_2))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [11] = var_0;
        var_17 = var_9;
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_18 = (min(var_7, (max(((min(var_2, var_1))), var_6))));
        var_19 = (max(var_19, ((max((max(var_5, var_7)), ((min(var_9, var_10))))))));
        var_20 = var_13;
        var_21 = var_1;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {
                    arr_15 [8] [i_2] = var_5;
                    arr_16 [18] &= (max(0, var_4));
                    var_22 = (max((max(var_3, var_6)), (min(var_13, var_7))));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_23 += (max(var_3, var_12));
                        var_24 = (max(((min(3507018619, var_5))), (max(var_2, var_2))));
                        arr_19 [i_5] [14] [i_4 + 1] [2] = (max((min(2856351369138957816, -4088999513196333523)), ((max(9223372036854775803, 4088999513196333521)))));
                        arr_20 [i_5] [i_3] [i_5] [i_5] = var_2;
                    }
                }
            }
        }
    }
    var_25 = var_10;
    #pragma endscop
}
