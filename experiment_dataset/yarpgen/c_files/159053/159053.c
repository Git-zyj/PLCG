/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = ((-(arr_0 [i_0])));
        arr_3 [i_0] = (((((0 ? (arr_2 [i_0]) : -32))) | (min((max((arr_0 [i_0]), 9985867831291122572)), (var_4 / 158)))));
        var_15 = (!8460876242418429043);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_16 -= (((min(((8460876242418429043 ? 3286294512 : 8460876242418429043)), (arr_1 [i_1]))) > (((var_10 ? (arr_0 [i_0]) : var_12)))));
                        var_17 = ((((~(arr_2 [i_2]))) / var_10));
                        var_18 *= (((((arr_10 [i_3] [i_1] [i_0]) & 0)) % (min(var_8, var_13))));
                        var_19 = max((((arr_4 [i_3] [i_1] [i_0]) ? 9985867831291122572 : var_12)), (((1008672783 ? (arr_8 [i_0] [i_2] [i_1] [i_0]) : var_10))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        var_20 = (((((104 ? 4050493020147954451 : 1))) * 7964550638988799053));
                        var_21 -= ((((((min(6018465651779187739, 2391313458)) > 9985867831291122572))) * 41270));
                        arr_20 [i_6] [i_0] = (((arr_2 [i_4]) % var_11));
                        var_22 = (min(var_22, 1818445126));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_23 = ((((((arr_19 [i_7] [13] [i_7] [i_7]) + var_5))) ? (((arr_15 [i_7] [i_7] [i_7]) >> var_13)) : (arr_2 [i_7])));
        arr_24 [i_7] [i_7] = -20;
        arr_25 [i_7] = (arr_5 [i_7] [i_7]);
        var_24 = 1;
    }
    for (int i_8 = 4; i_8 < 15;i_8 += 1)
    {
        var_25 ^= ((+((min((arr_8 [i_8 - 1] [4] [i_8 - 3] [i_8 + 2]), (arr_8 [i_8 - 2] [i_8] [i_8 + 2] [i_8 - 3]))))));
        var_26 = (((arr_17 [i_8 + 1]) / ((var_3 ? (arr_26 [i_8 + 2]) : ((-104 * (arr_2 [1])))))));
        var_27 = (max(var_27, ((((~15554302945122915778) > (!-11165))))));
        var_28 = (min(((var_10 ? (arr_28 [i_8] [i_8]) : 216)), var_5));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 4; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        arr_40 [i_12] [i_12] = (arr_32 [i_10 - 2]);
                        var_29 = 0;
                        var_30 = (arr_12 [i_11] [i_10 - 1] [i_9]);
                    }
                }
            }
        }
        arr_41 [i_9] = (~(arr_22 [1] [i_9]));
        arr_42 [i_9] [i_9] = 51017;
    }
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        arr_45 [i_13] = (arr_43 [i_13] [i_13]);
        arr_46 [i_13] = ((-3536749422386714328 ? 9985867831291122572 : 1));
        var_31 += (((((arr_43 [i_13] [i_13]) | var_3)) * (arr_43 [i_13] [i_13])));
        var_32 = ((!(arr_44 [i_13] [i_13])));
    }
    var_33 |= (((24265 + var_12) - 8460876242418429043));
    var_34 = ((((max(-105103315, 103))) - (min((var_11 - var_7), (min(75, var_1))))));
    #pragma endscop
}
