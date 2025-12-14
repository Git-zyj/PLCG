/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_11 ^= ((-(((4294967284 - var_10) ? ((min(var_2, (arr_0 [i_0])))) : (arr_0 [i_0 + 2])))));
        arr_2 [i_0 + 1] = var_2;
        var_12 = (min(var_12, ((-(((var_2 || var_3) ? (arr_1 [i_0 - 3]) : (arr_0 [i_0])))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] = (((arr_1 [i_0 + 1]) ? (((23125 ? var_2 : (arr_1 [i_0 - 4])))) : 1953410473));
            arr_6 [i_1] = var_1;
            var_13 *= ((((((arr_3 [i_0 - 2] [i_0 + 2]) ? (-7573826416568387148 / 23144) : (!1)))) || (((((!(arr_4 [i_0 + 2] [i_0 + 2]))))))));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_14 |= (((arr_7 [i_0] [i_0 + 3]) && (arr_7 [i_0 + 1] [i_0 + 2])));
            var_15 = (arr_4 [i_0] [i_0]);
        }
    }
    var_16 = var_4;
    #pragma endscop
}
