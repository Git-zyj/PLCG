/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (!var_2)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -7275641794943536031;
        var_19 ^= var_17;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                arr_10 [i_2] [i_1] [i_1] = ((((!(arr_5 [i_2]))) ? ((~(~var_2))) : ((((!(((var_8 ? var_11 : var_8)))))))));
                var_20 = (max(((max((arr_6 [i_2] [i_1]), var_7))), var_17));
                arr_11 [i_2] = (((min(((9007199254740991 ? 86 : -7275641794943536031)), 7275641794943536031)) & (((((min((arr_5 [i_2]), (arr_6 [i_1] [i_2])))) ? var_3 : var_0)))));
                var_21 = (arr_9 [i_2] [i_2]);
            }
        }
    }
    var_22 = (max(var_22, (((var_12 & (!var_2))))));
    var_23 = (max(var_3, var_9));
    #pragma endscop
}
