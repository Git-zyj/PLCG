/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_17 = (min(var_17, (((((((min(var_13, (arr_0 [i_0])))) ? (!var_3) : var_13)) >> (5440970039267536946 - 5440970039267536936))))));
        var_18 = 1;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_19 = ((((arr_5 [i_1] [i_1]) ? var_11 : 11028)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_20 = (65535 || 7127929069828211928);
                    var_21 = 1;
                }
            }
        }
    }
    var_22 = (max(var_22, var_9));
    var_23 = -var_9;
    var_24 = (((min(1, -52923))) ? ((max((var_5 < var_16), var_13))) : (min(2242770743745108072, ((max(var_12, var_5))))));
    var_25 = ((var_13 <= -42) ? var_13 : (min(var_8, (((54495 ? var_12 : var_1))))));
    #pragma endscop
}
