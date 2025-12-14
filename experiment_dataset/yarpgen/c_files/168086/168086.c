/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((+(min((var_8 & 4948630361791424025), (var_2 ^ var_2)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_19 = ((-((max(((((arr_2 [i_0]) && 5403471690895062524))), (max(16384, var_17)))))));
        var_20 &= (max((((-(((arr_2 [i_0 + 1]) % var_4))))), 13438285961805591781));
        arr_3 [i_0] = ((((max((62 || var_14), (!var_8)))) <= (min(0, (((arr_0 [i_0 - 1]) ^ var_6))))));
        var_21 *= (min((max(((((arr_2 [i_0]) || (arr_2 [i_0 + 1])))), (~var_3))), (((3551428963 ^ (193 < 8529115563456332893))))));
        var_22 = ((((-((min(var_7, (arr_0 [i_0]))))))) & (((max(3073691387, 8529115563456332889)) >> (var_8 == -111334807))));
    }
    var_23 = (max((((~((max(79, var_1)))))), (~var_16)));
    var_24 *= (((!1099494850560) != ((-(-12710 | var_7)))));

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] = (((((-(min((arr_4 [i_1]), var_8))))) || (((max(var_4, var_16)) != (((var_6 >> (-1099494850561 + 1099494850579))))))));
        var_25 = (max((var_2 || var_13), var_12));
        arr_7 [i_1] = max(255, 146);
    }
    #pragma endscop
}
