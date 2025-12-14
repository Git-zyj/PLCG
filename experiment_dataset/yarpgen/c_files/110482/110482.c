/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 *= ((((((9621124846486563410 << (1224 - 1201))) * ((((arr_1 [i_0] [i_0]) | var_2))))) - (((34 ? var_0 : ((var_4 ? var_0 : (arr_4 [i_0 - 2] [i_1] [i_2]))))))));
                    var_12 = -64;

                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        var_13 = ((arr_1 [i_0 + 1] [i_3 + 3]) ^ var_8);
                        arr_8 [i_0] = (arr_5 [i_0 + 1] [i_1] [i_2] [i_1]);
                        var_14 = (~(arr_3 [i_0 - 1] [2] [i_3]));
                        var_15 = -64;
                    }
                }
            }
        }
    }
    var_16 *= ((((min((var_3 > var_9), var_5))) ? ((((var_5 >> (12002 - 11946))))) : ((min((var_10 != var_4), var_8)))));
    #pragma endscop
}
