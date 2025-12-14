/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_6 ? ((max(var_3, 402653184))) : (max(var_14, ((var_5 ? var_13 : 2049111175436725500)))))))));
    var_16 = ((var_4 - (((((max(var_13, var_9))) != ((min(0, var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min(((var_9 ? 15489202221036052148 : 17137782496579190516)), var_4));
                var_17 = ((-15890341455995411319 ? (max((max(2957541852673499471, var_0)), (max(-120868540, (arr_2 [i_0] [i_0] [i_0]))))) : 1));
                var_18 ^= ((-(arr_2 [i_1 - 3] [i_1 + 1] [i_1 - 3])));
                var_19 += (max((min((var_1 * var_6), ((max(var_8, var_13))))), (arr_3 [i_1 + 1])));
                arr_5 [i_0] [i_0] [i_0] = (((((var_10 ? var_4 : (arr_2 [i_1 - 1] [i_1] [i_1 - 2])))) ? var_8 : ((-(59 != 2957541852673499478)))));
            }
        }
    }
    #pragma endscop
}
