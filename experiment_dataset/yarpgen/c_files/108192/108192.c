/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (var_4 % 11463023460320371943)));
    var_17 += ((127 - (15 - 1461069939218720778)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 = var_6;
                            var_19 = var_11;
                            var_20 = (((var_9 || var_3) && var_11));
                        }
                    }
                }
                var_21 = ((((0 ? 2588930986488283997 : 1040074558363078729)) / 2047));
                var_22 = (max(var_22, (((4294967295 ? 14744693711635936736 : 4032)))));
            }
        }
    }
    var_23 = var_14;
    #pragma endscop
}
