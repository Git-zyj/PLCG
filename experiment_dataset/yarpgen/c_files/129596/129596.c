/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_1 % 65535);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (min(var_16, ((((((var_3 == var_4) ^ ((var_1 ? -8245937065654937002 : var_8)))) >> (((((var_13 - var_9) | ((63675 ? var_0 : -18)))) - 7709599567802989399)))))));
        arr_3 [i_0] = (((((143 ? -1 : 113))) ? (min(1, 55)) : (((var_7 << (var_3 - 3081746475))))));
        var_17 -= ((((~(min(1330343959, 42887)))) > (((((2026073242 ? 44972 : var_3))) ? var_5 : (2026073242 || var_7)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_2] = (max(((min(var_11, var_7))), (((-2147483638 || (((var_6 ? -1 : 2610263150152263988))))))));
                var_18 &= (((((((var_4 ? var_0 : var_14)) == (var_1 <= 32)))) <= (max(((630646916 ? var_10 : var_6)), 642451594))));
                arr_10 [i_1] [i_1] [0] = var_7;
                var_19 = (42878 / (min((255 != 7), 14976970045078146147)));
            }
        }
    }
    #pragma endscop
}
