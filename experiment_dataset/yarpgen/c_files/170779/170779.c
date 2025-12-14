/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_11 -= (~24);
        arr_2 [i_0 - 3] = ((((8720697391342010651 ? (((arr_1 [i_0]) ? 18446744073709551613 : 0)) : 124)) > (min(((46885 ? (arr_0 [i_0] [i_0 - 2]) : -119)), ((min(65535, 461727851)))))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1 - 2] = ((((30128 ? (max(127, (arr_4 [i_1 - 2] [i_1]))) : 2147483647)) & (((((~(arr_4 [i_1] [i_1 + 1])))) ? (min((arr_4 [i_1] [i_1 - 2]), 24)) : 762636150))));
        var_12 = (arr_1 [i_1 + 1]);

        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            arr_9 [i_1] = ((-((((max(-125, 2448005383481958703))) ? 42285 : (arr_8 [i_2 + 1] [i_2 + 1] [i_2])))));
            arr_10 [i_1] = (~(arr_7 [i_2 - 2]));
        }
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        var_13 = (((((28672 & (~1)))) ? 0 : ((6803131960271168205 - (arr_4 [i_3 + 1] [i_3 + 1])))));
        var_14 = (max(var_14, (116 / 70)));
        var_15 = ((-((((arr_4 [i_3 + 2] [i_3 + 1]) <= ((-71 ? 9006099743113216 : 24)))))));
    }
    var_16 = (((971370852035914439 <= 142) ? (((142 - var_3) * (~14342212733524940015))) : 28664));
    #pragma endscop
}
