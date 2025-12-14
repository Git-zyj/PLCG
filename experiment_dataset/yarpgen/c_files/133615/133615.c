/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((!(((-24 ? var_13 : 1)))))) > ((((((1 ? 127 : var_3))) && var_9)))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 1] = (max(65535, ((((max(65516, (arr_1 [i_0])))) ? (max(255, (-9223372036854775807 - 1))) : 0))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_13 [i_0 + 1] [i_2] [i_3] = (((max((arr_10 [i_0 - 1] [i_1]), (arr_10 [i_0 + 1] [17]))) ? ((421807948 ? (arr_10 [i_0 - 1] [i_0 - 1]) : (arr_10 [i_0 + 1] [19]))) : 1));
                        var_20 = (min(var_20, ((((((((19 ? (arr_4 [22] [i_1] [i_1]) : 1)) - var_1))) ? (((arr_5 [i_0 - 1] [i_0 + 1]) ? 4 : (-127 - 1))) : (max(((32767 ? var_7 : 1)), 65516)))))));
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = ((((((arr_6 [i_0 - 1] [i_0 - 1]) ? (arr_6 [i_0 - 1] [i_0 + 1]) : (arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 1])))) ? (max(8388608, (arr_6 [i_0 + 1] [i_0 - 1]))) : (((arr_6 [i_0 + 1] [i_0 - 1]) & (arr_6 [i_0 + 1] [i_0 + 1])))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 4; i_5 < 17;i_5 += 1) /* same iter space */
        {
            arr_21 [i_5] = -1;
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_21 = (min(var_21, (((((-64 ? 4 : (arr_6 [i_4] [i_4])))) ? (arr_28 [i_4] [i_5] [i_6] [i_7] [i_8 - 2]) : ((65535 ? 1 : 2506453063))))));
                            var_22 = (min(var_22, (((~(40291 * var_16))))));
                        }
                    }
                }
            }
            var_23 = (min(var_23, (((~(arr_27 [i_5 - 1] [i_5 - 3] [i_5] [i_5 - 1] [i_5 + 1]))))));
        }
        /* vectorizable */
        for (int i_9 = 4; i_9 < 17;i_9 += 1) /* same iter space */
        {
            var_24 = 1739810369;
            var_25 = (min(var_25, ((((arr_19 [i_9 - 2]) ? var_4 : (arr_19 [i_9 - 3]))))));
            var_26 = (min(var_26, ((((arr_32 [i_4] [16] [i_9 - 2]) ? 0 : (arr_32 [12] [i_9 - 4] [i_9 - 2]))))));
        }
        for (int i_10 = 4; i_10 < 17;i_10 += 1) /* same iter space */
        {
            var_27 = (max(var_27, 1));
            arr_35 [0] [0] [i_10] &= (max(var_5, (((var_3 - (arr_24 [i_4] [i_4] [i_4] [i_4]))))));
        }
        arr_36 [i_4] [3] = (arr_7 [i_4] [i_4] [i_4]);
        var_28 = (min(var_28, 156));
        var_29 = (max(((((743116455 ? 1 : var_10)))), (((-2147483647 - 1) ? ((max((-2147483647 - 1), (arr_9 [i_4])))) : 1739810351))));
    }
    #pragma endscop
}
