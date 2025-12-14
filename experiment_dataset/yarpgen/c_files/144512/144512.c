/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = (((arr_2 [i_0] [i_0]) ? ((((arr_0 [i_0]) - 32759))) : ((~(arr_2 [i_0] [i_0])))));
        var_15 = max(var_11, var_8);
        arr_3 [i_0] = 18446744073709551615;
        var_16 = 21;
    }
    var_17 ^= var_3;
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            {

                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    arr_11 [i_3] [i_2] [i_1 + 3] [i_3] = ((((793239964 ? 8871290605486267336 : 235)) & (((33158 ? 17245 : 4294967295)))));
                    var_18 = (((arr_10 [i_3 + 2] [i_1 + 1]) & (arr_6 [i_1 + 2] [i_3 - 2])));
                    var_19 = ((-((-((246 ? (arr_6 [i_2] [i_3 - 2]) : var_0))))));
                    var_20 += ((((max(var_10, var_12))) ? ((((arr_5 [i_2]) ? ((min(var_12, (arr_9 [i_1 + 3] [i_2])))) : ((var_9 ? var_6 : (arr_9 [i_3 - 2] [i_1 + 3])))))) : (max((arr_4 [i_3 - 2] [i_1 + 2]), ((-1 ? 48 : 18445710758858280569))))));
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    arr_14 [i_1 + 1] [i_4] [i_4] = (max((((var_9 - var_9) > 14)), (!-1)));
                    var_21 = (min((((arr_7 [i_1 + 3]) ? var_11 : (arr_7 [i_1 + 4]))), (min((arr_9 [i_1 + 4] [i_1 + 1]), (arr_7 [i_1 + 3])))));
                }
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    var_22 = (arr_16 [i_1 + 2] [i_5 - 1] [i_5 - 1]);
                    var_23 *= (max(((215 ? -1 : (0 <= var_2))), (!var_10)));
                    arr_17 [i_1 + 2] [i_2] [i_5 + 1] [i_5 + 1] = ((((arr_13 [i_1 + 1] [i_2] [i_5 - 1]) ? (min((arr_16 [i_1 + 1] [i_2] [i_5 - 1]), 2097150)) : ((((arr_9 [i_1 + 3] [i_1 + 1]) ? (arr_12 [i_5 + 1] [i_5 + 1]) : var_10))))));
                }
                var_24 = 65513;
            }
        }
    }
    #pragma endscop
}
