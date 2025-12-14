/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [2] [4] &= ((-(max(489, (arr_1 [i_0] [6])))));
        arr_3 [i_0] = 145;
        var_18 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 = var_11;
        arr_7 [i_1] [i_1] = (((((arr_6 [i_1] [9]) <= ((8553749987358980369 ? (arr_5 [i_1]) : (arr_4 [i_1]))))) ? ((((((arr_6 [i_1] [i_1]) - 9892994086350571261))) ? (min(288229826395897856, 183485639403993081)) : (((((arr_6 [i_1] [i_1]) != (arr_5 [i_1]))))))) : (((((arr_4 [i_1]) == -485308249434913364))))));
        arr_8 [i_1] = (var_12 / 480846315);
    }
    var_20 -= ((((max(var_14, ((var_2 ? var_12 : 9892994086350571252))))) ? (((((var_2 * 56472) > var_9)))) : (max((((var_4 ? 105 : 3845328343))), ((4130735298537285306 >> (1626254120708730703 - 1626254120708730665)))))));
    var_21 += var_12;
    var_22 = (min(var_22, var_14));
    #pragma endscop
}
