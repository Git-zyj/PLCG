/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 102;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [10] [10] [10] = (max(((((((((arr_0 [i_2]) <= (arr_7 [i_0 + 3]))))) == (arr_0 [i_2])))), 65535));
                    arr_9 [i_2] [i_1] = ((((37774 ? (arr_4 [7] [7] [i_0 + 2] [i_2 - 1]) : (arr_4 [i_0] [i_0] [i_0 + 3] [i_2 - 3])))) ? (((arr_4 [i_0] [i_0] [i_0 + 1] [i_2 - 2]) ? (arr_4 [i_0] [i_0] [i_0 - 1] [i_2 - 1]) : -4993261076960116775)) : ((((arr_4 [i_0] [i_0] [i_0 + 1] [i_2 - 2]) ? (arr_4 [i_0] [1] [i_0 + 2] [i_2 + 1]) : (arr_4 [i_0] [i_0 + 1] [i_0 + 1] [i_2 - 3])))));
                }
            }
        }
    }
    #pragma endscop
}
