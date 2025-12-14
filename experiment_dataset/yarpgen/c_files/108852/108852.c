/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (((((((min(63, -30))) <= (var_9 <= var_14)))) == 122865429));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = ((~(min((min((arr_1 [i_0] [i_1]), var_14)), (((23283 && (arr_7 [i_0] [i_1] [i_2] [i_1 - 2]))))))));
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((((arr_3 [i_0] [i_1 + 2]) ? var_5 : 42253)));
                }
            }
        }
    }
    var_21 = (((((min(var_8, var_10)) != (var_1 && 100))) ? (23283 & var_14) : (((~(((-53 + 2147483647) << (var_16 - 2367464169341165314))))))));
    var_22 = var_4;
    var_23 += min((~var_13), (((~var_7) ? (max(var_14, var_15)) : (23268 / 2109627054))));
    #pragma endscop
}
