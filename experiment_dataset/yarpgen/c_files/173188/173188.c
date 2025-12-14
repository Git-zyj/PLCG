/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((((((74 ? var_3 : 31454))) ? ((39 >> (var_7 - 4541637529551186125))) : (var_0 <= 15730)))), (((var_3 | -2006449482333612156) ? (((min(var_9, -8810)))) : (10362374056452552150 / 1)))));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_16 = (((arr_2 [i_0]) ? (min((arr_1 [i_0]), ((10186039408707921319 | (arr_2 [i_0]))))) : ((((((arr_2 [i_0]) / 38)) | 1)))));
        arr_3 [i_0] = -1556001383787311645;
        arr_4 [i_0] = (min((((((min((arr_2 [i_0]), (arr_1 [i_0])))) ? 8280 : ((-548664602 ? 1 : var_10))))), (arr_1 [i_0])));
        arr_5 [i_0] = (max((((arr_2 [i_0]) ? (arr_2 [i_0]) : -60)), (arr_2 [i_0])));
        arr_6 [2] [2] |= (max(((((((arr_1 [10]) >= (arr_2 [6]))) || (arr_0 [i_0] [0])))), 57256));
    }
    var_17 = ((((((((max(200, var_12))) || (var_3 == var_0))))) < var_0));
    var_18 = ((var_5 ? 99 : (((((13796973329479861445 ? var_13 : 1))) ? var_14 : (max(var_5, 1))))));
    var_19 = ((!(((var_7 ? (min(var_7, 36211436)) : (max(var_6, var_7)))))));
    #pragma endscop
}
