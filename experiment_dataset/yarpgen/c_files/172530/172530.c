/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((max(7951, 1)))) * var_0)));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0]) ? ((var_10 ? (arr_1 [i_0 + 2] [i_0]) : (arr_1 [i_0 - 1] [i_0]))) : (max(var_2, (arr_1 [i_0 + 2] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [3] [i_2] [i_1 - 1] = (((arr_8 [i_0] [i_1 + 1] [i_0 + 1] [i_0 + 1]) != var_0));
                    arr_10 [i_0] [i_1] [i_0] = 17134291759875563246;
                    var_18 += (((((min(1920, 12009446684514495545)) ? (((var_0 != (arr_0 [0])))) : var_11))));
                    var_19 = (max((-127 - 1), 6437297389195056071));
                }
            }
        }
    }
    var_20 = (((!(-37 || var_1))) ? var_11 : ((((min(var_7, var_15))) ? var_0 : (((1 ? 7951 : var_6))))));
    #pragma endscop
}
