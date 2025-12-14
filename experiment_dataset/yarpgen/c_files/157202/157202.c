/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (!-38);
    var_11 = (~1113205719);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [2] = (min(var_1, (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = (min(((-1113205719 ? (!-1113205730) : (min(1113205719, 1113205718)))), (arr_0 [i_0])));
        arr_4 [i_0] = (max((~1113205726), (~1113205718)));
        var_12 = ((max(1113205718, -1113205719)));
        arr_5 [i_0] [i_0] = ((((var_0 == (~var_9)))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = ((~(max(var_0, (arr_6 [i_1 - 1])))));
        arr_9 [i_1] = 1113205719;
        arr_10 [i_1] = (max(1113205719, ((-(arr_6 [i_1])))));
        var_13 = ((((min(var_2, (arr_6 [i_1 - 1])))) ? (max(1113205730, -1113205719)) : 1113205719));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_13 [i_2] = -1113205719;
        arr_14 [i_2] = (arr_11 [i_2]);
        arr_15 [17] [17] = ((!(((arr_11 [i_2]) < var_3))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_18 [i_3] [i_3] = (min((-1113205723 >= var_0), (max((~1113205718), -1113205730))));
        var_14 = -1113205717;
        var_15 = (max(-1113205730, 1113205719));
        arr_19 [i_3] = ((~((~(arr_16 [i_3])))));
    }
    #pragma endscop
}
