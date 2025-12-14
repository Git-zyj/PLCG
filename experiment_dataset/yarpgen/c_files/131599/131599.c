/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = 65392;
        var_18 = arr_0 [i_0];

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_1] = -131;
            var_19 = ((65380 ? ((-1 ? 1632013736444610428 : 1)) : (((((max((-9223372036854775807 - 1), 4294967277))) ? 1 : (-9223372036854775807 - 1))))));
        }
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_2] [i_2] [i_0] = ((!(arr_7 [i_0] [i_2 - 3])));
            var_20 = (max(var_20, 1632013736444610424));
        }
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            var_21 = (max(var_21, (arr_0 [i_0])));
            var_22 = ((78 | (((var_8 || (~0))))));
            arr_13 [i_3] [i_3] [i_3] = (max(1, (max(1632013736444610423, 920615482))));
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_23 = (max(((((arr_2 [2]) - (arr_0 [i_4])))), (((255 * var_3) * ((var_13 / (arr_6 [0] [18] [i_4])))))));

        /* vectorizable */
        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            var_24 = ((!(((var_3 ? var_0 : 19124)))));
            arr_18 [5] [5] [i_4] = (arr_10 [i_5 + 2] [i_5]);
            arr_19 [i_5] |= ((3348612062237628225 / (arr_6 [i_5 + 2] [i_5 + 2] [i_5 - 2])));
        }
        var_25 = (min(((max((arr_9 [i_4] [i_4] [i_4]), ((var_9 ? 1 : var_3))))), ((max(1626192458, 237)))));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_26 = ((arr_21 [i_4]) ? (max(((max(241, 234))), ((4294967033 << (var_5 + 4696624077879552640))))) : (((-3348612062237628236 ? 140 : 138))));
                    var_27 = (max(var_27, (((-(arr_14 [i_4] [i_6 + 2]))))));
                    var_28 = 1;
                }
            }
        }
        var_29 = ((((var_10 ? (arr_16 [2]) : (arr_3 [i_4]))) >> (var_2 - 106)));
    }
    var_30 = ((-11 ? var_2 : (((7566 != 4294967032) ? 4294967025 : -650313530))));
    var_31 = (max((min(var_3, ((5849179302219964354 ? -1876298093 : 11097262230403807504)))), (-1440477844 << 1)));
    #pragma endscop
}
