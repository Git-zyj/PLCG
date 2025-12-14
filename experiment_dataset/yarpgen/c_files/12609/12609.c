/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((-(((((0 ? -1086555471 : 131941395333120))) ? (!0) : (max(var_8, var_7))))));
    var_17 = var_5;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = (1 | -17);
            var_18 *= ((+(((arr_1 [i_0] [i_1]) ? var_2 : 13997337910178274187))));
            arr_5 [i_1] = (((arr_2 [i_0 + 2] [i_0 - 1] [i_0 - 1]) ? 1164218338130118880 : (var_3 + var_12)));
            var_19 += (((arr_2 [i_0 - 1] [i_0 + 2] [i_0 + 1]) ? var_2 : 65529));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [1] [i_0] [i_3] [i_4] = ((arr_14 [i_4 - 1] [i_4] [i_4 + 2] [3]) && -6275155566850808868);
                        var_20 = (arr_12 [i_0] [i_0] [i_4 + 1] [i_4]);
                        var_21 = ((((((arr_11 [i_0 - 1] [i_0 - 1] [i_4 - 1] [i_4]) ? 232 : 1233803083))) && (arr_11 [i_0 + 1] [i_0] [i_4 + 2] [i_0])));
                    }
                }
            }
            arr_16 [i_0] [i_0] [i_2] &= 35863;
            var_22 = (min(-252, (((arr_9 [i_0 + 1]) ? var_12 : (arr_9 [i_0 + 1])))));
        }
        var_23 = ((((((var_6 ? var_6 : 25836)))) ? (((var_6 ? var_11 : (arr_14 [i_0] [i_0] [i_0] [i_0])))) : (min((var_5 - var_6), (var_11 == 4048361958917150993)))));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                {
                    var_24 = ((var_8 ? ((((((~(arr_17 [i_5] [i_6])))) ? (!32764) : var_9))) : (((((~(-127 - 1)))) ^ var_11))));
                    arr_26 [i_5] [i_5] &= var_4;
                }
            }
        }
    }
    #pragma endscop
}
