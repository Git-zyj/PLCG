/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [18] [18] [i_0] = ((((((arr_2 [i_0]) > (11 > 93)))) << ((max(-4373948506989707298, -47)))));
                var_14 = (((((((27 ? -4752178834160394066 : 9891)) % (243 % 16325)))) && 24700));
                var_15 = (max(var_15, (arr_3 [i_0] [i_0] [i_1])));
            }
        }
    }
    var_16 = (((((8333701498194420216 <= 66) <= 244)) ? var_11 : var_4));
    #pragma endscop
}
