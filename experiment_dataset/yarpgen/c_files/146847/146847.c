/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    {
                        var_16 = (((!var_5) ? ((((((((arr_3 [i_0] [i_0]) > -1710440157711423942))) < (arr_7 [i_2] [i_2]))))) : (min((arr_3 [i_0] [i_0]), (arr_3 [i_2] [i_1])))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((-(arr_8 [i_3 - 1] [i_3] [i_3] [i_3])));
                        var_17 = (1139967839 << (-20122 + 20127));
                        var_18 += var_1;
                        var_19 -= (min(3665638963, 12));
                    }
                }
            }
        }
        var_20 = (0 + ((min(((var_5 <= (arr_1 [i_0]))), var_10))));
    }
    var_21 = ((((var_6 ? var_1 : (max(1, 242205359)))) - (((((((3215798948 ? var_7 : var_15))) == (max(var_2, var_1))))))));
    #pragma endscop
}
