/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((0 ^ (~var_9)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 = ((((((19669 ? 9 : 24))) != (4095 | 545261157))));
        var_12 = (max(1741020385, (((arr_0 [i_0]) ? ((((arr_1 [i_0]) ? var_9 : (arr_2 [1])))) : (max(8796093022207, 45880))))));
    }
    var_13 = (min(-var_6, var_4));

    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_14 = ((!(arr_4 [i_1 + 1] [i_1 - 1])));
            var_15 = (~9);
            arr_7 [i_2] = var_2;
        }
        var_16 = (min((max(16777215, (arr_6 [i_1 + 2] [i_1 + 2] [12]))), (((+((15 ? (arr_6 [i_1] [i_1 + 2] [i_1 - 1]) : 10)))))));
    }
    var_17 = (max(var_17, (((((var_3 ^ (max(2273786398064095585, 4080)))) & ((max(var_4, var_4))))))));
    #pragma endscop
}
