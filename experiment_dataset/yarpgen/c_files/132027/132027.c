/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((8 <= 74) | ((max(0, 11285))))) + (((((max(238, 1478881182))) > 3431345130526595139)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = min(65535, 65535);
                    var_12 = (min(var_12, (((!((255 > ((11 ? 125 : (arr_0 [i_0]))))))))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_3] [i_2] [12] = (min(var_4, (((((4294967291 ? 215 : 158))) ? (!-112) : (~24)))));
                        var_13 = (((((2147483647 ? (arr_7 [8] [i_2] [i_0 - 1] [i_0 - 1] [i_1]) : var_2))) ? ((min((10206219309541606043 == 120), 37))) : (max(2147483647, -9124))));
                        arr_11 [i_3] [i_2] [i_1] [i_0] = (((((!((((arr_2 [i_1] [4]) + var_1)))))) | -2147483637));
                    }
                }
            }
        }
    }
    var_14 = (((var_9 * (~9060101363314755147))));
    var_15 = ((!(232 + 125)));
    #pragma endscop
}
