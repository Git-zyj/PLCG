/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -15;
        arr_3 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] = (((((((arr_4 [i_1]) * 19))) + (((arr_5 [i_1]) ? -2097911008712613985 : (arr_4 [i_1]))))) / (((var_11 ? var_6 : 153))));
        arr_7 [i_1] = (((~(((!(arr_5 [i_1])))))));
        var_14 |= (((((arr_4 [i_1]) <= (arr_4 [i_1]))) ? ((~(arr_5 [i_1]))) : ((~(arr_4 [i_1])))));
    }
    var_15 = (min(var_15, (((!((((((var_7 ? var_3 : var_5))) ? var_9 : ((var_13 ? -1355271069081183945 : 2195527362402148510))))))))));
    var_16 ^= ((-1 ? (((-127 - 1) ? (!var_10) : ((56762870 ? (-9223372036854775807 - 1) : -4611686018427387904)))) : var_10));
    var_17 = var_11;
    #pragma endscop
}
