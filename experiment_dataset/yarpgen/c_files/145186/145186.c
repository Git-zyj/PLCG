/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (238 && 0);

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = var_8;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_20 = (--104);
            arr_6 [i_0] = var_11;
        }
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_21 = ((((min(23455, 18))) == ((var_6 ? 23455 : 194))));
            arr_9 [i_0] = var_4;
            arr_10 [i_0] = (min((!var_5), ((-(var_1 % var_9)))));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_22 = (min((var_6 || 238), (max(var_4, var_15))));
            arr_13 [i_0] = ((~((var_6 & (~0)))));
            var_23 = var_7;
        }
        var_24 -= (((max((min(var_9, var_15)), ((min(var_13, 50655830))))) % (~var_9)));
        var_25 = (((((var_5 ? 17448772889621359933 : var_2))) ? -var_17 : ((var_11 ? var_15 : var_3))));
        arr_14 [i_0] = var_2;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_5] [i_6] [i_6] = (max(var_0, ((min(((17448772889621359950 ? var_16 : var_16)), var_11)))));
                    var_26 += (((((((var_5 ? var_5 : var_8))) ? (var_18 >= 34855) : var_0)) / (((((1 ? var_6 : var_11)) != (1766894239 ^ var_18))))));
                    var_27 = (max((var_7 / var_13), var_12));
                }
            }
        }
        var_28 -= (((min(var_10, var_17))) * (var_8 == var_14));
        var_29 = (max(var_29, ((((max(var_9, (((var_16 ? 1 : var_16))))) >> var_3)))));
        var_30 = (min(var_30, var_17));
    }
    #pragma endscop
}
