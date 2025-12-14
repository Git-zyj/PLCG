/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (16680499940189052962 ? (((var_3 || (1766244133520498676 && 103)))) : (((var_9 > (var_6 & 3615868482)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (!-126878243);
        arr_4 [i_0] [i_0] = ((+((var_5 ? 262112 : ((-1454721852 ? (arr_0 [i_0]) : 1))))));
        var_15 ^= (5049861525754479020 | 17138);
        var_16 = (min(var_16, 0));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_17 = (min(var_17, (arr_6 [i_1])));
            var_18 = min((((-1277774988 ? -11 : 3622941142))), (((((arr_0 [i_1]) ? (arr_10 [i_1] [i_2] [i_1]) : (arr_5 [i_2]))))));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_19 = 3054529307;
                        arr_17 [i_4] = arr_16 [i_1 + 1] [i_2] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_2];
                    }
                }
            }
        }
        var_20 = ((~(max((~var_3), (arr_12 [i_1 + 1])))));
        var_21 = (min((min((min((arr_5 [i_1]), (arr_5 [i_1]))), (arr_6 [i_1 + 2]))), ((((((1554480427 ? (arr_2 [i_1]) : (arr_0 [i_1 + 1])))) && (~1099511627520))))));
        arr_18 [i_1] = var_13;
    }
    #pragma endscop
}
