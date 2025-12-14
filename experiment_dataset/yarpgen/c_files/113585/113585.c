/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_11, 1306272770264752309));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (max(var_0, (((max(-27, 57327))))));
        var_15 = (max(2452682692872198154, 0));
        arr_3 [i_0] = ((((((arr_1 [i_0] [i_0]) ? var_5 : 47904))) ? 0 : ((var_11 ? (max(2147483647, (arr_2 [i_0] [i_0]))) : (((arr_2 [8] [i_0]) ? 47904 : -49754023))))));
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = (min(var_16, ((((max((((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : 93)), ((0 ? -2147483647 : (arr_5 [i_1] [1]))))) < (((arr_4 [6]) ? (max(65528, (arr_5 [i_1] [1]))) : (arr_4 [1]))))))));
        var_17 ^= ((((((51437 ? 65521 : 240)) >> (-2147483639 + 2147483644))) != (arr_4 [1])));
        arr_6 [i_1] = (arr_5 [i_1] [i_1]);
        arr_7 [i_1] = 5241505519414558054;
    }
    #pragma endscop
}
