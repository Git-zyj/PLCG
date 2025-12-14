/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = (((((~((8191 ? 13922305264118000124 : var_7))))) ? var_0 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [22] [i_0] [i_0] = max(var_5, ((-13313 ? (arr_0 [i_0] [i_0]) : (((1 ? 1 : 57395))))));
                arr_6 [i_0] [i_1] = ((~(arr_1 [i_0])));
                var_15 = (arr_1 [i_0]);
                arr_7 [i_0] [i_0] = (((arr_4 [i_0] [14] [i_0]) ? var_10 : ((87 ? 37683 : 1))));
                var_16 = ((var_8 ? (((arr_2 [5]) ? (arr_3 [i_1] [i_1] [i_0]) : (arr_3 [i_1] [i_1] [i_0]))) : ((~(arr_3 [i_0] [i_1] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_17 = (max(var_17, (((~(((16 ? 0 : -134217728))))))));
                var_18 += (((((var_3 ? (((arr_10 [23] [i_3]) ? var_7 : -7026583511936709654)) : (((var_4 ? (arr_11 [i_3] [i_2] [i_2]) : var_8)))))) ? 134217757 : (((1 ? 9437565478442263752 : (arr_12 [i_2]))))));
                var_19 = (min(var_19, (arr_12 [i_2])));
            }
        }
    }
    #pragma endscop
}
