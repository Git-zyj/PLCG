/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 *= ((3478008021662192415 ? 1 : 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = (((!1474574913) - (~-619969874)));
                    var_20 = (max(var_20, 9495866593940503829));
                    arr_8 [i_0] [10] [10] = 96;
                    arr_9 [17] [i_0] [i_0] = -107;
                }
            }
        }
        var_21 = (((3161474406187823551 >= 0) ? -3 : ((14230 ? -114 : 4294967295))));
    }
    var_22 = 0;
    #pragma endscop
}
