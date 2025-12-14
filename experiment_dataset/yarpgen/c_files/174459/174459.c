/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_11, (max((max(var_2, var_13)), var_7))));
    var_20 = ((((var_11 ? 570315748940044097 : (((min(32329, 1)))))) < var_12));
    var_21 &= -569350856;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (((985172287 ? -17 : 569350830)));
                arr_5 [i_0] [i_0] = ((-(arr_2 [i_0] [i_1] [i_0])));
                arr_6 [i_0] [18] [i_1] = 0;
                arr_7 [i_0] [i_0] [i_1] = (max(((~(arr_0 [i_0]))), (4 * 4)));
            }
        }
    }
    var_22 = (min(-2590644465141446098, 33206));
    #pragma endscop
}
