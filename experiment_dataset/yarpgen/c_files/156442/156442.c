/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 6063375197449807228;
    var_17 = (min(var_12, var_13));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = 6063375197449807228;
                var_18 = (min(var_18, ((min(((min((var_2 || -6063375197449807228), ((var_5 ? (arr_1 [i_1]) : var_6))))), (min(((min(var_4, (arr_3 [i_1] [i_0 - 3])))), (min(var_14, -28794)))))))));
                arr_5 [i_1] [i_0] [i_1] = ((((min(-1152865933, ((-6063375197449807228 ? -1152865958 : 2019343485658637142))))) ? (min(-6063375197449807228, (arr_2 [i_1] [i_1] [i_0 + 1]))) : -var_5));
            }
        }
    }
    var_19 = var_4;
    var_20 = ((((9208 > ((var_5 ? var_3 : var_2)))) ? var_6 : ((var_9 ? 4294836224 : -1152865913))));
    #pragma endscop
}
