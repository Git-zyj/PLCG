/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0 + 1] = 13900275592103001311;
        var_17 = (max(var_17, var_9));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((13900275592103001311 || (((4546468481606550316 ? var_5 : 13900275592103001321))))))));
                    var_19 = (max(var_19, 84));
                    arr_9 [8] [4] [8] [8] |= (((arr_3 [i_0] [i_1] [i_1]) ? (((4294967285 || ((var_0 || (arr_1 [4])))))) : (8040 > 55359)));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_13 [i_2] [i_2] [i_2] [i_1] [i_2] = ((-(((((arr_11 [i_2]) > var_9))))));
                        var_20 = (arr_0 [i_3]);
                    }
                }
            }
        }
    }
    var_21 = 10191;
    var_22 = (((((((min(var_10, var_9))) || (var_4 > var_9))))) > var_10);
    var_23 = (min(var_23, var_7));
    #pragma endscop
}
