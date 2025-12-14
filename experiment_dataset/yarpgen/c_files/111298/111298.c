/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (9111059506835958629 <= -1);
    var_20 &= (((((~var_14) <= -var_11)) ? (~137907989) : var_12));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (var_13 <= (((((min(247, var_10)))) / (max(var_3, var_7)))));
                arr_6 [i_0] = (((((0 ? -14 : 99))) ? (max((arr_2 [i_0 - 1] [i_0 - 1]), (arr_2 [i_0 - 1] [i_0 - 1]))) : (arr_2 [i_0 - 1] [i_0 - 1])));
                arr_7 [i_0] [i_1] [16] &= (min((min((max(var_13, 18446744073709551599)), (var_7 <= var_1))), (arr_2 [i_0] [i_1 + 1])));
                arr_8 [i_0] [i_1] [i_0] = ((((((9111059506835958629 > var_2) <= ((3 ? 9111059506835958629 : 28706))))) == 64));
            }
        }
    }
    var_21 = (var_16 & var_18);
    #pragma endscop
}
