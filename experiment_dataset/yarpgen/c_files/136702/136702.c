/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max(13494, ((11255272559272516656 ? var_5 : var_8))))) ? ((((var_4 ? var_11 : var_12)))) : var_8);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = ((-((((max(var_2, (arr_1 [i_0])))) & (max(827926089, 5080536138216205764))))));
                var_15 = var_0;
                var_16 = ((((((var_7 == (-32767 - 1))))) <= -var_3));
            }
        }
    }
    #pragma endscop
}
