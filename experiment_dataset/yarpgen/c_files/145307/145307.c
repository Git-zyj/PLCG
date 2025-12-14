/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max((((var_9 ? (max(21608, -7)) : -65535))), (max((max(var_4, var_7)), ((min(-21606, -21605))))));
    var_13 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [6] [i_2] [i_0] = 21625;

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_14 = (((((-((min(var_7, 65532)))))) ? var_8 : (arr_7 [i_1 + 1] [i_1] [i_1 + 3] [i_1])));
                        arr_12 [i_2] [i_2] [i_0] [i_2] = ((!((min(18014398509481983, -13759)))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_2] = ((((((0 / var_11) ? ((127 ? 94 : 17290349535356212906)) : 102))) ? var_4 : (((((((arr_6 [i_0] [i_0] [2]) ? var_6 : 73))) ? -21608 : ((-7954920525305805769 ? 142 : 481)))))));
                        var_15 = (max(var_15, -var_9));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_2] [i_1] = (((((var_3 * (arr_6 [i_1] [i_1 + 3] [i_1 - 1])))) ? (arr_19 [i_1 + 2] [i_1 - 3] [i_1 - 3] [i_1 + 4] [i_1] [i_1 + 2]) : (7939 + 1)));
                        var_16 = (max(var_16, (((94 ? (((((8276710678453233147 ? 2624229033741033499 : -456038094545812196))) ? (((16384 | (arr_16 [9] [i_1 - 2] [i_2] [i_1 - 2] [i_1 - 1] [i_0])))) : ((100 ? -328090257432277227 : 21589)))) : (((-(1 != 8027)))))))));
                        arr_21 [i_2] = ((-(((((8 ? 65524 : 1195247582))) ? (arr_15 [i_1 - 1] [i_1 - 3] [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_1 + 3]) : 1))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_17 = (min(var_17, (arr_22 [6] [i_7])));
                            var_18 = (max(var_18, ((max(216, 8203560737994365985)))));
                        }
                        var_19 = (min(var_19, ((((((~var_9) != ((4588339191667620426 << (-8028 + 8057))))) ? ((-(((var_9 > (arr_7 [i_0] [i_1] [5] [5])))))) : 203)))));
                    }
                    arr_30 [i_2] [i_2] [i_2] = (((max((arr_2 [i_2] [10]), (~var_7)))) ? (((((57606 ? -1195978090 : -97))) ? (((arr_1 [i_0]) ^ (arr_15 [i_0] [12] [i_0] [i_0] [i_2] [i_0]))) : (arr_6 [i_1 + 4] [i_2] [10]))) : 8027);

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_33 [i_0] [i_8] [i_2] [15] [i_8] [i_2] = 0;
                        var_20 = (min(var_20, (((21606 ? 0 : 0)))));
                        arr_34 [i_0] [i_1 - 3] [i_2] [i_8] = (((~var_8) ? 121 : (max(-1, (0 <= 32640)))));
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_21 = ((((((arr_4 [i_0] [i_1]) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 0))) ? 2066904249 : -1));
                        var_22 = (((arr_1 [i_9 - 1]) + -var_7));
                    }
                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_23 = (arr_18 [i_2] [i_2] [i_2] [i_1 - 2] [i_0]);
                        arr_43 [i_0] [i_0] [i_1] [i_2] [i_10] [i_1] = ((arr_3 [i_10 - 2] [i_1 + 3]) ? (arr_3 [i_10 - 2] [i_1 + 3]) : (arr_3 [i_10 - 2] [i_1 + 3]));
                    }
                    arr_44 [i_0] [i_2] = (((((arr_25 [i_1 + 1] [i_1] [i_1 + 1] [i_2] [i_1 + 1]) ? (arr_25 [i_1 + 1] [i_1 + 1] [i_2] [i_0] [i_1]) : var_6))) + (94 + 9210700901553223949));
                }
            }
        }
    }
    #pragma endscop
}
