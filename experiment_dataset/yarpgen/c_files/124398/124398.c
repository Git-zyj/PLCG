/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 |= ((((min(((var_15 ? var_12 : var_6)), var_1))) ? ((((max(var_4, var_10))) ? var_13 : ((max(var_15, var_10))))) : var_2));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (((((8178463147952049627 ? 4294967287 : 11772971396108954997))) ? (max(var_7, 6395708)) : ((0 ? 2739839030 : (arr_9 [i_0 - 1])))));
                    var_20 = ((((min(9071460865320819562, 1555128291))) ? (max(16490912573510117140, 1003036950665200522)) : (((var_16 ? var_0 : 88)))));
                }
            }
        }
    }
    var_21 = ((576460202547609600 ? 102 : 4288571595));
    #pragma endscop
}
