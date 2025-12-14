/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 84;

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_18 = ((-8564951815081028486 ? (~-1251759058374925649) : -65529));
                        var_19 = (arr_5 [i_0] [i_2]);
                        arr_17 [i_0] [i_1] [i_1] [i_3] [i_1] [i_0] = (((255 ? (arr_7 [i_3 + 1] [i_3]) : (arr_6 [i_0]))));
                    }
                }
            }
            var_20 = ((~(max((arr_14 [i_0] [i_1 + 1] [i_1 + 1]), (arr_7 [i_0] [i_1 + 1])))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_20 [i_0] = -1;
            var_21 += ((+((var_7 ? (arr_8 [i_0] [i_4] [i_4]) : var_9))));
            var_22 -= (-1 >= -390149210);
            arr_21 [i_0] [i_4] = (arr_10 [i_0] [i_4] [i_0]);
        }
    }
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        var_23 -= (~59351);
        arr_24 [i_5] = arr_7 [i_5] [i_5];
        arr_25 [i_5] [i_5] = ((((-(arr_12 [i_5 - 3] [10] [i_5 - 1])))) ? ((((arr_12 [i_5 - 1] [4] [4]) ? var_8 : (arr_12 [i_5 - 1] [6] [i_5])))) : (min(((max(251, var_4))), (min(18446744073709551615, 0)))));
    }
    var_24 = (max(var_24, var_17));
    var_25 = (max(var_10, (-9223372036854775807 - 1)));
    #pragma endscop
}
