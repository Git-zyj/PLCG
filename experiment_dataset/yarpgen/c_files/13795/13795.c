/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_1;
    var_19 &= 18864;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_20 = (min(var_20, ((min(((max(var_15, var_1))), (~-32746))))));
        arr_3 [i_0] [i_0 + 3] &= (min(((min((arr_2 [i_0 + 2] [i_0 + 2]), (arr_1 [i_0 + 3])))), (max(var_6, (arr_2 [i_0] [i_0])))));
        var_21 &= min(((~(~var_0))), (((max(0, 1919)))));
        var_22 = (max(var_22, ((min((min(-var_10, ((4847619182009906096 ? 1 : 45984)))), (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_23 = (min(var_23, ((min(((~(min(-6447981609172527787, 31581)))), ((min((arr_4 [i_1]), (arr_4 [i_1])))))))));
        var_24 = (min(var_24, (((~(max(((min((arr_4 [i_1]), var_8))), (min(var_0, var_6)))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_25 &= var_15;
        arr_8 [4] [4] &= (~-var_3);
    }
    var_26 = (min(var_26, -var_12));
    var_27 = (max(var_27, (min((min(4847619182009906096, -4847619182009906097)), (((var_14 ? -var_13 : (max(var_3, var_12)))))))));
    #pragma endscop
}
