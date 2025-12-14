/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((183 ? (var_2 != var_11) : (var_6 && var_11)))), ((1396608957872482411 ^ ((var_9 ? var_5 : 1785068409))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_14 &= (max(7705, 1785068412));
                var_15 = (min(((var_6 ? ((((-405833474 + 2147483647) >> (16383 - 16382)))) : (var_12 ^ 5635381352241982451))), ((((((-22145 ? -875750565 : 1183996989))) ? ((var_3 ? var_0 : (arr_2 [i_1 + 1]))) : ((min(14069, 4294967292))))))));
            }
        }
    }
    var_16 = ((((1183996989 ? var_3 : 18446744073709551615))) * (min(var_4, ((var_8 ? var_1 : var_10)))));
    var_17 = ((((min(var_2, ((var_10 ? 0 : var_11))))) ? (((min(1987137061, var_7)) % -13617)) : var_2));
    #pragma endscop
}
