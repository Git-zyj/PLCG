/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 = (((2319966242 * 18437736874454810624) * (((-1874915601 ? (~var_9) : (((max(var_5, 48283)))))))));
        var_11 = 18437736874454810620;
        arr_2 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [1] [i_1] = (var_0 & -4294967294);
                    arr_12 [0] [i_2] [i_2] [i_1] = (arr_10 [6] [i_2] [i_3]);
                }
            }
        }
    }
    var_12 = var_7;
    var_13 = ((var_2 ? var_0 : var_0));
    #pragma endscop
}
