/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        arr_2 [14] = (((((0 ? 18446744073709551615 : 0))) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])));
        var_17 = (arr_0 [13]);
        arr_3 [i_0] = -1;
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_18 = (((arr_8 [i_1] [i_2] [i_2] [i_5]) ? (((-86 != (arr_11 [i_1] [i_2] [i_2] [i_2])))) : (arr_6 [i_2] [2] [i_3])));
                            arr_16 [i_3] [i_2] = ((~(((arr_7 [i_2] [i_2] [i_5]) ? 838003714 : (arr_0 [i_4])))));
                        }
                        var_19 = (arr_4 [i_1]);
                    }
                }
            }
        }
        var_20 = (((((64 ? -1964673012292712521 : 179))) ? ((179 ? (arr_5 [i_1]) : (arr_9 [i_1] [i_1]))) : (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_20 [i_6] = (min(235, ((max((arr_18 [i_6] [i_6]), (arr_0 [2]))))));
        var_21 = (min(var_21, (((((((arr_1 [i_6] [i_6]) + (arr_1 [12] [i_6])))) ? ((max((arr_0 [i_6]), (arr_0 [i_6])))) : ((18031 ? (arr_0 [i_6]) : (arr_1 [i_6] [i_6]))))))));
        arr_21 [i_6] = (((((min(6287801659535827069, 8)))) == ((((min((arr_19 [i_6]), 1964673012292712519)) < 23901)))));
    }
    var_22 = 0;
    #pragma endscop
}
