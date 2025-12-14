/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1639;
    var_17 = (max(var_17, -1649));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [10] [i_0] = ((((!(((arr_4 [i_0 - 3]) <= (arr_4 [i_1]))))) || (+-1639)));
                arr_7 [i_0] [i_0] = (max((((arr_5 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_1]))), (((var_14 == (min(-836681447779255049, (arr_4 [i_0]))))))));
            }
        }
    }
    var_18 = ((~(!var_4)));
    #pragma endscop
}
