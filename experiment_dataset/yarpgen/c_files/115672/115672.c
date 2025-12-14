/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (((~((916854351 * ((4584704962549674150 ? 1 : 18446744073709551615)))))))));

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((max((!21), (11832 / 14656664179579386771))) >= (23 / 1));
                    arr_8 [i_0] [i_0] [i_2] [i_1] = (max(63417, 1));
                    var_22 = (((((~(max(53674, 1828778673))))) ? var_18 : 117));
                    var_23 = ((1 ? ((min(1, 20))) : (max(232, 916854325))));
                    var_24 = (max((((9977 ? -19 : 53721))), (min(1, (94 % 16643656412975845929)))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_13 [11] [i_3] [i_3] [11] = ((21 * ((((max(15431, 14255))) ? (((max(12303, 1)))) : -4228757886))));
                    var_25 = ((((min(1, 0))) && (((~((1 ? 1 : 0)))))));
                }
                arr_14 [i_0] [i_0] [i_0] = (max(127, (~16353707087857001190)));
            }
        }
    }
    var_26 = 40561;
    #pragma endscop
}
