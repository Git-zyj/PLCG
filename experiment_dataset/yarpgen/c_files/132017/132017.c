/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = (92 + 63);
        var_16 += (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_3 [i_1]) * (arr_3 [i_1])));
        var_17 = (max(var_17, (~-1547717341)));
        arr_7 [i_1] [i_1] = ((-568984058 > (var_1 ^ var_9)));
    }
    var_18 = var_7;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_19 -= ((((min((arr_13 [i_2] [i_3]), (arr_15 [i_3 - 3] [i_3 - 3] [i_3] [i_2])))) ? 9668 : 1450294702));
                    var_20 = (max(var_20, (((~(arr_10 [i_2]))))));
                }
            }
        }
    }
    var_21 = (1547717340 ? ((((var_1 ? 27719 : -1073741824)) << (17741 - 17726))) : ((~((min(109, 109))))));
    var_22 &= (~var_8);
    #pragma endscop
}
