/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_7, (((30635 < var_10) ^ -32127))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [11] [i_1] [i_2] [7] = -29793;
                    arr_8 [i_2] [i_2] [i_2] [i_0] = min((((((max((arr_6 [1] [i_2] [i_2] [i_0]), (arr_4 [i_2] [i_1] [i_0 - 2])))) && (arr_5 [i_2 + 2] [i_2 - 1] [i_0 - 3])))), ((13245 ? 2358825258 : 22415)));
                }
            }
        }
    }
    var_18 = (max(((-((13250 ? var_9 : 22344)))), var_10));
    #pragma endscop
}
