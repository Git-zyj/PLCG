/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_1, 1));
    var_12 -= (max((~1044876118), (((1 ? 1 : var_1)))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_13 -= ((~(!1)));
        arr_4 [i_0] = (((var_4 / var_6) ^ ((~(arr_1 [i_0 - 1] [i_0 - 1])))));
        arr_5 [i_0] [i_0] = (((1935811927 | 30904) <= ((((((min((-127 - 1), var_2))) || (arr_0 [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_14 = 0;
                        var_15 -= (var_5 ^ (max((((var_1 ? var_8 : var_0))), (((arr_2 [i_3]) ? 10705452053476202237 : var_10)))));
                        var_16 = (((arr_10 [i_0 - 1] [i_0] [13]) ^ (min(((164 ? (arr_10 [i_3 + 1] [i_2] [i_1 + 1]) : var_6)), (arr_9 [i_0] [i_0 + 1])))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_17 -= (arr_17 [i_4]);
        arr_20 [i_4] &= ((1 ? 55301 : 6520286184828815406));
        var_18 &= (((arr_18 [i_4] [i_4]) >= (arr_19 [i_4])));
        var_19 -= ((((((arr_18 [i_4] [i_4]) | (arr_18 [i_4] [i_4])))) ? ((1 ? (arr_18 [12] [i_4]) : (arr_18 [i_4] [i_4]))) : (arr_19 [i_4])));
    }
    #pragma endscop
}
