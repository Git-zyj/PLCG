/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] = 56418;
                    arr_7 [i_0] [i_1 - 2] [i_2 - 2] = (max((((arr_4 [i_1 - 2]) / var_5)), (max((arr_4 [i_1 - 2]), 3367232730289952349))));
                    var_10 |= (max(((((4 ? (arr_1 [i_0]) : var_9)) >= (((~(arr_3 [i_2 - 1] [i_0])))))), (((((1517029559 ? -30575 : var_3))) && (~63488)))));
                    arr_8 [i_0] [i_1] [i_0] = ((((((((63488 - (arr_2 [i_2] [i_0] [i_0])))) ? (8037 - 1) : ((min((arr_4 [i_0]), 1)))))) ? ((max(1, (arr_0 [i_1] [i_1])))) : ((((min(-121, 52467))) % ((8037 ? (arr_5 [i_0] [i_1] [i_2]) : 63486))))));
                }
            }
        }
    }
    var_11 *= -var_4;

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_12 = 1;
        arr_11 [i_3] = (2704333067 + 1);
        var_13 = (max(var_7, (((60249 ? (arr_5 [i_3] [i_3] [i_3]) : (arr_2 [5] [i_3] [i_3]))))));
        var_14 = ((+(((arr_3 [i_3] [i_3]) ? 81 : (arr_3 [i_3] [i_3])))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = ((((arr_12 [i_4]) && ((max(18446744073709551612, (arr_13 [i_4])))))) ? (((((var_7 ? var_7 : (arr_1 [11])))) * (min(5934410340798980770, 9879985340541904601)))) : var_4);
        var_15 = ((~(1 == 127)));
    }
    var_16 = -21051;
    var_17 = (((((((max(65, -50))) ? 15470748509267125415 : ((34016 ? var_2 : var_1))))) ? (((((-724840053 ? 1 : 7143504))) ? 724840048 : ((var_8 ? 18446744073709551612 : -28120)))) : var_5));
    #pragma endscop
}
