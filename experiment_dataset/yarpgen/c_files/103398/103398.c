/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-((var_0 ? var_1 : var_6)))) > (((((1 ? 24 : -616459229))) ? 26 : 237)));
    var_12 = ((var_1 > (max(((var_9 ? var_2 : var_2)), ((var_3 << (var_4 - 2117971533)))))));
    var_13 = ((((((((min(var_6, var_9)) + 2147483647)) << ((((12 ? 27486 : 1)) - 27486))))) ? ((((((var_0 + 2147483647) << (((var_6 + 97973810) - 5))))) ? ((max(var_8, var_8))) : ((var_3 ? var_3 : var_7)))) : (((((var_9 ? var_3 : var_8)) == ((63 ? 11154 : 3)))))));
    var_14 = ((-(var_7 == var_5)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = ((((((var_1 > var_3) ? ((var_8 ? var_4 : var_4)) : var_7))) ? ((((var_0 > var_0) == 43438))) : (((var_0 > var_4) ? ((max(var_1, 1))) : (var_2 > var_5)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((+(((var_5 > var_3) ? ((max(var_8, var_7))) : ((-1447711575 ? 1 : var_4))))));
                    var_17 += (((((min(var_7, var_7)))) > ((((((var_0 + 2147483647) << (var_4 - 2117971545)))) ? var_0 : (var_4 == var_3)))));
                }
            }
        }
        var_18 = ((-(var_7 / var_0)));
    }
    #pragma endscop
}
