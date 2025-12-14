/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [1] [i_0] [1] = (52121 | 16256);
                var_12 = (910048893 < 1);
                arr_6 [6] [i_0] [i_1] = ((((((-52 + 2147483647) >> (((min(2225746457, 1168164343)) - 1168164335))))) ? (~-6) : (((~0) ? ((-910048893 ? 3181322663 : -8678685399452376729)) : (!4294967295)))));
                arr_7 [i_0] = -910048893;
            }
        }
    }
    var_13 = (min(0, (min(var_9, -910048894))));
    var_14 = ((!(~0)));
    var_15 = var_1;
    #pragma endscop
}
