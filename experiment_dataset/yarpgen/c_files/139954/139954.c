/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = -5188;

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_1] [9] = 18446744073709551594;
            var_20 = (-9223372036854775807 - 1);
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_9 [i_2] [1] = 10152743848612753637;
            arr_10 [i_2] = (-9223372036854775807 - 1);
        }
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            var_21 = 8294000225096797979;
            arr_13 [3] [3] [3] = 4;
            var_22 = 1;
        }
    }
    var_23 = var_10;
    #pragma endscop
}
