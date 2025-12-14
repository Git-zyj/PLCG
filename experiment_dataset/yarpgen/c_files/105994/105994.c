/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        var_16 = ((((((arr_0 [i_0]) ? ((2592456892411708289 + (arr_1 [i_0]))) : -398120897))) ? (((arr_0 [i_0]) ? -var_10 : (((var_2 ? 1698019152 : 1))))) : (255 << 1)));
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? (((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))) != ((((arr_0 [i_0]) ? (arr_0 [i_0]) : 35184))))))) : ((((((arr_0 [i_0]) ^ (arr_1 [i_0])))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (((min(0, 16706))))))));
        var_17 = (min((min(10, (arr_1 [i_0]))), (((+((223 ? (arr_0 [i_0]) : 3907978938)))))));
        arr_3 [i_0] &= ((arr_1 [i_0]) && (6777885618503956160 == 63));
    }
    var_18 = (min(-179079227, 65516));
    var_19 = (min(var_7, (min(-10374, 125))));
    var_20 = var_13;
    #pragma endscop
}
