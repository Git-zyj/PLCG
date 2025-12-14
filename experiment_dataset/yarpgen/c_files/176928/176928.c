/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [7] [7] [1] = (min(((~(arr_4 [1] [i_2 - 2] [i_2] [i_2]))), (arr_4 [i_2] [i_2 - 1] [i_2 + 2] [i_2 + 1])));
                    var_16 = (min((((arr_3 [i_0 - 2] [i_2]) ? (var_1 && 7340032) : ((3 ? -27370 : 1)))), (!var_1)));
                    var_17 = (~var_13);
                    arr_9 [i_0 - 1] [i_1] [11] [i_2] = (min(((((arr_6 [5] [5] [i_2]) ? (((10905719759489814589 ? (arr_1 [i_2 + 1] [i_1]) : (arr_0 [i_0] [i_0])))) : (arr_4 [i_2 + 1] [14] [i_2] [17])))), 10905719759489814580));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = (7541024314219737042 | var_11);
                }
            }
        }
    }
    var_18 = (max(var_18, ((((((~var_4) ? var_10 : var_11)) & var_15)))));
    #pragma endscop
}
