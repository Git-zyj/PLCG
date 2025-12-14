/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(9046949730771882621, 9399794342937668995));
    var_14 -= var_10;
    var_15 = 9046949730771882621;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_16 += (23121 != 9399794342937668995);
        var_17 = (min(var_17, 110));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_18 = -26242;
        var_19 = (arr_3 [i_1] [i_1]);
    }
    #pragma endscop
}
