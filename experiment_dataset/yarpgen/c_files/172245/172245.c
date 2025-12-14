/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_11 += (((22890 ? 32758 : (arr_1 [i_0]))));
                var_12 = (min(var_12, (arr_1 [i_1 + 1])));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 = ((!(arr_3 [i_0] [i_0])));
                            var_14 = (arr_7 [i_1]);
                        }
                    }
                }
                var_15 = (max(var_15, 32759));
            }
        }
    }
    var_16 = (max(var_16, (((!(((-var_10 ? (~var_0) : var_5))))))));
    #pragma endscop
}
