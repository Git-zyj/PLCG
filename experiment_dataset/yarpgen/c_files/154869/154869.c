/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((((max(1, 204)))) >> (!var_16)));
    var_19 -= (((((((1170909290 ? var_13 : var_14))) ? ((27036 ? 0 : var_0)) : (var_12 & var_13))) >> (((max(7059210852828623970, (var_2 + var_15))) - 13438616823592352780))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min(((min(var_4, (arr_5 [i_0] [i_0])))), (((-((min(var_15, (arr_2 [2])))))))));
                arr_7 [i_0] [i_0] = (min((arr_5 [i_1] [i_0]), (min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))));
                arr_8 [i_0] [i_0] = (min((arr_3 [i_0 + 2] [i_1 + 1]), (max((arr_3 [i_0 + 3] [i_1 - 1]), var_7))));
            }
        }
    }
    var_20 = var_2;
    var_21 = var_9;
    #pragma endscop
}
