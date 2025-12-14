/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((((((16587834014348700404 || 16587834014348700417) ? (max((arr_2 [i_0] [i_1]), 16587834014348700417)) : 16587834014348700410))) ? (min((min(-80, 2915375923779723045)), (((arr_0 [4] [i_1]) ? 4520495093309421826 : var_9)))) : 72))));
                var_12 = min(((((arr_4 [i_0] [i_1] [i_1]) || (arr_4 [i_0] [i_0] [i_1])))), (min((arr_4 [i_0] [i_0] [i_0]), var_2)));
                var_13 -= ((((((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [5]) : (arr_2 [i_0] [i_1])))) * (max((var_0 / var_1), ((268419072 / (arr_0 [i_0] [i_0])))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_14 = (((((1051190415 ? (arr_4 [i_2] [i_2] [i_2]) : (min(128, var_7))))) ? (228 != 3744) : ((1858910059360851209 ? 16587834014348700395 : 15531368149929828570))));
        arr_9 [7] [i_2] &= (arr_0 [i_2] [i_2]);
    }
    var_15 += max(((var_4 ? ((var_8 ? var_9 : var_2)) : var_4)), (min(((var_0 ? 1858910059360851225 : var_2)), 1)));
    var_16 = (min(-1, -120));
    #pragma endscop
}
