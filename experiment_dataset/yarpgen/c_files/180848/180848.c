/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((max((((var_0 ? -1 : var_0))), (max(16103380249188023933, 0)))), 3244000583));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [10] [i_0] = (arr_4 [2] [i_0] [i_0]);
                var_16 = ((((~(max((arr_0 [i_0]), (arr_1 [i_0])))))) ? (max((((arr_1 [i_0]) + (arr_3 [i_1]))), (((arr_0 [i_0]) ? (arr_2 [i_0]) : 0)))) : (arr_4 [i_0] [i_1] [i_0]));
                arr_7 [i_0] = ((~((max((arr_3 [i_1 - 1]), (arr_3 [i_1 - 1]))))));
                arr_8 [i_0] = 1;
            }
        }
    }
    #pragma endscop
}
