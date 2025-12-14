/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_9, (min(var_15, (~var_13)))));
    var_18 = (max(((-1 ? 3 : 0)), ((~(!-1073741824)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_1] [i_0] = (((((((arr_4 [i_1]) && (((14 / (arr_3 [i_0] [i_0])))))))) != (arr_7 [i_0])));
                    arr_13 [i_0] [14] [i_0] = (arr_4 [i_1]);
                }
            }
        }
    }
    var_19 = -114;
    var_20 = ((!(65522 | 1094981352)));
    #pragma endscop
}
