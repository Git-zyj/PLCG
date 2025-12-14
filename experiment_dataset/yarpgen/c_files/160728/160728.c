/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 80;
    var_13 = (max(var_13, ((max(((-((max(176, var_11))))), ((217 ? 173 : 104)))))));
    var_14 = 158;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = arr_5 [i_2] [i_2] [i_2];
                    var_16 = (min(var_16, (((105 ? (~var_11) : (((!(255 < 106)))))))));
                    var_17 = var_11;
                }
            }
        }
    }
    var_18 = ((((var_10 ? (!211) : 176)) | var_10));
    #pragma endscop
}
