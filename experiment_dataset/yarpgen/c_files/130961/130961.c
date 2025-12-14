/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((~((min(var_3, 1)))));
    var_12 = 18446744073709551591;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (arr_1 [i_1 - 1]);
                    var_14 = 1;
                }
            }
        }
    }
    var_15 = (max(var_15, ((max(-167201670554485521, 3373267619)))));
    #pragma endscop
}
