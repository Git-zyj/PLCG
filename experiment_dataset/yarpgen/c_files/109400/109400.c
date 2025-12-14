/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((((((var_12 ? var_5 : var_8)) >> (2312104618 - 2312104615))) >> (((max(16777215, (~4021906193))) - 273061093))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = var_17;
                    arr_10 [i_0 + 1] = 57255;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                {
                    var_21 |= (~1);
                    var_22 = (-(-var_1 || 4294967293));
                }
            }
        }
    }
    var_23 = 1598182608;
    var_24 = (((max(1274804075, 16087)) / -2147483638));
    #pragma endscop
}
