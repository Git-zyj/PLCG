/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (max(-35701, ((+(((-127 - 1) ? var_9 : 5))))));
    var_16 = (~var_5);
    var_17 -= ((-16952 ? (min(var_14, var_13)) : 1));

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = -16952;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [i_3] = 18446744073709551611;
                        arr_14 [i_3] [i_1] = (!168);

                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            var_18 = 57;
                            var_19 |= var_2;
                            var_20 = ((-(arr_9 [i_0 - 4] [i_1 + 3] [i_4 - 3])));
                        }
                    }
                }
            }
        }
        arr_18 [i_0] = 1073741824;
        var_21 -= ((((max(61916, var_8))) ? (((max(168, 193)))) : var_3));
    }
    var_22 = 27657;
    #pragma endscop
}
