/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(3758096384, 3758096368));
                arr_6 [i_0] [i_0] = ((1 << (((((var_9 && 3758096368) - (arr_2 [i_1] [9]))) + 41053))));
                arr_7 [i_0] [i_1] [i_0] = (max(-485132670, (+-1)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 6;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 7;i_3 += 1)
        {
            {
                arr_13 [i_2] = (~536870935);
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_12 ^= var_3;
                            arr_19 [i_2] [2] [i_2] [i_5] [i_5] = (2308888941 || var_10);
                            var_13 = (((arr_14 [i_2] [i_3 - 1]) - (max(9007199254740991, -1188283535))));
                        }
                    }
                }
            }
        }
    }
    var_14 = ((var_11 && ((((max(3758096361, -1610209483))) && ((max(3137920037287658697, var_10)))))));
    #pragma endscop
}
