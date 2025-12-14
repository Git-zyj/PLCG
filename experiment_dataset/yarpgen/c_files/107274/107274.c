/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((~5) & -var_5)), var_4));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = (arr_1 [i_0] [i_0]);

        for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_12 = 251;
            arr_4 [i_0] [i_0] = (!(((var_3 ? ((max(64, 251))) : var_3))));
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] [5] = (arr_3 [i_0] [i_2] [i_0]);
            var_13 = ((!((max((min((arr_6 [i_2 + 1] [i_0] [i_0]), var_2)), var_8)))));
            arr_9 [i_0] [i_0] [i_0] = var_5;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_0] = ((((var_3 ? 4076162857 : 0)) >= 1));
            var_14 = (min(var_14, (arr_3 [i_0] [i_3] [i_3])));
            arr_14 [i_0] [i_0] [i_0] = (((251 % 11926) > (arr_12 [i_3] [i_3] [i_3])));
        }

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            arr_17 [8] [i_4] &= (max((((~(max(-1346497737, -2243131148957032657))))), ((+(((arr_1 [i_4] [i_0]) - 1035662069))))));
            var_15 = (arr_6 [i_0] [1] [1]);
        }
        var_16 ^= ((var_8 ? 2656608288 : (max(-20, (max(752128471, (arr_0 [i_0])))))));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_28 [i_7] [10] [i_5 - 1] = arr_21 [i_5] [i_5];
                    var_17 = 11914;
                }
            }
        }
        var_18 = 251;
        var_19 = (max(var_19, (arr_26 [i_5 - 1] [i_5 - 1] [i_5 - 1] [11])));
    }
    var_20 = 18446744073709551615;
    var_21 = ((max(((var_8 ? 251 : 90)), var_2)));
    var_22 = var_2;
    #pragma endscop
}
