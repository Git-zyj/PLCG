/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_15 ? (var_13 ^ var_4) : var_8))) > (max((var_2 ^ 10), var_3))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] = (min((max(((((arr_5 [i_1] [i_1] [i_1]) ? var_11 : 102))), (arr_3 [i_0] [i_0] [6]))), (((var_6 != (arr_2 [i_0] [3]))))));
            var_21 += (((min(38192, var_18))));
        }
        var_22 = ((1222438992 >> (((max((2685827264 ^ var_0), -108)) + 121))));
        var_23 -= 1208042671;
    }
    #pragma endscop
}
