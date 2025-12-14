/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -73;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_1] [16] = max(((max(1914864915326087606, 73))), var_11);
                    arr_9 [i_0] [5] [i_0] = 50;
                    var_14 -= (((!var_12) ? (!var_0) : (min(2047, var_12))));
                    var_15 = (~-1914864915326087590);
                    arr_10 [i_0] [1] [1] = ((((!(!10696612665837254236)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            {
                var_16 = -1;
                var_17 = (min((max(9, (~var_11))), -10696612665837254219));
            }
        }
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_18 ^= 101;
        arr_17 [i_5] = (~9);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    arr_25 [3] [21] [13] [6] = ((~(~var_5)));

                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        var_19 -= 0;
                        arr_29 [i_5] [i_6] [i_8] = (((-8090 + ((7 << (7442 - 7404))))));

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            arr_33 [i_5] [1] [6] [i_8] [1] = (!(!4039004123143932187));
                            arr_34 [i_5] = (min((~18446744073709551614), (~7750131407872297392)));
                            var_20 = ((max(var_8, (~5439438682611669998))));
                        }
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_37 [2] [i_6] = (min((!2065467423147461595), ((562949953421184 ? 32767 : -5009963768116408897))));
                        var_21 = (~101);
                    }
                    var_22 = (min(((!(11 || -8962761045306116950))), 18607));
                }
            }
        }
    }
    for (int i_11 = 4; i_11 < 16;i_11 += 1)
    {
        arr_40 [i_11] = ((((min(var_9, -32743))) ? 10969 : ((((min(4527518150686674823, var_8))) ? var_6 : var_10))));
        var_23 = 650712690371526154;
        var_24 = (min((min(73, 18446744073709551609)), var_6));
    }
    #pragma endscop
}
