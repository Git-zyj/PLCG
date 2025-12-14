/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = ((((~(max(var_6, var_1))))) ? ((((((min(var_9, var_3))) >= var_6)))) : (((~-9075537866091043349) ? (min(9075537866091043343, 1751844687)) : (((min(var_2, var_7)))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_16 += ((((var_5 > (arr_1 [i_0 + 1] [i_0]))) ? -var_3 : -var_11));
        arr_2 [i_0] = (arr_1 [i_0] [i_0 + 1]);
        arr_3 [i_0] = var_6;
        arr_4 [i_0] = ((1751844687 + ((9075537866091043343 ? var_0 : 14444631000589315236))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (i_1 % 2 == zero) ? ((((min(((((arr_6 [i_1]) && 1751844698))), -22711))) ? ((((min(var_8, (arr_6 [i_1])))) ? (((1751844687 << (((arr_5 [i_1]) - 3049932343))))) : 9075537866091043366)) : ((((((-(arr_0 [i_1]))) > (((min(-6222, var_13)))))))))) : ((((min(((((arr_6 [i_1]) && 1751844698))), -22711))) ? ((((min(var_8, (arr_6 [i_1])))) ? (((1751844687 << (((((arr_5 [i_1]) - 3049932343)) - 4086677659))))) : 9075537866091043366)) : ((((((-(arr_0 [i_1]))) > (((min(-6222, var_13))))))))));
        var_17 ^= (((((((~(arr_1 [i_1] [i_1])))) + 9223372036854775807)) >> (!2775196519)));
        arr_8 [i_1] = (arr_6 [i_1]);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_18 = (arr_14 [i_2] [i_2] [i_2]);
                    var_19 = (min(var_1, ((((min(-9075537866091043331, var_8))) ? (!0) : (3727948385 ^ var_10)))));
                }
            }
        }
        arr_15 [i_2] = -9075537866091043366;
        var_20 = ((var_13 || ((min((arr_1 [i_2] [i_2]), 3633608575)))));
    }
    #pragma endscop
}
