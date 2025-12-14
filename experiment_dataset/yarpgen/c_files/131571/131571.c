/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((((((arr_5 [i_0] [i_1] [i_2]) ? 48229 : (~var_12))) != ((-(arr_1 [14]))))))));
                    arr_11 [i_0] [10] [i_0] = (min((max((arr_3 [i_2 - 2]), (!4))), ((min(18014398509481983, (max((arr_10 [i_0] [i_1] [i_0] [i_0]), var_8)))))));
                }
            }
        }
    }
    var_17 = 18446744073709551612;
    #pragma endscop
}
