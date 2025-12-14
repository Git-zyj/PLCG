/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(1474100877, 23256))) ? ((((var_8 ? var_9 : var_5)))) : (min(23256, 8871771720182982397))));
    var_17 = var_9;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 *= 6656230286929146534;
        var_19 = (max(var_19, var_13));
        arr_3 [i_0] = ((63 ? 23258 : 4503599627370495));
        arr_4 [i_0] = (((max((!63250), (((var_7 + 2147483647) << (2048 - 2048)))))) ? -46 : (var_3 / var_14));
    }

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = 63250;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_21 *= 1997879939;
                    arr_13 [i_3] [i_2] = 25295;
                    arr_14 [i_1] = (min(6656230286929146546, -64));
                }
            }
        }
        var_22 += (arr_8 [i_1] [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        var_23 = (max(var_23, var_10));
        arr_17 [i_4] = (((((2147483647 ? 25293 : 6656230286929146555))) ? 4294967295 : (((var_2 ? var_13 : -175805890)))));
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 19;i_6 += 1)
        {
            {
                var_24 = (((((175805889 ? (((arr_22 [6] [i_5] [i_6]) ? 63282 : -90)) : 16))) ? (max(3561789091, (min(137371844608, 15)))) : (((((((arr_23 [i_6] [i_6] [i_5]) - (arr_22 [i_5] [i_6 - 3] [i_5])))) ? (-5465199622207046241 && 40241) : ((65536 ? 3 : 23278)))))));
                var_25 = min(-1670480126, 41);
            }
        }
    }
    #pragma endscop
}
