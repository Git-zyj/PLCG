/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0] = var_15;
                    var_16 = (max(var_16, (arr_3 [8] [i_1] [i_2 - 1])));
                    var_17 = (((((((min(1, -1656439532))) ? (var_12 < var_0) : (((!(arr_0 [i_1] [i_0]))))))) && (1 != 0)));
                    arr_7 [i_0] [i_1] [i_0] [i_2 + 1] &= (max((((arr_1 [i_0] [i_2 + 1]) ? (arr_1 [i_1] [i_2 + 1]) : (arr_2 [i_0 + 1] [7]))), (((((1418267352 ? 1 : 0)) | (((arr_3 [i_0 + 1] [i_1] [i_1]) ? (arr_3 [i_0 + 1] [i_1] [i_2]) : 1)))))));
                }
            }
        }
    }
    var_18 = (1 || 243);
    var_19 = var_2;
    #pragma endscop
}
