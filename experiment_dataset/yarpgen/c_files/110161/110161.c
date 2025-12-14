/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((-((2892574619 ? var_16 : -7174711377464259112))))))));
    var_20 = var_11;
    var_21 = (max(var_21, (((((min(((var_5 << (var_5 - 285590005))), var_0))) ? ((((var_2 - 45972) < var_12))) : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (max(((-(arr_4 [i_1] [i_0]))), (((!(((16 << (21773 - 21773)))))))));
                var_22 = ((-21773 ? -64 : 300364393));
                var_23 = (min(var_23, (!11606843162722489115)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_2] [i_0] [i_3] = (!-88);
                            var_24 += ((8850519296819056857 ? (((88 / -7127860554612044808) ? (arr_11 [18] [2] [i_1] [i_3]) : 7477368491823301207)) : var_14));
                        }
                    }
                }
            }
        }
    }
    var_25 = var_4;
    #pragma endscop
}
