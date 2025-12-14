/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_15 &= (((((var_3 ? 52127 : 32766))) ? (arr_2 [i_0] [12]) : var_10));
                var_16 = ((var_1 / ((max(var_3, (arr_0 [i_1 - 2]))))));
                arr_5 [i_0] [8] [9] &= ((((var_7 ? 129318606 : 32767))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            {
                var_17 = 29389;

                /* vectorizable */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_18 ^= ((1 ? ((((arr_8 [i_2]) == var_13))) : 134216704));
                    arr_15 [i_3] [i_2] [i_3] = (((~var_6) ? (((arr_6 [i_3] [13]) ? var_10 : 8649004801875405598)) : 2));
                    var_19 += 175499550;
                }
            }
        }
    }
    var_20 ^= ((789679524 ? (min(2060467005, ((1 ? 2547638939 : var_10)))) : 112));
    #pragma endscop
}
