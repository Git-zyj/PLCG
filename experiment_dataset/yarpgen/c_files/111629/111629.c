/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_0);
    var_14 ^= ((((((var_1 || 857621224) & (max(var_5, 63320865))))) || ((((!var_12) ? 865058830 : ((var_10 << (var_7 - 1528552569))))))));
    var_15 = ((((var_4 ? var_8 : var_2))) >> (var_10 - 2424322160));
    var_16 = (var_7 ? (((((var_12 ? var_3 : 267701993))) ? var_7 : var_11)) : var_6);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = arr_0 [i_1] [i_2];
                    var_18 = arr_4 [i_0] [i_0] [i_2] [i_2];
                    var_19 = (4294967295 ? (((((((865058830 ? 3146480427 : 3133094554))) || 3429908470)))) : 2308343280);
                }
            }
        }
    }
    #pragma endscop
}
