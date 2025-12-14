/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (max(1, ((2141349799 ? 2153617497 : 2153617497))));
                    var_19 = (min(55, -6798));
                    var_20 = (((arr_6 [i_0] [i_1] [i_2 + 1] [i_2]) ? var_7 : (((min((arr_2 [0] [0] [i_0]), (arr_6 [i_0] [i_1] [i_0] [i_0])))))));
                    arr_7 [i_2 + 2] [i_0] [i_2 + 2] [i_2] = 4294967277;
                    var_21 = (arr_3 [i_0] [i_1]);
                }
            }
        }
    }
    var_22 = ((var_13 - ((31422 ? (min(var_8, var_10)) : ((var_14 ? var_1 : var_3))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            {
                var_23 *= var_7;
                var_24 = (max(var_24, (((~(((arr_9 [i_4 + 1] [i_4 - 2]) ? (arr_9 [i_4 - 1] [i_4 - 2]) : (arr_9 [i_4 - 2] [i_4 - 1]))))))));
                var_25 += (((((-6806 == 4294967271) != (arr_6 [i_3] [i_3] [i_4] [3]))) ? ((((((min(var_9, var_4))) >= (var_17 || 2153617496))))) : (((((-1 ? var_16 : 28242))) ? ((var_6 ^ (arr_6 [i_3] [i_3] [i_4] [i_4]))) : 111))));
            }
        }
    }
    var_26 = var_13;
    #pragma endscop
}
