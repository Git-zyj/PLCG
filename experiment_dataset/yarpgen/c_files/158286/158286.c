/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = var_6;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = ((((((min(2549155460414768187, 2147483647))) ? (((arr_0 [i_0]) ? 13367 : (-127 - 1))) : ((108 ? (arr_2 [i_0]) : 122))))) ? ((((!(((-127 - 1) == 122)))))) : ((55770 ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : -123)) : (((min(var_7, var_7)))))));
            var_13 = (min((((arr_4 [i_0]) ? -123 : (arr_3 [i_0]))), (((-113 - 22) ? ((max(119, (arr_4 [i_0])))) : (((arr_3 [i_0]) & 1))))));
            var_14 &= ((1 ? 20 : ((min(1, (!1))))));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_15 ^= ((-9 ? (((-114392883977226062 <= 2546853952652626550) ? -78 : (arr_4 [12]))) : (((((~(arr_0 [16]))) > var_1)))));
            arr_9 [i_0] = (max(((((!(arr_3 [i_2]))) ? 208 : (-109 - var_9))), 0));
            var_16 = (min(var_16, ((((((((arr_4 [4]) ? (arr_7 [1]) : -101)) <= (1 % -117))) ? (((!(arr_8 [i_2 - 1])))) : (((min(-122, 1763891996)))))))));
            var_17 = ((((arr_8 [i_0]) ? (arr_8 [i_0]) : 37)) >= (-94 > 3288566114989266159));
            arr_10 [i_0] = (i_0 % 2 == zero) ? ((((((arr_2 [i_2]) ? (((((arr_4 [i_0]) + 2147483647)) << (1 - 1))) : (arr_1 [i_0]))) <= 0))) : ((((((arr_2 [i_2]) ? (((((((arr_4 [i_0]) - 2147483647)) + 2147483647)) << (1 - 1))) : (arr_1 [i_0]))) <= 0)));
        }
        var_18 = (127 != -22863);
        var_19 = (arr_6 [i_0]);
    }
    #pragma endscop
}
