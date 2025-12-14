/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!((min((~var_8), (((var_0 ? var_2 : var_1))))))));
    var_15 &= ((-((var_7 ? ((var_4 ? 8289544414122027969 : var_9)) : ((((-32767 - 1) / var_13)))))));
    var_16 = ((((((1129193611 * -53) * (-32767 - 1)))) ? -var_4 : ((-((var_5 ? var_11 : var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = ((((min(((min(38, (-32767 - 1)))), ((var_6 << (var_0 - 3573761934208400988)))))) && (((3794920908691021004 % (arr_3 [i_0 + 3]))))));
                var_18 = (min(var_18, 12196));
            }
        }
    }
    #pragma endscop
}
