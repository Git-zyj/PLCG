/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 34;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 |= (((((((((arr_3 [i_0 - 2]) ? 127 : (arr_1 [i_0] [i_1])))) ? (arr_0 [i_1]) : (((max(var_0, (arr_3 [i_0])))))))) ? (~26) : ((26 ? (((var_6 ? var_17 : (arr_1 [i_0 + 2] [i_1])))) : (min((arr_2 [9]), (arr_1 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 6;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((((arr_4 [8] [i_1] [i_2] [6]) ? (((var_8 << (((min(var_4, var_7)) - 99))))) : (min((min(var_3, (arr_1 [i_1] [i_1]))), (arr_6 [i_3 + 4] [i_0 + 3] [i_0] [i_0 + 1]))))))));
                            arr_8 [i_0] [i_1] [i_2] [i_3 + 4] [i_2] = (min((max(((6 ? (arr_0 [i_1]) : var_5)), var_1)), ((min(var_13, 25138)))));
                            var_21 = (max(var_21, var_17));
                            var_22 = (max(var_22, ((min((min((((244 ? var_13 : 38))), ((2147483647 ? var_2 : 524287)))), ((((!var_7) || var_12))))))));
                        }
                    }
                }
            }
        }
    }
    var_23 *= (max(var_9, 734394514));
    var_24 = (max(var_24, var_2));
    var_25 = var_5;
    #pragma endscop
}
