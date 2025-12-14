/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_3;
    var_21 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0 - 3] [1] [i_0] = (((((var_8 >> (var_13 - 62)))) ? ((var_17 >> (var_18 - 8658147250082360279))) : ((208 ? 194 : -974083503))));
                arr_6 [i_0] [2] = ((((((min(var_10, 192))) ? (((64 ? var_3 : var_1))) : (max(var_12, var_4)))) < (((max(var_14, (var_16 > var_5)))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_22 = var_8;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_23 = (max(var_23, 2));
                        var_24 = var_17;

                        for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                        {
                            var_25 = (min(var_25, ((((~var_13) ? ((((min(var_9, var_11))) ? (!-135800755) : 4611686018423193600)) : ((max(((min(var_1, 1))), var_14))))))));
                            var_26 = (var_11 != 8782970825142000482);
                            var_27 = var_16;
                        }
                        for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, (var_15 + 511)));
                            var_29 = ((var_11 & ((32768 >> (1152921504539738112 - 1152921504539738109)))));
                            arr_23 [6] [2] [5] |= (((~var_4) * var_7));
                            var_30 = ((!(!var_16)));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 6;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_31 = (!var_16);
                            var_32 = var_11;
                        }
                        arr_34 [3] [i_8 - 1] [3] [5] [1] [4] = (((var_13 & var_18) / (((((-481790440 ? 1795256949 : var_6)) / ((var_2 << (var_4 - 3167328038))))))));
                        var_33 = (max(var_33, ((((((var_17 ? 15509936894473356416 : ((min(288230376151710720, -948681046)))))) || (!var_1))))));
                    }
                }
            }
        }
        arr_35 [i_2] = ((-5901390596737404905 & (((min(1, 1))))));
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        var_34 = (max(var_34, ((((-6427 ? var_16 : var_5)) + (~var_11)))));
        var_35 = var_5;
        var_36 = (min((max(574208952489738240, var_11)), var_7));
        arr_38 [10] [9] = (var_9 / var_8);
    }
    for (int i_13 = 1; i_13 < 13;i_13 += 1)
    {
        var_37 = (max(var_37, ((((var_12 ? var_5 : 97))))));
        arr_42 [0] |= (5 - 77);
    }
    for (int i_14 = 3; i_14 < 23;i_14 += 1)
    {
        arr_46 [11] [7] = (!var_19);
        var_38 = (((!var_11) > ((36028797018963968 ? var_18 : var_15))));
    }
    #pragma endscop
}
