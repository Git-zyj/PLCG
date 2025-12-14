/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((var_7 & (max(var_10, var_7)))), -1022795334));
    var_12 = ((((var_1 != 3272171962) ? var_0 : (min(var_8, -647262349)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = ((!(arr_2 [i_1])));
                    var_14 = (max(647262366, (((((((arr_0 [i_2]) ? (arr_5 [i_0] [i_1 + 1] [i_2]) : (arr_0 [i_2])))) ? 0 : (arr_1 [i_0] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
