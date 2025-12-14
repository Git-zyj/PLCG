/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(var_9, (min(45, var_3)))) < -1424580825));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (min((!43233), ((1073741823 >= (arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = (((((3221225471 ? 43233 : (!-46)))) ? var_11 : 3221225471));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_16 = (max((arr_1 [i_0] [i_0]), (((max((arr_6 [i_0] [i_1]), (arr_1 [i_0] [i_1])))))));
            var_17 = (((-1021513796 ? 1073741825 : (arr_5 [i_1]))));
            arr_7 [i_1] [i_1] = ((753693655 | ((((arr_5 [i_1]) != var_8)))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_11 [i_0] [i_0] [i_0] = (8993856674752195281 - 753693655);
            arr_12 [i_2] = ((((48449 >> (-21028 + 21043)))));
        }
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        arr_16 [14] = (((((arr_3 [i_3 - 1]) ? var_10 : 1073741827)) * -3221225468));
        arr_17 [i_3 - 2] = ((1021513795 != (arr_8 [i_3 - 1])));
        var_18 = 1026481109;
        var_19 = (max((min(((((((arr_6 [i_3] [22]) + 2147483647)) << (((arr_5 [24]) - 191))))), 1073610752)), 3221225473));
    }
    #pragma endscop
}
