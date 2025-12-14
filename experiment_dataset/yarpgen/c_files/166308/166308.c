/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_2 + 1] = ((((!(arr_1 [i_0 + 1] [i_0 + 1]))) ? (((((4658111479563462959 ? (arr_0 [i_0]) : (arr_5 [i_1])))) ? (arr_6 [i_0 + 1] [i_0] [i_0 - 1]) : (max(13788632594146088670, 1)))) : (((max((min(21345, (arr_3 [i_0] [i_1] [3]))), (arr_0 [i_0])))))));
                    var_13 &= (max((min((((arr_2 [i_1]) ? 64913 : (arr_5 [i_1 - 1]))), (!13788632594146088670))), ((~((~(arr_3 [i_0] [i_0] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
