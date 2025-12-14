/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_1));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (((arr_3 [4]) ? ((((arr_6 [i_1] [i_1]) || (arr_6 [i_1] [i_2])))) : (((1080863910568919040 && (arr_6 [i_0] [i_1]))))));
                    arr_10 [i_2] = ((((-((min(18610, 9673)))))) ? (max((((arr_5 [4] [i_1] [i_1]) & 9655)), (arr_8 [i_0] [6] [i_0] [i_0]))) : ((((!(((~(arr_6 [i_1] [i_0])))))))));
                    var_14 = (((!-103) ? ((((min(var_7, (arr_0 [i_2])))) ? (((~(arr_1 [i_2])))) : (arr_6 [i_0] [i_0]))) : (((45679 ? (arr_1 [i_2]) : (arr_0 [i_0]))))));
                }
            }
        }
        arr_11 [17] [i_0] = (((-(-870844507510879919 <= 55857))));
        arr_12 [17] = ((~(arr_8 [i_0] [i_0] [i_0] [i_0])));
        arr_13 [i_0] = ((((((~var_5) ? ((((arr_1 [i_0]) | (arr_3 [i_0])))) : var_4))) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (max(((18479 ? (arr_1 [i_0]) : var_6)), (arr_7 [i_0] [i_0])))));
        var_15 = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_16 = (((arr_5 [i_3] [i_3] [i_3]) < (arr_1 [i_3])));
        var_17 = (arr_15 [i_3]);
    }
    var_18 = var_0;
    var_19 = 5801857800393544265;
    var_20 = 9655;
    #pragma endscop
}
