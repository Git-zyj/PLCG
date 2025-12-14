/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min((min(128, 17451448556060672)), var_6))) ? var_8 : ((((min(var_3, var_2))) ? var_9 : 100663296))));
    var_13 = (min(var_13, ((((((2132189710136405045 && -17451448556060694) || (var_2 || 2315060408608911877))) ? var_11 : (((((var_6 || var_7) && (var_1 * var_9))))))))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_14 = ((((((arr_2 [i_0]) << (((((min(2315060408608911877, (arr_1 [i_0]))) + 2168312235009697585)) - 30))))) ? ((((arr_2 [i_0 + 2]) | ((~(arr_0 [i_0 + 3] [i_0])))))) : (((arr_3 [i_0]) ? 14636779292971381458 : (arr_2 [i_0 - 1])))));
        var_15 = var_9;
        arr_4 [i_0] = ((-(((arr_0 [i_0 + 2] [i_0 + 2]) / (arr_0 [i_0 - 1] [i_0 - 2])))));
        arr_5 [i_0] = (arr_3 [i_0]);
    }
    var_16 = var_11;
    #pragma endscop
}
