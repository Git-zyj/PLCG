/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 3;
    var_12 -= var_3;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_13 = (max(var_13, var_3));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_0] [i_0] [i_0]);
                    arr_9 [i_0] [i_0] [i_2] = (i_0 % 2 == 0) ? ((((max((min(3369777022, 3894037802556276216)), 14622)) << (((arr_5 [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 1]) - 3903042727))))) : ((((max((min(3369777022, 3894037802556276216)), 14622)) << (((((arr_5 [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 1]) - 3903042727)) - 2293891929)))));
                }
            }
        }
        var_14 = 17529845253086555891;
    }
    var_15 = var_9;
    #pragma endscop
}
