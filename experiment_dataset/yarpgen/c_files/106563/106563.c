/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_19 = (max(((max(1335844099, (min((arr_0 [i_0]), var_11))))), (min((var_16 | 1335844099), ((15118939188639490076 >> (-1335844100 + 1335844128)))))));
        var_20 = ((((3327804885070061539 < (10794827219004075969 - var_7))) ? (((-1 != (var_13 <= 54819)))) : ((((arr_1 [i_0 + 3] [i_0 + 3]) == ((var_16 | (arr_1 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_4 [i_1] [i_1] |= (((7651916854705475648 % -70) ? (arr_2 [i_1]) : ((((arr_2 [i_1]) != var_17)))));
        arr_5 [i_1] = ((var_2 * (arr_3 [i_1] [i_1])));
        arr_6 [i_1] = ((!(1595156303 / var_16)));
    }
    var_21 = max(((var_11 % (var_16 - var_3))), (((var_15 ? (10794827219004075964 && 3815833255) : -87))));

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = 3071204499;
        arr_10 [i_2] = (((((((-499577726 ? 207 : (arr_8 [i_2])))) % var_15)) == (((((var_12 / (-2147483647 - 1))) & (arr_8 [i_2]))))));
    }
    #pragma endscop
}
