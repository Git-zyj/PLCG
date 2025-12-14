/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(2858717616, (max((max(var_13, var_15)), var_4))));
    var_19 ^= ((var_13 ? (((((var_4 ? 0 : var_11))) ? ((var_10 ? var_7 : var_3)) : (var_8 / var_17))) : (((((var_8 ? var_6 : var_11)))))));
    var_20 = (((min((((var_0 ? var_17 : var_6))), ((127 ? 5493419884153193007 : 7858857704246103132)))) * ((max((var_15 & 127), var_11)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((~((var_14 ? var_13 : (arr_4 [i_1] [i_1] [9])))));
                    var_21 ^= ((arr_0 [4]) % (arr_5 [i_0] [i_1] [4]));
                    arr_9 [i_0] [i_1] [i_2] = ((((((arr_3 [i_0] [i_1]) ? var_14 : 5493419884153192995))) ? (var_3 * 1436249707) : 2858717601));
                }
            }
        }
        arr_10 [i_0] = var_10;
    }
    #pragma endscop
}
