/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((-((~((-1566495539 ? 0 : 5697793736749990484))))));
                var_19 = (max(var_19, (((~(min((arr_1 [i_0] [i_0]), (min(536870912, (arr_2 [i_0] [i_0]))))))))));
                arr_7 [i_0] [i_1] = ((-(((arr_3 [i_1]) ? ((min(1, 1))) : 948286417))));
            }
        }
    }
    var_20 = (max(var_16, ((((var_3 * var_7) || var_8)))));
    #pragma endscop
}
