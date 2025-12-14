/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((max((arr_0 [0] [1]), var_0))) ? (arr_1 [i_0]) : (min(var_5, (arr_0 [i_0] [1]))))) != ((((arr_0 [i_0] [1]) ? (~var_10) : var_7))));
        var_12 = (max(var_12, var_1));
        var_13 = max((255 >= -88), (arr_0 [1] [15]));
        arr_3 [8] [i_0] = var_8;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            arr_11 [i_2] [11] = (-88 / 1);
            arr_12 [i_2] [i_2] = ((var_6 ? (arr_6 [0] [i_1]) : ((((min(var_1, var_5))) ? (((var_3 && (arr_6 [20] [19])))) : var_6))));
            arr_13 [i_2] = (arr_8 [i_2 - 1] [i_2]);
            arr_14 [7] [i_2] [i_2] = (((((arr_5 [12]) >> ((((arr_5 [7]) >= var_0)))))) ? ((((min(var_6, var_9))) ? var_3 : (min(var_9, var_5)))) : (((((max(var_5, var_9)) <= (var_0 <= var_5))))));
            var_14 ^= (min(var_2, var_7));
        }
        var_15 = (max(((max((~var_4), (var_10 <= var_6)))), (arr_10 [i_1])));
    }
    #pragma endscop
}
