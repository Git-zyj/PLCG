/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_9;
    var_13 *= (min(-1183117257, (((((max(var_8, 683614721))) && (!var_9))))));
    var_14 ^= var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [4] [i_1] [i_1] |= (min(((var_4 - (arr_5 [13] [i_1] [i_0]))), ((-64 ? var_3 : (73 == -63)))));
                arr_7 [i_0] [i_1] [i_1] = (-33 + -17433429611005133541);
                arr_8 [i_1] [i_1] = (min(-var_3, -32739));
            }
        }
    }
    #pragma endscop
}
