/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((!(~65535)));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_1] = ((+(((arr_9 [i_3] [i_1] [i_2] [i_1] [i_0 + 2]) ? (arr_9 [i_2] [i_1] [i_2] [i_3] [i_3]) : var_6))));
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_1 + 2] = 55408;
                        arr_13 [i_0] [i_2] [i_1] = (max((-34 | -1), ((((((arr_10 [i_1] [4] [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 2]) ? 10127 : var_12))) % var_8))));
                        var_13 = (min(var_13, (((((max(44142, (arr_3 [i_0]))))) ? 9223372036854775807 : (max((9223372036854775807 - 33), (((234 >> (((arr_4 [i_0]) - 46100)))))))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_0] [12] [i_1] [i_0] [i_0] = -1;
                            var_14 = 113;
                            var_15 = ((~(arr_6 [10] [i_0] [i_1])));
                            var_16 = (max(var_16, ((((((70364449210368 ? -4912946664375654042 : 47701))) || 55408)))));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_1] [i_1] [i_1] [i_1] = var_3;
                            var_17 += 17960;
                            var_18 += ((!((max((arr_9 [i_0] [i_0] [i_2] [i_1] [i_5]), -5883)))));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_1] = (arr_6 [i_1] [i_2] [i_1]);
                            arr_26 [i_0] [i_1] [i_0] = (max((arr_1 [i_0]), (arr_18 [i_0] [i_0] [13])));
                            arr_27 [i_6] [i_1] [i_2] [0] [i_1] [i_0] = ((((arr_4 [i_1]) - -34)));
                            var_19 = 15;
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            arr_30 [13] [i_1] [i_1] [i_1] [i_1] [i_1 - 1] = (max(((~(arr_10 [i_0 + 3] [14] [i_2] [i_3] [i_3] [i_7]))), ((((((arr_14 [15] [i_2] [i_2] [i_1] [i_2] [i_7] [i_1 + 2]) / 33354)) <= (arr_19 [i_1]))))));
                            var_20 = (min(var_20, (((((-(arr_6 [i_3] [i_1 + 2] [i_3]))) - ((~(arr_6 [i_3] [i_1 + 2] [i_3]))))))));
                            arr_31 [i_1] [4] [4] [0] [i_7] = (((((-(arr_15 [i_1] [i_1] [8] [i_1 + 1] [i_1])))) ? ((65535 ? (arr_15 [i_1] [i_1] [i_1] [i_1 + 1] [i_1]) : (arr_5 [i_1 - 1] [i_1 + 2] [17]))) : (min((arr_5 [i_1 - 1] [i_1] [i_3]), (arr_15 [i_1] [7] [i_1 + 2] [i_1 - 1] [i_1])))));
                        }
                    }
                    arr_32 [i_1] [9] [i_2] [i_0] = var_8;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_21 = var_11;
                                var_22 |= (arr_10 [9] [i_8] [i_2] [i_2] [i_1 + 2] [i_0]);
                                var_23 = ((-1232810110342436850 ? (((arr_22 [i_8] [i_1] [11] [i_1] [11]) ? 65535 : (((arr_36 [i_1] [i_9] [i_8 - 1] [i_2] [i_1] [i_1]) ? (arr_35 [i_0] [i_1 - 1] [i_2] [5] [i_8] [i_2]) : (arr_35 [i_0] [i_1] [i_2] [i_8] [i_9] [i_2]))))) : (arr_10 [i_0] [i_1] [i_2] [i_1 + 2] [i_1] [i_8])));
                            }
                        }
                    }
                    var_24 = (((((134 ? -9223372036854775807 : 35863))) ? ((((arr_23 [i_0] [i_1] [i_1 + 1] [i_2] [i_2]) < (arr_14 [i_0] [i_0] [i_0 + 1] [i_1] [i_0 + 4] [5] [i_0 + 4])))) : (arr_10 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_25 = -1;
    var_26 = var_2;
    #pragma endscop
}
