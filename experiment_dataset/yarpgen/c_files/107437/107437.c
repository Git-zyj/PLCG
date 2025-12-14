/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (arr_3 [9] [i_1 - 1] [i_1 + 4])));
                var_20 = (max(var_20, (arr_0 [6] [i_0])));
                var_21 = (max(var_21, (min((((((0 ? 0 : (arr_3 [i_1] [i_1] [i_1 + 4])))) ? var_13 : (min((arr_4 [i_0]), 0)))), ((((arr_2 [i_0] [i_1 - 2]) >= ((9221526657384703935 ? (arr_3 [10] [i_1] [18]) : (arr_5 [i_0] [i_0]))))))))));
                arr_6 [24] = min((min((max((arr_0 [1] [6]), (arr_5 [i_0] [i_0]))), ((min(var_8, (arr_1 [i_0])))))), (min(((-1 ? var_2 : (arr_1 [i_0]))), ((((arr_3 [1] [i_1] [i_1]) >> (arr_0 [i_0] [i_0])))))));
            }
        }
    }
    var_22 = (((0 < (((16396781586192777387 ? var_5 : var_0))))) ? var_5 : (((!((min(var_0, 1551629104150229193)))))));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    arr_14 [2] |= (((((((~(arr_2 [i_2] [i_3])))) != (min(-4, (arr_7 [4] [i_4])))))) + (~var_6));
                    arr_15 [i_2] [i_2] [i_4] [i_4 - 1] = min((max(3, var_11)), (((!((min((arr_7 [i_2] [3]), 0)))))));
                }
            }
        }
    }
    #pragma endscop
}
