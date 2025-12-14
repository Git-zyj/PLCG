/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_12 > var_5) ^ var_15));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0 + 1] = (78 << 1);
                    arr_10 [i_0] [i_1] [i_0] = 1216360749;
                    var_19 = (((+((((arr_8 [i_0]) > (arr_0 [i_2 - 1] [i_1])))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_3] [i_1] [i_0] = (((((~(arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1])))) ? (arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 1]) : ((((arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 1]) <= (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                        arr_15 [i_0] [i_0] [i_3] = (arr_7 [i_0] [i_1] [i_2 + 1]);
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_20 = var_11;
                        arr_20 [8] [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_4] = 14588;
                    }
                    arr_21 [i_0] [i_2] = (max(var_3, (1216360749 - var_5)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            {
                arr_28 [i_5] [8] |= (max((arr_11 [8]), (arr_7 [i_6 - 2] [i_6 - 3] [i_6])));
                arr_29 [i_6] = (var_5 << var_8);
                var_21 += max(var_6, ((2184788004 ? -10485 : 1216360749)));
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
