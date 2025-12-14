/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_1] = var_14;

                for (int i_2 = 4; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    var_15 = (max(var_15, var_2));
                    var_16 = max(var_3, -54674);
                    var_17 |= (565879863176916214 | 5581470923044535405);
                }
                for (int i_3 = 4; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    var_18 ^= (((((10343111910819421501 ? var_9 : (arr_9 [i_3 - 3])))) || (!var_3)));
                    var_19 = (max(14101202273206519430, (((((max(var_14, var_2))) && var_13)))));
                    var_20 = 14101202273206519430;
                }
            }
        }
    }
    var_21 = (max(var_21, var_14));
    #pragma endscop
}
