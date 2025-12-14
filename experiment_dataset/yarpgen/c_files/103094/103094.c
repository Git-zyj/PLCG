/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!58748);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [2] [0] [i_1] &= (min(((432345564227567616 ? (arr_0 [i_0 - 1] [i_0 - 1]) : -432345564227567607)), (((65533 >> (((((-2147483647 - 1) - -2147483630)) + 33)))))));
                arr_8 [i_0] [i_0] [i_0] = (~822505939);
            }
        }
    }
    var_21 += ((-((((1 ? 9713306249877633056 : var_12))))));
    #pragma endscop
}
