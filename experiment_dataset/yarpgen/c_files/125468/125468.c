/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (((4429163653494478303 ? 31457280 : 19652)));
                    var_12 = (min(var_12, ((max((arr_2 [17] [i_1 + 1]), (((((100 ? (arr_1 [i_1]) : var_7))) ? (arr_2 [i_1 - 1] [i_2]) : ((max(1023, 9223372036854775805))))))))));
                }
            }
        }
    }
    var_13 = (max(var_13, 31457266));
    #pragma endscop
}
