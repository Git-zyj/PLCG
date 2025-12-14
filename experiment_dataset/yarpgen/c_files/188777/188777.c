/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_10 = 2402134393;
                        var_11 = (-41 ? (!-27594) : (min((arr_0 [i_3] [i_3 + 2]), (arr_0 [i_0] [i_0]))));
                        var_12 = (max(var_12, var_1));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = (arr_0 [i_2] [i_3]);
                    }
                    for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_4] [i_1] [i_1] [i_0] = (arr_11 [i_4 + 2] [i_4 + 3] [i_4 + 2] [i_4 + 1]);
                        arr_17 [i_0] [i_1] [i_2] [i_4 + 3] = ((-((max((arr_15 [i_0] [i_1] [i_2] [i_4 - 1] [i_4 - 1]), (arr_15 [i_0] [i_1] [1] [i_4 + 3] [1]))))));
                        var_13 = (~20166);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_14 = (arr_10 [i_1] [i_1] [i_1]);
                        var_15 = (arr_19 [i_0] [i_0]);
                        var_16 += ((-(((arr_7 [i_0]) ? (arr_3 [i_5]) : (arr_8 [i_0] [i_1] [i_2] [i_2] [i_5])))));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        var_17 = (((~(arr_4 [i_0] [i_6]))));
                        var_18 &= (((((~(arr_7 [i_1])))) ? (!var_7) : (((arr_7 [i_1]) ? (arr_7 [i_0]) : (arr_7 [i_2])))));
                        var_19 ^= (arr_2 [i_2] [i_6]);
                        var_20 = ((((min((arr_6 [i_6]), var_5))) ? (((((arr_7 [i_2]) && (arr_14 [i_0] [i_1] [i_1] [i_6]))))) : ((157047025976775305 ? (arr_6 [i_0]) : 134217696))));
                    }
                    var_21 = -20160;
                }
                arr_22 [i_1] [i_1] [i_0] = ((~(min((arr_20 [14] [i_1] [i_1] [i_1]), (arr_20 [i_0] [i_1] [i_0] [i_0])))));
                var_22 = (((((min(20155, (~59))) + 2147483647)) << (((((min(33, (min(-5393, 0)))) + 5407)) - 14))));
            }
        }
    }
    var_23 -= var_7;
    #pragma endscop
}
