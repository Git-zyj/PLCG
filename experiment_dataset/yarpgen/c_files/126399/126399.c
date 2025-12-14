/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (max((((arr_0 [i_0] [1]) ? 229 : var_9)), ((var_5 ? var_7 : (arr_1 [i_0])))));
        arr_3 [i_0] = (max(20880, var_2));
        var_13 = ((((var_7 ? (arr_1 [i_0]) : (arr_1 [i_0]))) <= (!var_6)));
        arr_4 [i_0] &= (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_1] [i_3] [i_1] [i_4] &= var_9;
                        var_14 = (max(var_14, ((((((((3 ? 3 : 20880))) ? ((((arr_13 [i_1] [i_1] [i_3] [i_4]) ? (-2147483647 - 1) : 1))) : (max(195, var_12))))) ? var_4 : (arr_8 [i_1] [i_3 - 1] [i_1])))));
                        arr_17 [i_1] [i_2 - 2] [i_3] [i_4] [i_1] |= (!((max(var_11, 1))));
                        arr_18 [i_2] = (((((~(var_3 >= var_6)))) < (((var_2 ? var_2 : 15)))));
                        arr_19 [i_2] = ((((var_4 ? 1272402621 : 4294967295))));
                    }
                }
            }
        }
        arr_20 [i_1] = ((-(~var_5)));
        var_15 = var_6;
        var_16 ^= (((max(-2147483646, (arr_13 [i_1] [i_1] [i_1] [i_1]))) << (((max(((var_8 ? 2737480796299557376 : var_10)), (arr_8 [i_1] [i_1] [i_1]))) - 2737480796299557370))));
        arr_21 [i_1] &= (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    var_17 = (max(var_17, (((((3286347089 ? var_5 : 7284281858236700725)))))));
    #pragma endscop
}
