/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_2] [18] [i_2] [i_0] = var_7;
                    var_15 = (((((var_9 ? 12092393230344803199 : ((18373555409769302351 ? 1044892706 : (arr_5 [i_0] [i_0])))))) == (((((var_9 ? 18446744073709551615 : 4294967295))) ? (!var_1) : (((arr_1 [i_0]) ? var_14 : -4486325581383345870))))));
                    arr_9 [i_0] [i_2] [i_2] = (((arr_6 [i_0]) && ((min((arr_6 [i_2]), var_4)))));
                    var_16 = ((((((max((arr_1 [i_0]), 1)) == (var_0 || 553059978)))) + ((((min(251, var_3))) >> (((var_11 % var_3) + 47))))));
                    var_17 &= ((((((arr_3 [i_2]) ? var_6 : var_3))) > 7514385819492674627));
                }
            }
        }
    }
    var_18 = (max(var_8, ((((((var_10 ? var_12 : -86))) && (((189552286 >> (var_1 - 3222746153965583084)))))))));
    #pragma endscop
}
