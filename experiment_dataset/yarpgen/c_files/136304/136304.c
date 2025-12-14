/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136304
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
                arr_6 [i_0] [i_1] = 1984694359;
                arr_7 [i_0] [i_0] = (var_6 << ((((((((((arr_0 [i_0]) ? (-9223372036854775807 - 1) : 4876))) ? (~var_5) : var_2)) + 17408)) - 19)));
                arr_8 [i_0] = ((((min((min(2613272037606827732, 125)), var_1))) ? (min(((4876 - (arr_5 [i_0] [i_1] [i_1]))), (((183 ? (arr_3 [i_0] [i_0] [i_1]) : (arr_1 [i_0] [i_1])))))) : (((-(min(-117, var_3)))))));
                arr_9 [i_0] [i_0] [i_0] = (((((((var_3 + 2147483647) << (((var_10 + 47) - 27)))) << ((((-17361 ? var_9 : -117)) - 825760992683615112)))) > ((var_8 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
            }
        }
    }
    var_13 = (max((((min(var_7, var_1)))), ((-(778100139 / -2311847783666366900)))));
    var_14 = -1;
    var_15 = var_9;
    #pragma endscop
}
