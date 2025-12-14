/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((min((max(8325, 1)), 16774208585806302732)));
                    var_20 = (((((((-(arr_7 [i_0] [i_1])))) ? (!var_7) : var_6)) - ((((min(var_18, 1))) ? (max((arr_7 [i_1] [9]), (arr_2 [i_2] [i_2] [3]))) : (min(2147483647, var_6))))));
                }
            }
        }
    }
    var_21 = var_16;
    #pragma endscop
}
