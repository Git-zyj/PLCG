/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((((min(var_13, (!-36))))) & ((-(var_1 & var_13))))))));
    var_17 = (min((min(72, 48109)), (((((min(9589, 42603))) != (var_14 < 17550536911401100377))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_0] = ((((!(min(0, var_13)))) ? (((-(!1003415454)))) : ((((arr_3 [i_0]) + 37869)))));
                    arr_9 [i_0] [i_0] [i_0] = (min(((4638205173109465685 ? 3272703594062397697 : 327932673)), 0));
                    arr_10 [i_0] [i_1] [i_0] = arr_0 [i_0];
                }
            }
        }
    }
    var_18 = ((((var_11 ? (!30) : var_5)) <= (var_9 * var_10)));
    var_19 = (min((-7880823192892675864 & var_1), -680443359));
    #pragma endscop
}
