/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((65535 ? 6711461796157775313 : 6711461796157775293)));
        arr_4 [5] [i_0] = ((8304 << (((max(((var_7 ? -17340 : (arr_2 [3] [i_0]))), var_5)) - 79))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = (((((((3254504498 ? 833968740 : 7))) ? 2055393099 : 219)) << (((((arr_2 [i_1] [i_1]) << (65524 - 65518))) - 11304))));
        arr_8 [i_1] [i_1] |= (arr_1 [i_1] [i_1]);
        arr_9 [i_1] [i_1] = (((max(18442927654075134571, 23)) * (arr_0 [i_1])));
        var_13 += (max((max(((max((arr_2 [i_1] [i_1]), (arr_0 [i_1])))), -var_12)), ((min(var_2, 2278322797)))));
    }
    var_14 = var_2;
    var_15 = -2910118870;
    var_16 = min(((((-39 > var_1) ? var_3 : ((var_4 ? 764998949 : var_11))))), (max(var_7, var_4)));
    #pragma endscop
}
