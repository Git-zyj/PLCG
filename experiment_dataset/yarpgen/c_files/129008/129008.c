/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (((((max(622918933288075044, 255)) ^ (((var_9 ? 2066425266 : 2165612168))))) & (((1 ? -2147483632 : 65535)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = ((((var_8 & (max(3073802912, (arr_5 [i_0] [i_1] [i_2])))))) ? (((1221164378 & 0) ? (((arr_1 [i_0]) ? var_1 : var_11)) : (max(4057856994, 2170609767)))) : ((((var_12 == ((var_6 ? (arr_7 [i_1] [i_2]) : var_14)))))));
                    var_21 ^= ((min(var_8, 25578)));
                }
            }
        }
    }
    var_22 = (max((var_9 * var_17), (((min(var_14, var_18)) % (((var_3 ? var_4 : var_11)))))));
    #pragma endscop
}
