/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = ((-(-32767 - 1)));
                    var_17 = (arr_4 [i_1] [i_0] [i_2 - 2]);
                    var_18 = ((((((-73 % 707827955) ? (max(2470728314, 8796025913344)) : ((var_1 >> (((arr_1 [i_2]) + 2863))))))) ? (min(707827955, ((707827955 ? (-32767 - 1) : 1)))) : (arr_5 [i_2])));
                    var_19 = (max(var_19, ((max(1, -32757)))));
                }
            }
        }
    }
    var_20 &= (((4732736651179382852 | (((var_10 ? var_7 : var_0))))));
    #pragma endscop
}
