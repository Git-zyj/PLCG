/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min((max((!var_0), ((var_6 ? var_0 : var_10)))), ((3 >> (205 - 192))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_13 = var_2;

            for (int i_2 = 3; i_2 < 8;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_14 = var_11;

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_15 = var_0;
                        var_16 = (var_6 * 40);
                        var_17 -= (!-28);
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_18 = ((~(arr_6 [i_1 - 2])));
                        var_19 = (((arr_1 [i_1 - 1] [i_2 + 1]) ? -40 : (arr_10 [3] [3] [i_3] [3] [8] [4])));
                        var_20 = 4956288248472323018;
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_21 = var_10;
                        var_22 = 84;
                        var_23 = (max(var_23, ((-8458378770292458225 ? -37 : -40))));
                    }
                    var_24 += ((((arr_9 [3] [2] [0] [2]) ? 1 : (arr_8 [i_3] [i_3] [i_3]))));
                    var_25 += (arr_9 [i_0] [i_0] [i_1] [i_0]);
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                {
                    var_26 = 10751;
                    arr_16 [4] [i_1] [i_7] [0] = (-12321 || -28);
                    var_27 += 87;
                }
                var_28 = var_5;
            }
            for (int i_8 = 3; i_8 < 8;i_8 += 1) /* same iter space */
            {
                var_29 = (((arr_19 [i_0] [i_8 + 1]) * (arr_8 [i_8 - 3] [i_8 - 3] [i_1 - 2])));
                var_30 = (min(var_30, (((((((arr_9 [i_0] [i_0] [i_0] [8]) | (arr_0 [i_8])))) || ((((arr_11 [4]) * (arr_8 [4] [2] [2])))))))));
                var_31 = ((!(arr_17 [i_0] [i_1 - 2] [i_8 - 3])));
            }
            var_32 = (((((43 ? var_10 : 28))) ? -32 : (arr_18 [i_0] [i_0] [i_1 - 2] [i_1])));
        }
        var_33 += (var_2 != var_6);
    }
    #pragma endscop
}
