/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] = ((130944 + (max((max((arr_1 [i_0] [4]), var_8)), 12))));
        var_17 = 7640982700827885684;
        var_18 = (min(var_18, ((((!4294967276) + (((!((max(var_15, (arr_1 [i_0] [1]))))))))))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = (max(var_1, ((((max((arr_5 [i_1]), (arr_4 [i_1])))) ? ((2097151 ? (arr_4 [i_1 - 1]) : var_12)) : (~var_12)))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_19 = 4294836351;
                    arr_12 [i_3] = var_6;
                }
            }
        }
    }
    var_20 = -var_2;
    var_21 = min(81, 18446744073707454464);
    #pragma endscop
}
