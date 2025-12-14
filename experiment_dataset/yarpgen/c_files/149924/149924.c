/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [1] [i_1] [i_0] = (((!10847) ? -1652477797 : 40935));
                arr_7 [i_0] = ((10849 ? 78 : -1652477781));
            }
        }
    }
    var_12 -= ((!((max(12288, ((var_7 ? var_5 : var_2)))))));
    var_13 -= (!1652477807);

    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        arr_11 [i_2 - 2] = (((~(((arr_2 [4]) / (arr_3 [i_2] [12]))))));
        arr_12 [i_2] [i_2] = (max((((((((arr_3 [i_2] [i_2]) >> (-1288539417950316675 + 1288539417950316690)))) ? ((1652477807 >> (((arr_5 [i_2 + 4] [i_2 + 4]) + 998524829)))) : (arr_0 [i_2 + 4] [i_2 - 2])))), (((((var_5 * (arr_1 [8])))) ? ((var_9 ? 2679850924 : var_4)) : 54884))));
        var_14 = (min(var_14, (((0 ? (arr_10 [i_2]) : ((max(1, (arr_2 [20])))))))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_15 ^= min((((!((max(4294967295, (arr_3 [i_3] [i_3]))))))), (min(65535, 2)));
        arr_15 [i_3] [i_3] = (4294967295 ? ((((arr_4 [i_3] [i_3] [i_3]) - (255 + -11132)))) : ((-9 ? var_3 : var_1)));
    }
    var_16 = var_5;
    #pragma endscop
}
