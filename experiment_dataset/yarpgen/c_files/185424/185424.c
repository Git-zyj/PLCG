/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            arr_8 [i_1] [4] |= 2929513230;
            var_17 = (((arr_7 [i_0] [i_1]) ? (arr_7 [i_0] [i_1]) : (arr_7 [i_0] [i_1])));
            var_18 = (((((1365454065 ? 1113520876 : 1))) ? (((arr_5 [i_0] [i_1] [i_0]) ? var_1 : var_10)) : (((arr_3 [23]) ? var_1 : var_9))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_19 ^= (!0);
            arr_11 [i_0] [i_2] = var_10;
            var_20 = var_4;
            var_21 = (arr_6 [i_0] [i_2]);
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_22 [i_0] [i_3] [i_3] [i_5] = 4294967282;
                        var_22 = var_6;
                        var_23 = ((((!(arr_14 [i_0] [i_3]))) ? -1861207791 : ((var_3 ? var_3 : 9905))));
                        arr_23 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = (((arr_20 [i_3]) ? (arr_9 [i_4 - 1] [i_4 - 1] [i_5 - 4]) : (((1113520876 ? -1505111285 : (arr_5 [i_0] [i_3] [i_0]))))));
                        arr_24 [i_3] [i_3] [16] [i_4] [i_4] = 2929513230;
                    }
                }
            }
        }
    }
    var_24 = (!(((((min(var_15, var_14))) ? ((var_13 ? var_3 : var_12)) : (((0 ? -25761 : 1505111284)))))));
    var_25 = var_5;
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 12;i_8 += 1)
            {
                {
                    var_26 = (min((arr_33 [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_7]), ((((var_0 <= var_7) ? ((-1505111285 ? var_12 : (arr_10 [i_6] [i_7] [i_8 + 2]))) : ((255 ? var_12 : var_11)))))));
                    var_27 = (arr_31 [i_8 + 2]);
                    arr_35 [i_6] &= (arr_28 [i_6]);
                }
            }
        }
    }
    #pragma endscop
}
