/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((var_10 ? 1224702508 : 65535));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 6;i_2 += 1)
            {
                {
                    var_17 = (min((min(4300371473215884826, (1 | 13))), (((-((-(arr_1 [i_0] [1]))))))));
                    arr_7 [i_0] [0] [i_1] = 65507;
                    arr_8 [i_0] [i_0] [7] [i_1] = 1891;
                    var_18 = (min((811929925 == 65534), (14707 % 1)));
                }
            }
        }
    }
    var_19 = (((((var_9 ? (29 >= var_11) : 13148))) ? (((43045 & (-78 + 1)))) : ((var_7 ? ((var_8 ? 2305843009213693951 : var_5)) : var_6))));
    var_20 = (max(var_20, 1));
    #pragma endscop
}
