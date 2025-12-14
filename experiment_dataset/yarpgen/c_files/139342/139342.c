/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((27915 ? var_5 : ((var_14 ? var_10 : 1))))) == (max(((var_0 ? 9223372036854775807 : 9223372036854775807)), (9223372036854775807 <= var_2)))));
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (((((var_4 ? var_6 : (arr_1 [i_0])))) ? ((1 ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = -28;
                    arr_6 [i_0] [i_0] [i_0] = min(((-((9223372036854775807 ? 1232728593905986191 : 0)))), 1);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_20 -= ((arr_3 [i_3] [i_3]) ? ((max((arr_3 [i_3] [i_3]), (max(108, 65535))))) : ((((~137438953216) == ((((arr_1 [i_3]) ? 65531 : (arr_5 [i_3] [i_3] [i_3] [i_3]))))))));
        var_21 = (max(var_21, 0));
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        arr_11 [i_4 - 1] [i_4] = (min((min((max(1308668642, var_13)), (arr_3 [i_4 + 1] [i_4]))), ((-(arr_2 [i_4 + 1])))));

        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            arr_16 [i_4] [i_4 + 2] [i_5] = (((max((arr_13 [i_4 + 2] [i_5] [i_5 - 1]), 1218798861)) ^ (arr_2 [i_4 + 1])));
            arr_17 [i_5] = (1 & 4);
        }
    }
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {
        arr_21 [i_6] [i_6] = ((~(min((((arr_14 [1]) ? 1308668656 : 1)), 56001))));
        var_22 = (((-1308668643 + 2147483647) << (((((arr_18 [5]) ? (((max((arr_3 [i_6] [i_6]), 1)))) : (min(1, 27)))) - 44))));
    }
    #pragma endscop
}
