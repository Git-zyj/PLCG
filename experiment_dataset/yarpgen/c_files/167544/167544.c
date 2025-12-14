/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_15 = (min(var_15, var_8));
            arr_4 [i_1] = (arr_3 [i_1] [i_1] [i_1]);
        }
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            arr_9 [i_0] [6] &= ((-((var_3 & (arr_2 [0] [i_2 - 1])))));
            var_16 = (max(var_16, (((382331097 > (min((min((arr_5 [18]), var_8)), (arr_3 [20] [20] [i_2 - 2]))))))));
        }
        var_17 = (min(var_17, (((var_6 ? (((min(13200, 2)))) : (-3548723865294396982 ^ var_4))))));
        arr_10 [i_0] = (-3548723865294396982 > -3548723865294396979);
    }
    var_18 = 13200;
    #pragma endscop
}
