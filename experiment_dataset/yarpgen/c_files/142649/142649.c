/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((max(((max(var_2, var_2))), ((127 ? 9223372036854775807 : var_3))))), ((var_7 ? (min(127, var_8)) : 127))));
    var_11 = (min(var_11, (((((min(((var_5 ? var_8 : var_8)), (((var_2 ? -127 : var_5)))))) ? ((3095227711031385190 ? ((var_6 ? var_3 : var_5)) : (((min(86, 141)))))) : (((((var_7 ? var_5 : -73))) ? var_2 : var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_10 [i_0] [2] = min((max(((-1199159679 ? var_8 : var_3)), ((-3095227711031385190 ? (arr_0 [i_3]) : var_6)))), (((((((arr_7 [i_0] [i_1] [i_2] [i_3]) ? (arr_2 [i_0] [i_1]) : var_2))) ? 6648628898441090802 : -3095227711031385179))));
                        var_12 -= (min(var_8, 32759));
                        arr_11 [i_0] [i_1] [i_0] [i_0] [i_1] = ((min(var_8, var_2)));
                        arr_12 [23] [i_1] [i_2] [i_3] [i_0] = min((min(48, 3095227711031385210)), ((((-43 ? var_4 : var_1)))));
                    }
                    var_13 = (((((arr_2 [i_0] [4]) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
