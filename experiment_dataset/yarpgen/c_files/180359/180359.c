/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 -= ((-((var_6 >> (((13481194056377121928 | 65532) - 13481194056377171952))))));
                    var_13 ^= (max((-2147483647 - 1), (min((arr_8 [i_2 - 1] [1] [i_2 - 2] [i_2]), (arr_8 [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1])))));
                    var_14 = (min(((~(max(64, 2147483647)))), var_11));
                }
            }
        }
        var_15 = (min(var_15, ((((((!2147483647) << (var_0 - 12922))) * (((!(5095 | 2147483643)))))))));
        var_16 = (min((var_7 ^ 2147483647), (!var_3)));
        var_17 = ((944723846 << (((arr_1 [i_0]) - 49))));
        var_18 = ((min(65519, (!2075912681))));
    }
    var_19 *= (var_9 > 0);
    #pragma endscop
}
