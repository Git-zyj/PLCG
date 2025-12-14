/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_16 && (!96)));
    var_19 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (max(((((max(15243, 545473459))) ? (((((arr_7 [2] [i_1] [i_2]) == (arr_0 [i_2]))))) : (((arr_7 [i_0] [i_1] [i_2]) ? var_2 : 545473459)))), (((!(((15243 ? 545473459 : (arr_7 [6] [6] [i_2])))))))));
                    var_20 = ((((-71 ? 19151 : var_16)) != (~var_6)));
                    var_21 = ((((min(var_0, 3749493843))) ? ((var_15 ? (~545473465) : var_11)) : (((~((3749493811 ? var_16 : var_16)))))));
                }
            }
        }
    }
    var_22 = (min((((var_17 % -8512050381889915326) ? (!var_9) : -var_0)), var_0));
    #pragma endscop
}
