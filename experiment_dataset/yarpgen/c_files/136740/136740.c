/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (((max(5871316317641409674, (arr_0 [i_0]))) - 1));
        arr_5 [i_0] = ((-1 ? ((((arr_1 [i_0]) >= ((min(var_7, 1)))))) : (max(var_13, (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (min(((((arr_2 [i_1]) ? 13977 : (var_12 / 7416868794281855393)))), ((((max(576460748008456192, (arr_1 [i_1])))) ? (((1 ? (arr_0 [i_1]) : var_7))) : ((9901535652428560680 ? 18446744073709551615 : 0))))));
        arr_9 [2] [i_1] = 1;
    }
    var_19 &= (((!1) ? var_8 : (((-7587637029992754382 <= var_12) >> var_3))));

    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_20 = ((~(arr_11 [i_2 + 1])));
        var_21 -= var_3;
    }
    var_22 = (min((((var_2 ? 36639 : 7680))), ((-4 ? (1668575507290086795 & 1) : 2))));
    var_23 = (((-(!var_3))));
    #pragma endscop
}
