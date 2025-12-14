/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [7] [i_1] [i_1] = (max((min((arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 2]), (arr_5 [i_1 - 2] [i_1 - 2] [i_1 + 1]))), ((-(arr_5 [i_1 - 2] [i_1 - 1] [i_1 - 2])))));
                    arr_8 [i_0] [i_0] [i_0] = (!1023);
                    var_20 = (((((max(2165656801852477606, var_16)) > ((var_13 / (arr_1 [i_0]))))) || 110));
                }
            }
        }
    }
    var_21 = (~(min((max(var_8, var_7)), var_12)));
    #pragma endscop
}
