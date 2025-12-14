/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 18734;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            var_18 = (18734 < 4294967295);
            var_19 = (((((arr_1 [i_0] [16]) & -1699040558)) < (((18734 ? (arr_2 [i_1]) : var_12)))));
            var_20 = (((arr_1 [i_0] [i_1 - 1]) & -1699040561));
        }
        arr_5 [i_0] = (min(((1699040558 ? (arr_2 [i_0 + 1]) : var_7)), (2669880330 != 18721)));
    }
    var_21 = ((((-1699040558 ? (min(0, 1048796677)) : -2108210133))) ? ((2108210125 ? var_12 : (~0))) : 9221856764121834887);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_22 = 2056745255;
                    arr_16 [i_4] [i_3] [i_4] = ((920271683 ? 0 : 1298907921));
                    arr_17 [i_2] [i_4] = ((var_11 ? (arr_6 [i_2] [i_3]) : -9221856764121834888));
                }
            }
        }
    }
    #pragma endscop
}
