/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(((9622605175392988211 & (9622605175392988211 * var_12))), (17325201687530978499 >= var_11));
    var_18 |= (((((min(-6791531842538531483, 14485)))) + 32768));
    var_19 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = ((((((-9223372036854775807 - 1) ? (min((arr_4 [i_1]), 11518)) : 7639728153301999883))) ? (max(5766984587253858948, 17508991272834841090)) : (max(((5766984587253858950 ? 12679759486455692679 : 8824138898316563420)), var_10))));
                arr_7 [i_1] [i_1] = (min((((arr_1 [i_0] [i_1]) ? 191332674902302003 : (arr_0 [i_1]))), (~var_7)));
            }
        }
    }
    var_21 = (max(((min((((var_2 == (-9223372036854775807 - 1)))), (var_8 ^ -652665529465747413)))), (((~var_10) / (9622605175392988196 % -652665529465747427)))));
    #pragma endscop
}
