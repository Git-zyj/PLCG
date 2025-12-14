/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = ((-(min((~75), -var_9))));
                var_14 = (max(16645, (arr_2 [i_0] [7])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_1] [i_0] = ((-((var_4 ? var_0 : 2416033869))));
                    var_15 = (((arr_1 [i_1]) != (-1782130578 ^ var_1)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_0] [i_0] = (((!8481) ^ (!var_5)));
                    var_16 &= -1;
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_17 ^= (438441808 ? (arr_0 [i_1]) : (max(-16645, ((65523 ? 18446744073709551615 : 101)))));
                    arr_14 [i_0] [i_1] [i_0] = ((!((((((var_5 ? var_9 : (arr_4 [i_0])))) ? (~var_8) : (min(25, var_6)))))));
                }
            }
        }
    }
    #pragma endscop
}
