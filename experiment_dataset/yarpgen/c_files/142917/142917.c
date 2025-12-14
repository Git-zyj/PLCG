/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((max((((-(-32767 - 1)))), ((var_9 ? (-127 - 1) : 959986173))))), (-1323708442647325781 & var_16)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_19 = ((959986173 ? -1323708442647325782 : (-127 - 1)));
        arr_3 [i_0] [i_0] = ((-var_16 ? (~1323708442647325781) : var_11));
    }
    var_20 = 3;
    var_21 = ((~(min(var_13, ((1354272818 ? -1323708442647325762 : 959986173))))));
    #pragma endscop
}
