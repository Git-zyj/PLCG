/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_12;
    var_16 &= (min(((-(max(var_0, 18446744073709551603)))), var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = ((((((-2147483647 - 1) ? 3878403969341849558 : (((max(0, var_1))))))) ? ((min(-1, ((max(var_5, var_5)))))) : (max((max(-1, var_0)), (arr_3 [i_0] [i_0])))));
                    arr_6 [i_0] [i_1] [i_0] [i_2] = ((((((arr_0 [i_0 + 1] [i_0 + 1]) * ((min(77, (arr_3 [i_0] [i_1]))))))) ? ((((!(((~(arr_3 [i_0] [i_0])))))))) : (arr_4 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
