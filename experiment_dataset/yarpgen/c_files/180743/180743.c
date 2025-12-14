/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_14 ? 45 : var_1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [16] [16] &= var_18;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = (!4881);
                    var_21 &= ((arr_3 [i_2] [i_1] [i_0]) ? -9395 : -8192);
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((((((arr_4 [i_0]) ? (arr_3 [i_2] [i_2] [i_2]) : (arr_4 [i_0])))) ? -4881 : 127));
                    var_22 = (((arr_0 [i_0] [i_0]) ? (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : (((((arr_0 [i_0] [i_0]) || (arr_0 [i_0] [3])))))));
                }
            }
        }
    }
    #pragma endscop
}
