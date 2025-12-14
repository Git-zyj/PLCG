/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_1] [i_2] = 8653169609889997420;
                    var_10 += ((arr_3 [2]) ? ((0 ? var_6 : (arr_6 [i_1] [i_2]))) : ((((((arr_8 [i_0] [i_1] [i_2] [6]) | 19))) ? 255 : ((-(arr_6 [i_0] [1]))))));
                }
            }
        }
    }
    var_11 = (((((max((-9223372036854775807 - 1), var_9)) / (((var_2 ? 4294967268 : 16128)))))) ? var_9 : ((4095 | ((16128 ? var_7 : 7)))));
    var_12 += var_0;
    var_13 = max(((((4175044404 ^ 23818) ? 66 : ((var_2 ? var_4 : 876537834))))), var_5);
    #pragma endscop
}
