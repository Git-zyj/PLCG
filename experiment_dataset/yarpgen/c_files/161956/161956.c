/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [5] [i_0] = (arr_0 [i_0]);
                var_15 = var_10;
                arr_6 [i_0] [i_0] [i_0] = 52;
                var_16 = (min(var_16, (((var_5 && 15) | ((min((arr_0 [2]), (16308 != 26))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_12 [i_2] = ((1 ? 191573295850407744 : 50201));
            arr_13 [i_2] [i_2] [i_2] = var_8;
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_16 [i_2] [i_2] [i_2] = ((((((min((arr_10 [i_2] [i_2] [i_2]), 20))) ? ((min((arr_8 [22] [i_2]), var_9))) : (arr_10 [i_2] [i_2] [i_2]))) / ((((arr_7 [i_4 - 1] [i_4 - 1]) ^ (((max((arr_9 [i_2] [i_4]), 5835)))))))));
            arr_17 [i_2] = (arr_7 [i_4] [i_2]);
            var_17 ^= var_8;
            var_18 &= (18972 >= 15347);
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_20 [20] [i_2] [i_2] = arr_19 [i_2] [i_2];
            arr_21 [i_2] = -1554779892;
        }
        arr_22 [i_2] = var_11;
        var_19 = (((~-6) <= ((-((min((arr_14 [i_2] [i_2 + 1]), var_0)))))));
        var_20 -= (min((((var_9 & var_6) ? (~var_10) : 114)), -6));
        arr_23 [i_2] = (arr_18 [i_2 + 1] [i_2 + 1]);
    }
    var_21 = (min(var_21, (((((!((min(-1554779892, var_1))))))))));
    #pragma endscop
}
