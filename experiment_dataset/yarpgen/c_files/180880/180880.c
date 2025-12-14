/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_12 = (max(var_12, (~1)));
        var_13 += (((arr_0 [i_0]) ? (((((arr_0 [i_0]) != ((-8585773617210641550 ? 43367 : -8500113763146566226)))))) : -1984153022072502421));
        var_14 *= (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_15 = (((~7010858871528947532) ? (arr_4 [i_1]) : ((var_0 ? var_4 : -4181776405610726228))));
        var_16 = var_5;
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = (min(var_17, 1));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_18 = var_6;
            arr_10 [i_3] = ((((22166 && (arr_6 [i_2]))) ? (arr_1 [i_2]) : var_2));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_13 [i_2] [i_2] = var_5;
            var_19 = ((-89 ? 43367 : 3346705179));
            arr_14 [i_2] = ((0 & (arr_6 [i_2])));
            var_20 = ((7010858871528947521 ? 133 : 1));
            var_21 = ((1 ? 4973746880752105807 : 7010858871528947516));
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_22 = (((arr_16 [i_5] [i_5]) ? var_4 : var_4));
        var_23 = ((-14 ? (arr_16 [i_5] [i_5]) : (arr_16 [i_5] [i_5])));
        var_24 = (min(var_24, ((var_8 * (!7010858871528947512)))));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 11;i_8 += 1)
            {
                {
                    var_25 = ((~(((!var_11) ? ((max(var_10, var_4))) : (arr_22 [i_6] [i_6] [i_8 - 3])))));
                    arr_26 [i_6] [i_6] [i_7] [i_8] = (min(((55035 || (((var_0 ? 147 : 30461))))), (((~var_5) >= (arr_0 [i_6])))));
                    var_26 = (min(((-24346 ? (((max(15, (arr_23 [i_8] [i_7] [i_6]))))) : ((-17438 ? (arr_11 [i_6] [10]) : (arr_1 [i_6]))))), (((((((360193083383804182 && (arr_6 [i_6]))))) * var_7)))));
                }
            }
        }
    }
    var_27 *= (((10500 ? -5853 : -7010858871528947530)));
    #pragma endscop
}
