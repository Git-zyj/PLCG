/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_11 = (~2);
        var_12 ^= (((arr_1 [i_0] [i_0]) + 3055160617));
        var_13 = (min(var_13, ((((((((arr_0 [i_0]) || 10985)) ? (max(-1161925668, 38940322)) : ((0 << (((arr_1 [i_0] [i_0]) + 1829686771)))))) << (3783932868798574936 & 18))))));
        var_14 = (((((arr_1 [i_0 + 3] [i_0 + 2]) || (arr_1 [i_0 - 1] [i_0 - 1]))) && (((arr_1 [i_0 + 1] [i_0 + 3]) || (arr_1 [i_0 + 2] [i_0 - 1])))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                {
                    var_15 *= (((~(~23401))));
                    var_16 -= (((arr_2 [i_1 + 1]) ^ (((4284165709 ? 30150 : (arr_7 [i_1] [i_2 + 1]))))));
                }
            }
        }
        arr_9 [i_1] [i_1 + 1] = ((-((35398 ^ (arr_3 [i_1] [i_1 + 1])))));
    }
    var_17 = (min(var_8, (324993525 % var_2)));
    var_18 = (min(var_18, ((((var_1 + 2147483647) << (((((((18772 ? 3672625129 : 3969973770)) >= (!416129078)))) - 1)))))));
    var_19 = (var_0 ? var_4 : (0 == 25675));
    #pragma endscop
}
