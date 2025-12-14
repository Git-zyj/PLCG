/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -4096;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = ((((max(-4096, (min(2824967863, 1))))) ? ((11717 ? -4119 : 12386)) : 60425));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_13 = var_6;
                            arr_9 [i_2] [i_1] [i_2] [i_3] = 4294967295;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                var_14 = (min(var_14, ((min(-12402, 2147483648)))));
                var_15 |= 1225768528;
            }
        }
    }
    #pragma endscop
}
