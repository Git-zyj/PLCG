/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((+((((~var_3) && (((var_7 ? 10475975874930661438 : 0))))))));
    var_15 = 4294967276;
    var_16 = (~var_1);

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0 + 1] [14] = ((((((98 ? var_6 : (arr_1 [1]))) & 56))) ? (min(14407291560493546543, (((var_6 ? (arr_1 [i_0]) : 1378066483))))) : (((max((arr_1 [i_0 - 2]), var_4)))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_17 = (((max((var_5 % -92), 7)) * (1378066483 >= -3826568463734832101)));
            var_18 &= ((~(((arr_0 [i_0] [i_0 - 1]) / var_5))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = ((var_6 ? (((-(9 / 5)))) : -7946849524331134365));
            var_19 = ((((max((arr_5 [10] [i_2] [i_0 - 1]), 98))) ? (((!(arr_2 [i_2] [i_0])))) : (((max((var_12 <= 0), var_11))))));
            arr_10 [i_0] [1] [i_2] = (~-var_9);
        }
        arr_11 [i_0] = ((var_7 < (((var_8 ? (arr_8 [i_0] [i_0]) : -73)))));
    }
    #pragma endscop
}
