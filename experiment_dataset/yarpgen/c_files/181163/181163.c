/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(((var_11 < 1) - ((var_13 ? 3071625832 : 1579834244))))));
    var_18 = ((var_16 ? (((~((max(1, var_4)))))) : (max(-var_0, -768647598836773359))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    var_19 = (((min(-768647598836773374, 1)) * (((((((max(var_9, var_9)))) <= (min(var_10, var_6))))))));
                    arr_6 [i_0 - 1] [i_1] = (((~(1073741823 & var_8))));
                    var_20 = 1586699333;
                    var_21 = (arr_5 [i_0] [i_0 - 1] [i_0] [i_0 - 1]);
                }
                var_22 = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
