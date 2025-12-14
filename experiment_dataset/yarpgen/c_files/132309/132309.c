/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = 18097;
                    var_18 = var_7;
                    var_19 += (((((var_11 ? var_3 : ((var_13 ? var_2 : var_0))))) ? ((3063490505 ? ((var_5 ? 15587262660341556695 : 3781292799)) : (((var_10 ? var_0 : var_5))))) : 15883389964870904916));
                    arr_10 [i_0] [i_0] [i_0] = 18446744073709551607;
                    var_20 += ((((((((3974373741 ? 18446744073709551606 : 0))) ? var_0 : ((var_13 ? var_10 : 15883389964870904904))))) ? 15883389964870904920 : (((var_0 ? var_2 : var_5)))));
                }
            }
        }
    }
    var_21 = var_10;
    #pragma endscop
}
