/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] [i_2] = (max((!var_8), -740813327));
                    var_17 = (740813326 % -740813317);
                }
            }
        }
        var_18 = (max((((740813326 == 386706408058591813) >= var_2)), (arr_1 [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_19 = (((max(var_3, (arr_10 [i_3] [i_4]))) >> ((((224 ? 14087593903397182425 : -740813317)) - 14087593903397182384))));
                var_20 = (min(var_12, ((3756748061 ? var_5 : var_13))));
                var_21 = ((((((65311 ? 14819 : 0))) ? ((min(var_14, (arr_9 [i_4] [i_3])))) : 766212106)));
                arr_12 [i_3] = (((((arr_11 [i_3]) <= (arr_9 [i_3] [i_4]))) ? (arr_9 [i_3] [8]) : (!var_12)));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_22 += (((((-3756748070 ? (arr_21 [19] [16] [i_6 + 1] [10]) : ((min(-740813327, 54772)))))) && (((~(min(var_8, (arr_19 [i_3] [i_4] [i_4] [i_5] [i_5] [i_6] [i_7]))))))));
                                var_23 ^= (arr_15 [i_6] [6] [20]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_13;
    var_25 = min((((~var_11) - ((var_13 ? -740813326 : var_15)))), ((var_14 ? ((25348 ? 740813317 : 0)) : (!740813324))));
    #pragma endscop
}
