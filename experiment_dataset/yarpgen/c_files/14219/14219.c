/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_13 = ((~((~(1845548013 <= 27341)))));
                            var_14 = (min(var_14, ((((arr_3 [i_0]) ? -0 : (((arr_7 [i_3] [i_3] [i_2] [i_0] [i_3] [i_0]) ? (arr_1 [i_1 - 1]) : (((arr_8 [i_3] [i_1] [i_1] [i_1]) ? 855085270 : (arr_1 [23]))))))))));
                        }
                    }
                }
                arr_9 [i_1] = (((arr_3 [i_1]) != (5868417191244019470 <= 9827)));
            }
        }
    }
    var_15 = ((((((~var_6) << (((((~43) + 68)) - 23))))) ? (9816 || -9822) : var_2));
    var_16 *= (((var_5 || var_2) != (var_2 && 9816)));
    var_17 = (max(var_17, 0));
    var_18 = var_2;
    #pragma endscop
}
