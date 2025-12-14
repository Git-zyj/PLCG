/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0 + 1] = (arr_1 [i_0 - 3]);
        var_21 = ((~((var_16 ? (arr_2 [i_0 - 3]) : (arr_1 [i_0 - 4])))));
        var_22 = (((arr_2 [i_0 - 3]) ? var_10 : (arr_2 [i_0 + 1])));
        var_23 = ((1 | (arr_3 [i_0 + 1])));
    }
    for (int i_1 = 4; i_1 < 24;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_24 = ((1 / ((1 ? (102 * -103) : 1))));

                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        var_25 = ((-48 ? var_8 : (((min((-81 == 4294967295), (arr_11 [i_2 - 1] [i_3] [i_4 + 1])))))));
                        arr_16 [i_4 + 1] [i_4] [i_2 - 1] [i_4] [i_1 - 2] = var_15;
                        var_26 *= (!-89);
                        var_27 += (arr_11 [i_1 - 1] [i_2 + 1] [i_4 + 3]);
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_28 = 102;
                        var_29 = 1;
                        var_30 = (((~1220289272890757506) | -var_12));
                    }
                }
            }
        }
        arr_19 [i_1 - 3] = ((((max(2434105576, (((1 ? (-127 - 1) : 102)))))) ? (max((((-18367 + 2147483647) << (641710980 - 641710980))), 70)) : (arr_11 [i_1 + 1] [i_1 - 2] [i_1 - 4])));
        var_31 = (arr_15 [i_1 - 4] [i_1 - 3] [i_1 - 3] [i_1 + 1]);
        var_32 = (arr_17 [i_1 + 1] [i_1 - 2] [i_1 - 3] [i_1 - 2] [i_1 - 2]);
    }
    var_33 = (((((var_8 * var_2) != ((max(var_5, var_4))))) ? (((max(147, var_18)))) : 50067));
    var_34 &= (-127 & var_16);
    #pragma endscop
}
