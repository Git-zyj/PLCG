/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (33 == 21);
        arr_4 [i_0] [i_0] = (((11373203699183535659 || 268303609) & (((((((arr_0 [i_0] [i_0]) || (arr_0 [i_0] [i_0])))) <= 0)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_9 [20] [1] = ((((arr_7 [i_1]) / (arr_7 [i_1]))) % (arr_6 [i_1] [i_1]));
        var_18 = ((((arr_6 [i_1] [i_1]) & 1481988433286196984)) ^ ((((244 & (arr_0 [i_1] [8]))))));

        for (int i_2 = 4; i_2 < 22;i_2 += 1)
        {
            arr_12 [i_1] = (15872 ^ 35124);
            var_19 = -109330254;
            arr_13 [i_1] [i_1] [i_1] &= ((~((((var_15 + var_15) <= (24251 && 1))))));
            arr_14 [i_1] [i_2] |= 1998873503;
            var_20 = (arr_6 [i_2] [i_1]);
        }
    }
    var_21 = ((38889 == ((((-14 || 13405) && 40057)))));
    #pragma endscop
}
