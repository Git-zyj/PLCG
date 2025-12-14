/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = (min((min((((16 < (-32767 - 1)))), (max(var_8, var_14)))), var_12));
                    arr_7 [i_0] [i_1] [i_2] = var_2;
                    arr_8 [i_0] [i_1 - 3] [i_2] [9] = (((((-(arr_1 [i_1 - 2])))) ? (min(var_4, var_17)) : (arr_1 [i_1 - 4])));
                    var_20 = (((17949 ? var_11 : -337710176)) >> (-1490634215 + 1490634241));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_21 = (((((arr_9 [i_4]) ? (-337710164 != 150) : var_8))) ? var_6 : (((arr_3 [i_3]) ? var_17 : 31372)));
                var_22 = (min(var_22, (((((min((max(17880, -31389)), (15886134251184608074 == 1)))) <= ((2560609822524943540 ? var_13 : (arr_2 [i_3] [i_4]))))))));
                arr_13 [2] [i_4] [2] = ((38750 | ((-(arr_12 [i_4])))));
                arr_14 [i_4] [i_3] [i_3] = ((min(var_1, var_5)));
            }
        }
    }
    var_23 = (min(var_23, (((var_10 >> (((min((var_16 - 11657636588980323811), var_15)) - 6789107488701274716)))))));

    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_24 = (min(var_24, 1363573977));
        arr_18 [i_5] = ((15886134251184608074 ? 38737 : var_1));
        var_25 = (((arr_17 [i_5] [i_5]) != (arr_16 [i_5])));
        arr_19 [i_5] = (((arr_16 [i_5]) ? var_4 : -1));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_26 = (-6363642472396804746 <= -337710176);
        var_27 = (min(var_27, (((((min(337710172, 38732)) & (-13 != 214))) ^ (((-var_8 + 2147483647) >> (((1816211558 | 38754) - 1816246109))))))));
    }
    var_28 = var_12;
    #pragma endscop
}
