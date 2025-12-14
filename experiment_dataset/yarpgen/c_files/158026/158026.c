/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [10] = (1 ? 1891769785 : 620622199);
                arr_6 [i_0] [i_1] = (min((123 && 133), (arr_1 [i_1])));
                arr_7 [8] [i_1] [i_1 + 1] = ((min((min(168662053, 127)), (((arr_2 [i_0]) ? (arr_0 [i_1 - 2] [3]) : var_9)))));
                arr_8 [i_0] [i_0] = ((((((var_0 | -1852865189) | var_6))) ? (((arr_4 [i_0] [2] [i_1]) ? (~1891769793) : ((var_7 << (var_6 - 665852481))))) : ((~(arr_2 [i_0 + 3])))));
                arr_9 [i_1] [i_1 + 1] = (min((min((arr_3 [i_0 + 2]), (arr_4 [i_0 + 2] [i_0 - 2] [i_1 + 1]))), var_7));
            }
        }
    }
    var_11 = ((var_6 / (((var_1 ? var_8 : var_3)))));
    #pragma endscop
}
