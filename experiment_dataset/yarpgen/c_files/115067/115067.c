/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((214923304 ^ (((4080044002 ? 127 : var_16)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (max((min((arr_3 [i_0 + 2]), ((((arr_4 [4] [4]) ? 501423911 : var_17))))), (((251 ? ((var_10 ? 2467790312 : (arr_6 [i_0] [i_1 - 2] [i_0]))) : var_3)))));
                var_21 |= (((max((-2147483647 - 1), 4080043988))) ? 1023702849 : 2913934839);

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_9 [i_0] [i_2] = (min((((-(var_11 || var_13)))), ((var_2 ? (arr_8 [i_2] [i_1] [i_1] [i_0]) : (arr_2 [i_0] [i_0 + 2])))));
                    arr_10 [i_0] [i_0] [i_2] = (((((((var_0 ? var_10 : 242))) ? 31 : ((-(arr_4 [i_0] [i_1 - 2])))))) | ((var_8 ? var_15 : (arr_2 [i_0 + 2] [i_2]))));
                }
                arr_11 [i_0] = min((!-110), (max(4080043993, -var_13)));
            }
        }
    }
    var_22 = ((var_12 ? (((((var_9 ? var_10 : 2))) ? (~var_2) : var_18)) : (((((var_4 || var_11) || var_15))))));
    var_23 = ((((55197 & ((122880 ? 1023 : 1023702859))))) + ((var_17 ? var_15 : var_2)));
    #pragma endscop
}
