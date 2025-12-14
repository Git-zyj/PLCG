/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_1 [i_1 - 2]);
                arr_5 [i_0] = (arr_2 [i_0] [i_0] [i_1 + 3]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_16 = ((((min((((arr_3 [i_1 - 2] [i_1 - 2]) << (4282151832 - 4282151813))), (arr_8 [i_0])))) || ((((arr_2 [i_1 - 2] [i_1 + 2] [i_1 - 1]) ^ var_3)))));
                    var_17 = (max(var_17, (((var_4 ? ((((((arr_3 [i_0] [i_0]) | (arr_1 [i_0])))) ? (~9543166074597949634) : ((max(var_4, 450029333472921491))))) : ((min(((((arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1]) ? var_6 : 1))), (((arr_7 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 2]) ? 204 : var_0))))))))));
                    var_18 = (max((arr_0 [i_0 + 1]), ((var_9 ? (arr_8 [i_2]) : (max((arr_6 [i_0] [i_1] [i_2] [i_2]), (arr_3 [i_2] [i_2])))))));
                }
            }
        }
    }
    var_19 = (((((-(var_14 - 2147483626)))) - var_0));
    #pragma endscop
}
