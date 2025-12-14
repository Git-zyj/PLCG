/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_10 = (min((min(71959903, 214)), ((59268 ? (arr_7 [i_1] [i_1 - 2] [i_2]) : (arr_3 [i_1 + 1] [i_2 - 1] [i_2 + 1])))));
                    arr_8 [i_1] [10] [i_1] = ((-(arr_5 [i_1] [i_0] [i_1] [i_1])));
                    var_11 = (((((9 ? (arr_6 [i_2] [i_2] [i_2] [5]) : (min((arr_4 [i_1]), (arr_5 [i_1] [i_0] [i_1] [i_2])))))) ? (((8192 ? (-32767 - 1) : 0))) : (((((-8192 / (arr_7 [i_1] [i_1] [i_0])))) * (min((arr_4 [i_1]), 8192))))));
                }
            }
        }
    }
    var_12 = (((((var_6 << ((((var_5 ? var_5 : 36228)) - 7987))))) ? var_1 : 4270043859));

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_13 = (max(var_13, 40636));
        arr_11 [7] = 0;
        var_14 = (max(var_14, ((min(4294966272, (max((arr_10 [19] [i_3]), 246)))))));
        arr_12 [i_3] [i_3] = (arr_10 [i_3] [i_3]);
    }
    var_15 = ((586742302 >> ((min(53728, 9)))));
    var_16 = (max(var_16, (((67043328 == (min((((0 ? 403311424 : 16))), var_3)))))));
    #pragma endscop
}
