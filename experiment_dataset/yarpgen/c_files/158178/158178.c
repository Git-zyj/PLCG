/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = ((+(((((min((arr_3 [i_0] [4]), (arr_1 [i_0] [i_1]))))) | 8393247770251971108))));
                arr_5 [i_0] = (((((max((arr_3 [i_0] [i_0]), (arr_3 [i_1] [i_1]))))) ^ ((+(((arr_2 [9] [7]) / 10053496303457580508))))));
            }
        }
    }
    var_19 = (min(var_8, (min(((min(-2021306799, var_0))), (max(10053496303457580507, var_15))))));
    #pragma endscop
}
