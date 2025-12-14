/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = 1;
                    arr_8 [10] [i_1] [i_1] [i_2] &= (min((!123), (min(123, ((3804425147 ? -123 : 2229451443360650544))))));
                    arr_9 [i_0] [i_0] [i_1] [i_0] = 16217292630348901083;
                    var_18 = (max(var_18, 9));
                }
            }
        }
    }
    var_19 = var_12;
    var_20 = ((!(((-21676 ? ((max(var_2, 255))) : 4483835416721418382)))));
    #pragma endscop
}
