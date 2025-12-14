/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (max(((min(var_1, (min(var_6, var_1))))), (max((min(var_16, var_10)), (((7756032975423951539 ? 58381 : 7157)))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [5] [i_0] &= 7160;
        var_19 = (min(var_19, ((min((max(15325177793277510373, (arr_0 [i_0 - 1]))), (((-var_16 ? (((min((arr_1 [i_0] [i_0]), (arr_1 [14] [i_0]))))) : var_10))))))));
        var_20 ^= (((max((var_2 ^ var_14), 58378)) <= (((((((arr_1 [i_0] [5]) ? var_6 : var_16))) ? (58379 * 2400105972) : (arr_0 [i_0]))))));
        var_21 += (min(((-(arr_0 [i_0 - 1]))), (arr_1 [1] [i_0 - 1])));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_22 = (max(var_22, ((((min(((min((arr_0 [i_1]), var_3))), ((288230376151711743 | (arr_3 [i_1]))))) & (arr_0 [i_1]))))));
        var_23 += (((((min((arr_4 [i_1 + 2]), (arr_3 [i_1]))))) ? var_1 : ((((max(var_5, var_16))) ? 7157 : var_6))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        var_24 ^= (((arr_6 [i_2 - 1]) ? (arr_6 [i_2 + 1]) : (arr_6 [i_2 - 1])));
        arr_9 [18] [18] &= ((((((var_4 ? -11 : (arr_7 [1]))) + 2147483647)) << (16896446361193967683 - 16896446361193967683)));
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        var_25 = (min(var_25, ((min(((max(7162, (arr_12 [i_3 - 1] [i_3 - 1])))), ((-(arr_12 [i_3 - 1] [i_3 - 2]))))))));
        var_26 += (min(((max((arr_11 [i_3] [i_3 - 1]), (arr_11 [i_3] [i_3 - 1])))), (((-9223372036854775807 - 1) ? ((~(arr_10 [i_3] [1]))) : 769011938957295999))));
    }
    var_27 &= var_12;

    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_28 = (min(var_28, (((+((var_12 ? (var_2 + var_8) : 58402)))))));
        var_29 -= max((((11 ? 235 : (arr_14 [i_4])))), (max((min((arr_7 [12]), var_4)), 19639)));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    var_30 += (arr_5 [i_4] [i_6]);
                    var_31 += 16896446361193967681;
                    var_32 += (min(65527, 38));
                    var_33 = (min(var_33, (arr_21 [i_6])));
                }
            }
        }
    }
    #pragma endscop
}
