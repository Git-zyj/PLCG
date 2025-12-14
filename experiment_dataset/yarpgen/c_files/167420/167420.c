/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (min(((~(max((arr_8 [i_0]), var_11)))), ((1781832765 - ((-98 ? var_0 : 101))))));
                    var_13 ^= ((-((max((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0 - 1] [i_0 - 1]))))));
                    var_14 = (arr_5 [i_0] [1] [1]);
                    var_15 = arr_1 [i_1] [4];
                    var_16 = ((-128473398924863751 ? 128473398924863750 : 5448283597121115064));
                }
            }
        }
    }
    var_17 = (min(var_17, (((~var_7) ? (max(30237, (max(var_4, var_11)))) : var_1))));
    var_18 = -194849907146099572;
    var_19 = max(var_2, ((((max(30234, var_3))) ? var_5 : var_4)));
    #pragma endscop
}
