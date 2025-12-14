/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((max((((var_0 ? var_14 : 1))), ((16128 ? var_17 : var_11)))))));
    var_19 += (((var_10 + 2147483647) >> 1));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (((((max(((1 ? (-32767 - 1) : (arr_1 [i_0]))), ((max(32767, 224)))))) ? (((var_3 % ((min(-32755, -11)))))) : ((min(12270965031750055714, 1))))))));
        var_21 = (arr_0 [i_0]);
        var_22 = (min(var_22, (1 / 64)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_23 = ((-19091 ? ((-2427 ? (((-(arr_0 [i_1])))) : (arr_1 [i_1]))) : ((max(64098, (arr_5 [i_1]))))));
        var_24 *= (min((1 * 8054636596965994556), (((!((max(0, 1610612736))))))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_9 [1] [i_2] |= min(((max((var_15 || 1), (!1)))), (((((var_12 ? var_10 : 224))) ? ((~(arr_2 [i_2]))) : (arr_2 [i_2]))));
        var_25 = (max(var_25, 1152921504606715904));
        var_26 *= (max(-var_1, (min((arr_4 [i_2] [i_2]), (arr_0 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_27 *= ((~((((min(-16, var_13))) ? 15 : (arr_10 [i_3])))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    {
                        var_28 = (min(var_28, 0));
                        var_29 = (min(var_29, 1));
                        var_30 = (min(var_30, (((var_16 && (((((min(var_4, 402653184))) ? 489064791 : var_9))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
