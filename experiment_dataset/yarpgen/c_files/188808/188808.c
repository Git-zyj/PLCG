/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((65038 ? 4294967295 : 4700));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_19 *= (arr_2 [i_0] [i_1]);
                        arr_13 [i_0] [i_2] = (max(((min((arr_10 [i_0 - 1] [i_2] [i_2 - 1] [i_2 - 1]), 7242))), ((0 ? 45491 : 0))));
                        arr_14 [i_2] [i_1] [i_2 - 2] [i_3] [i_3] = (min((((arr_4 [i_3]) ? (~101) : (arr_1 [i_0] [i_2 - 2]))), 20044));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_20 = (min(var_20, ((((~var_6) && (60836 <= var_0))))));
                    var_21 -= ((~((var_12 ? (arr_11 [i_0] [i_0 + 2] [i_5] [i_4]) : (arr_11 [i_0 + 2] [i_0] [i_5] [i_4])))));
                }
            }
        }
        arr_22 [i_0] = ((((((arr_20 [i_0] [i_0 + 1] [i_0]) ? (((arr_7 [i_0] [i_0 + 2] [i_0 + 1]) / 2443505317)) : (((max(180, (arr_11 [i_0] [i_0] [4] [i_0 - 1])))))))) ? var_7 : var_0));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_22 = ((~(((((arr_8 [i_6] [i_6] [16]) ? (arr_0 [i_6]) : var_15)) << (((arr_7 [i_6] [i_6] [i_6]) - 133))))));
        arr_27 [i_6] = (((arr_11 [i_6] [14] [14] [i_6]) | ((60836 ? 1696784788 : 1))));
    }
    #pragma endscop
}
