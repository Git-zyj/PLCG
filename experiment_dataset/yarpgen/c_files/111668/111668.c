/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 *= ((var_0 * ((((18 < (14216589216989776969 % 19131)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = ((((min(var_4, (max(7806997342744647560, var_7))))) ? ((max(-745364898, 5))) : (max((~var_2), (min((arr_5 [i_2 + 3] [i_2] [i_2]), var_5))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (arr_3 [i_0] [i_1]);
                    var_14 = ((+(max((arr_3 [i_0] [i_1]), (arr_1 [20] [2])))));
                }
            }
        }
    }
    #pragma endscop
}
