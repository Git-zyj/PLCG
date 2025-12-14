/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (((var_2 != var_5) & var_10));
        arr_5 [i_0] [17] = ((max(1245048196, 51)) <= (((~(max(var_2, var_10))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_11 = (min(var_11, 204));
        var_12 |= var_10;
        arr_8 [i_1] = (max(7922323857280956752, -20935));
        arr_9 [i_1] = ((10524420216428594863 ? (((max((var_10 == -1231510388), (!var_3))))) : (((var_7 % var_9) + (min(var_5, 3826854425))))));
    }
    var_13 = (min(var_8, ((((var_2 || var_3) || (1979391203 || var_7))))));
    var_14 |= (min((((var_4 <= var_8) ? (6394 / 200) : var_4)), (var_1 > var_6)));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_12 [8] = ((var_9 ? (((-859746606 ? var_8 : -25063))) : (var_9 * var_7)));
        var_15 -= ((1998124543 ? 0 : 121));
    }
    #pragma endscop
}
