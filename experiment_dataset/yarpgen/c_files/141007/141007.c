/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((1 ? 231 : 35091));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = ((((((((arr_2 [i_1]) >= (arr_0 [i_0] [i_1])))) >> ((((min((arr_1 [i_0]), (arr_5 [i_0] [i_1] [i_0])))) - 212))))) > (((((~(arr_5 [i_0] [i_0] [11])))) ? (arr_0 [i_1] [i_1]) : (((arr_8 [i_2] [2] [8] [13]) ? -1643265425082146811 : 1)))));
                    var_14 = ((228 ? 1 : 4095));
                    var_15 = (arr_1 [i_0]);
                    var_16 |= (127 ^ ((-(arr_0 [0] [0]))));
                    var_17 = (min(var_17, (((61445 ? -1 : -5587382695225798087)))));
                }
            }
        }
    }
    #pragma endscop
}
