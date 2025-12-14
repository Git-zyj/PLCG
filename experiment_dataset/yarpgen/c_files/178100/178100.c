/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~-1684154295);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((max(var_1, var_0)) == (~var_1)));
                arr_5 [i_1] [i_1] [i_1] = var_0;
                arr_6 [i_1] = ((var_1 ? (((33508 ? var_0 : 254))) : ((var_6 >> (var_2 - 2844122723)))));
                arr_7 [i_0] = ((((min(var_4, var_8))) ? (max(var_4, var_1)) : (((max(0, 65535))))));
                arr_8 [i_0] [i_0] [i_1] = (5330607325907454302 || var_0);
            }
        }
    }
    var_11 = var_8;
    #pragma endscop
}
