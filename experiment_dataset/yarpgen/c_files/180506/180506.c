/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_1 ? (((((-8192 & 112) != (!1))))) : (((((var_8 ? var_3 : var_0))) ? var_2 : var_0))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0]) ? var_0 : 21013));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = (min(var_13, (((((min((max((arr_2 [i_0] [8] [i_0]), var_5)), (arr_4 [i_1])))) ^ ((~(max(2490678050055769576, -105)))))))));
            var_14 = var_5;
        }
        var_15 = (max((((arr_0 [i_0 - 1]) ? (max(-6605898243647575795, 36697)) : (arr_3 [i_0] [i_0]))), (((var_9 < (((arr_0 [i_0 + 3]) ? var_0 : (arr_0 [17]))))))));
        var_16 = (min((arr_0 [i_0]), ((~(arr_4 [i_0])))));
    }
    var_17 &= ((~(min(((var_0 ? var_8 : var_5)), ((var_0 ? var_6 : var_9))))));
    #pragma endscop
}
