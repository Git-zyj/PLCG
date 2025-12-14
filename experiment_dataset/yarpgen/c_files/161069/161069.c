/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (~var_15)));
    var_17 = var_12;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = 4294967284;
        arr_5 [i_0] = (max((((((min(var_2, var_13))) ? 138 : ((var_9 ? -9223372036854775798 : var_10))))), 1025351406680882095));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_18 -= 0;
        arr_10 [i_1] [i_1] = ((-(min(111, 2847890503))));
        var_19 = (min(var_19, ((55 ? 133 : ((var_13 ? var_5 : 8883268429428716758))))));
        arr_11 [i_1] [i_1] = 10117583051215134940;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] = (((((-66 ? 51 : 0))) ? 118 : -83));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_25 [i_2] = 11035667755891397769;
                        var_20 = var_1;
                        var_21 = (min(-1, (max(var_10, var_8))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
