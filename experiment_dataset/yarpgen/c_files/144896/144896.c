/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += 25767;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((((((((arr_1 [i_0]) >= var_0)))) + -var_16)) | (arr_1 [i_0])));
        arr_3 [i_0] = ((5051211548930017346 ? ((max(var_5, ((((arr_1 [i_0]) < 105)))))) : (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_19 = ((((max((arr_1 [i_1 - 1]), 34158))) / (arr_0 [6])));
        arr_6 [i_1 + 2] = (max(var_4, (((arr_1 [i_1 + 1]) ? ((~(arr_5 [i_1]))) : (((var_16 ? (arr_4 [i_1]) : (arr_1 [i_1]))))))));
        var_20 = ((arr_1 [i_1]) ? (((((max(var_15, 1629)) >= (((max(var_8, var_2)))))))) : (max(var_16, ((max(53493, var_11))))));
        var_21 -= 920647910431064214;
        var_22 &= (max((max((arr_0 [12]), 289)), (arr_4 [7])));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_23 = (max((max(286, 44742)), (max((20794 <= 44737), 40065))));
                arr_13 [i_2] [i_3] = (((((~var_3) & (((var_11 < (arr_8 [i_2]))))))) + ((~(arr_5 [i_2]))));
                arr_14 [i_2] [i_2] [i_3] = arr_10 [i_3];
            }
        }
    }
    var_24 = var_3;
    var_25 = ((((max((var_5 % -2050242520119523258), (var_14 <= var_0)))) ? (max(var_15, (var_10 - var_14))) : 54998));
    #pragma endscop
}
