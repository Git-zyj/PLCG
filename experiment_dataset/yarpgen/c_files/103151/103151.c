/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = ((1 ? (((17437486153009681546 ? (((1 << (3928912550 - 3928912532)))) : var_3))) : -3040621708547134352));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_19 = (((arr_2 [i_1] [i_1] [i_0]) ? 18 : ((~((366054729 & (arr_0 [i_0])))))));
                            var_20 = (((((3928912572 ? 1 : (arr_1 [i_0] [i_0])))) ? 10976453659923680138 : 366054729));
                        }
                    }
                }
                var_21 &= min(var_9, 134217600);
                var_22 = (min(var_22, 3953302747));
                var_23 = (137997805 ? 3890586818 : 16777215);
            }
        }
    }
    var_24 = 3073687650;
    #pragma endscop
}
