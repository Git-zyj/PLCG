/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (var_4 & 0);
        arr_3 [i_0] [i_0] = var_5;
    }
    var_10 = var_1;

    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_11 = ((!(arr_4 [i_1 - 1] [i_2])));
            arr_10 [i_1 - 1] = (max((arr_8 [i_2]), (arr_8 [i_1])));
            arr_11 [i_1] [i_1] = (max(((var_3 ? var_5 : 18446744073709551615)), ((max((arr_0 [i_1 - 1]), (arr_9 [i_1 - 1] [i_1] [i_1 - 1]))))));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_15 [i_1] [i_3] = ((((~(arr_0 [i_1 - 1]))) == ((var_1 >> (((arr_0 [i_1 - 1]) + 123))))));
            arr_16 [i_3] = 2147483647;
            arr_17 [i_1] [i_3] = ((((min((arr_0 [i_1]), var_2))) & (((max((arr_6 [i_1]), var_5)) & (((var_2 ? 224 : var_2)))))));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_12 = (((arr_7 [i_1 - 1] [i_1 - 1]) == ((var_6 ? 0 : var_3))));
                    var_13 = ((-(max(var_3, var_5))));
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    {
                        var_14 = (max(var_14, ((max(1, 112)))));
                        var_15 = (!-32751);
                    }
                }
            }
        }
        arr_35 [i_6] [i_6 - 1] = var_7;
    }
    var_16 ^= ((~(((!(((2147483647 ? var_2 : var_4))))))));
    #pragma endscop
}
