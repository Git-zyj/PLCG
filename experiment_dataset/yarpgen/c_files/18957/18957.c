/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 536870911;
    var_16 = 3024982321;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((min((arr_1 [i_0]), (min(22, 1073741824))))))));
                var_18 -= 1358723694;
                arr_4 [14] [i_1] [i_1] = ((-29841 == ((18446744073709551607 ? 18446744073709551604 : 3))));
                var_19 = (arr_0 [5] [1]);
            }
        }
    }
    #pragma endscop
}
