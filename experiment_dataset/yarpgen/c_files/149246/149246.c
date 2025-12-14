/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-16 ? (((3628106934 ? 4095 : 68719474688))) : 0))) ? 3628106934 : 2613374425314413740));
    var_21 = ((((((((var_5 ? -722619292530665634 : var_10))) ? ((666860351 ? var_8 : var_14)) : (((var_2 ? var_19 : 89)))))) ? (((((var_5 ? var_1 : var_18))) ? (((var_6 ? var_12 : 0))) : ((var_2 ? var_1 : 2484375504)))) : ((((((17888 ? var_0 : var_12))) ? ((var_19 ? var_16 : 226)) : ((var_17 ? var_9 : 132)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    var_22 ^= ((((((((0 ? 3628106937 : 6144))) ? 89 : -5210671094423166115))) ? -19962 : 59392));
                    var_23 = ((((((((3650343987 ? (arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : 1))) ? ((2143997347 ? 2613374425314413723 : 2143997338)) : (((48 ? 3628106944 : 0)))))) ? ((((((2413777363389205076 ? 34359738368 : var_2))) ? (((var_1 ? 666860343 : var_12))) : (((arr_4 [i_1] [i_1] [3]) ? var_14 : (arr_2 [i_0] [i_0] [i_2])))))) : ((2432267857 ? (((3628106952 ? 115 : 0))) : ((-61 ? 2613374425314413706 : 62748))))));
                }
            }
        }
    }
    #pragma endscop
}
