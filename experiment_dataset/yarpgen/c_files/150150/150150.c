/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_7 | (max(4194303, 1))));
    var_12 = var_9;
    var_13 = (((-(var_8 && 11076588709523266570))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (((-(arr_1 [i_0]))));
        arr_4 [i_0] = (~7370155364186285045);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = 7370155364186285046;
        arr_9 [i_1] = ((-539948818439783759 ? 1495955366 : 7370155364186285046));
    }
    var_15 = var_4;
    #pragma endscop
}
