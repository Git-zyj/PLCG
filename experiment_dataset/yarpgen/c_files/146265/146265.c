/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((1 ? var_13 : 13)) ? var_3 : ((min(var_13, 1)))))));
    var_18 = (min(((~((15258549818612055134 ? 57060 : var_2)))), ((((var_2 || var_9) % 32767)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = (((arr_6 [i_0] [i_0]) % ((~(((var_2 && (arr_3 [i_0] [i_0]))))))));
                    var_20 = (((((var_15 ? (arr_0 [i_1]) : (min(-13532, -7821508765809291164))))) ? (arr_1 [13] [i_1]) : ((((((arr_5 [i_0] [i_1] [i_2]) ? 0 : (arr_8 [19] [i_0]))))))));
                    var_21 = (min(var_21, ((min((min((~1), ((min(var_0, (arr_2 [1])))))), ((min(var_1, var_11))))))));
                }
            }
        }
    }
    var_22 = ((((1 > var_8) ? ((min(94, 1))) : (~var_14))));
    var_23 = (min(var_6, (min((var_7 % var_10), var_15))));
    #pragma endscop
}
