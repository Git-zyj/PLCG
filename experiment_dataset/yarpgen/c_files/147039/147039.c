/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = (((((arr_0 [i_1 - 2]) <= (arr_0 [i_1 + 2]))) ? (((((arr_0 [i_1 - 2]) && var_4)))) : ((-(arr_0 [i_1 - 2])))));
                arr_8 [i_0] [i_0] [i_0] = (min((max(((var_7 % (arr_2 [i_0]))), (((1 <= (arr_6 [i_1 - 2])))))), (max(1, ((~(arr_2 [i_0])))))));
            }
        }
    }
    var_12 = (min(var_12, var_4));
    var_13 = (max(1010416162, (max(var_1, var_9))));
    var_14 = ((~((var_9 | ((min(var_0, var_0)))))));
    #pragma endscop
}
