/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((!(((353358598 ? 38335 : 4294967295)))))), (~-1506714191)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = -2305843009213693888;
                arr_6 [i_0] [i_0] [i_0] = var_0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = 5211754974463971609;
                            var_18 = (max(var_18, (((-(max(0, -6280371561814098159)))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_7;
    #pragma endscop
}
