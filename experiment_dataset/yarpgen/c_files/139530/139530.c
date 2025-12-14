/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139530
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
                arr_6 [i_0] [i_0] = (((((var_11 != (arr_5 [i_0] [i_1] [i_0])))) & (arr_5 [i_0] [i_0] [i_0])));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_16 = (max(var_16, ((min(((0 ? 246 : ((11914639666154332778 ? var_13 : var_2)))), 1)))));
                    arr_10 [i_1] [i_0] = 0;
                    arr_11 [i_2] [i_1] [i_0] = 961076266;
                    var_17 = (min(var_17, 11));
                    arr_12 [i_0] [i_0] [i_0] = ((!((((arr_2 [i_0]) ^ var_6)))));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    arr_17 [i_0] [i_0] [i_1] [i_3] = 1684230904;

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [4] = (97 - 0);
                        arr_21 [i_0] = (min((arr_4 [i_1] [i_4]), ((-(~var_5)))));
                    }
                }
            }
        }
    }
    var_18 = ((((1684230918 ? var_7 : 195))));
    #pragma endscop
}
