/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((-2147483647 - 1) < 2147483647))) < (((var_1 < (arr_0 [i_0])))));
        var_20 -= (((((var_2 < (arr_0 [i_0])))) < ((((-2147483647 - 1) < (arr_1 [i_0]))))));
        var_21 = ((((((-2147483647 - 1) < var_1))) < (32752 < 8311142908834041510)));
    }
    var_22 = (max(114, 1073741822));
    var_23 = (min((1 < 27190), (((((min(var_14, 52480)))) < (min(var_10, var_8))))));
    #pragma endscop
}
