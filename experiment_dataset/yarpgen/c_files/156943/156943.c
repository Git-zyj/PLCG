/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((min(var_5, (20452 >= 255))), (168 == var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = -var_0;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [5] [i_1] [9] = (min(-107, 103));
                            var_16 ^= (((3635062938061478466 & var_3) % ((((((min(var_5, 23265))) && var_11))))));
                            var_17 = (~2048);
                        }
                    }
                }
                arr_12 [i_0] = (((((((min(-4516314109658243000, 5029))) ? 5029 : 4516314109658242997))) && (((~((var_3 ? 40781 : -73)))))));
            }
        }
    }
    var_18 = (min(var_18, ((min(var_13, ((var_13 ? (!var_12) : var_8)))))));
    #pragma endscop
}
