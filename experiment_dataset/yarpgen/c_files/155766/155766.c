/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((max(18446744073709551615, ((max((arr_0 [i_0] [i_0]), 0))))), ((min((min((arr_0 [i_0] [i_0]), 1)), 6733944964074581268)))));
        arr_3 [i_0] [i_0] = ((~(((1 || 1895993641) ? (min(8, 1)) : -4864343643711329407))));
    }
    var_11 = -var_9;
    var_12 = min(((min(((-731459121 ? var_9 : var_4)), var_6))), (max(var_8, 113)));
    var_13 = ((var_10 - (((28048 & 6219205585566809365) & 2798001595))));
    #pragma endscop
}
