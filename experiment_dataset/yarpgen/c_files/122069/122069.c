/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_4));
    var_13 ^= 14444756943604198540;

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_14 = ((var_6 < (((10266896051618232705 ? var_8 : var_8)))));
        var_15 = (max(var_15, ((min(((!(arr_1 [i_0]))), (((arr_2 [i_0] [i_0 + 2]) && (arr_0 [i_0 + 2] [i_0 + 2]))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = ((((var_9 + (arr_2 [i_0 + 1] [i_2 - 2]))) + 47690));
                    var_17 = 3709288263361049887;
                }
            }
        }
        arr_8 [i_0] [i_0 - 1] = (((676 ? 18446744073709551615 : 3709288263361049887)));
    }
    for (int i_3 = 3; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = ((~((54270 ? 1593813759 : 75))));
        var_18 = (61575 ^ 14444756943604198540);
    }
    for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = ((6553902190136622744 ? 29076 : 7104482553422858804));
        var_19 *= 15352;
        var_20 = (min(var_20, -var_7));
    }
    #pragma endscop
}
