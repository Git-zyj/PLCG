/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_17 = (max(var_17, (~-7366260234842456560)));
        var_18 = (max(var_18, 1833983727));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_19 &= 991684909;
        arr_5 [i_1] |= ((0 ? 18014398509481983 : 9223372036854775807));
    }
    var_20 = (((((~((34359738367 ? 7964885940018758011 : 1152921504606846975))))) ? (((8048448945009778909 && ((min(134217696, var_7)))))) : (17182095072225851050 && 2147483627)));
    var_21 += (8048448945009778899 || var_16);
    #pragma endscop
}
