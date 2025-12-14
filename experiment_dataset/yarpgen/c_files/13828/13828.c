/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = ((!((max((((var_3 ? (arr_5 [i_0] [i_1] [i_1] [i_2]) : var_19))), ((var_4 ? var_9 : var_3)))))));
                    var_21 = (max(var_21, (arr_3 [i_0] [7])));
                }
            }
        }
    }
    var_22 = (max(var_22, ((var_5 || ((!(((971279301 ? 1843078845 : 7072671525530605762)))))))));
    #pragma endscop
}
