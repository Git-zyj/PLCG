/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(((var_1 ? (var_6 && var_7) : (max(var_2, 6917585461192756342)))), 1);
    var_11 |= ((5159745031210905952 ? var_7 : -6917585461192756324));
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [4] = (-19 ? 1 : 6917585461192756342);
                arr_7 [i_1] [i_1] = (((arr_5 [i_0 + 1]) || (arr_5 [i_0 + 1])));
            }
        }
    }
    #pragma endscop
}
