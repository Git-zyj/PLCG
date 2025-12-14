/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 13;
    var_16 = -var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((arr_2 [i_0] [i_1]) || var_9)) ? ((var_0 ? (arr_1 [i_1]) : (arr_3 [1]))) : 1761062764));
                var_17 = (max(var_17, ((min((min((min((arr_3 [i_1]), (arr_0 [i_0]))), 2533904532)), 1761062795)))));
                var_18 ^= 7442131968290758954;
                arr_5 [i_0] [i_0] [i_0] = -1821547128;
            }
        }
    }
    var_19 *= min(((min(var_0, ((var_10 ? 246 : -26220751))))), var_14);
    #pragma endscop
}
