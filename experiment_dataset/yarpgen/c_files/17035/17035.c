/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] [8] [8] = (min(((max(18, 215))), ((max(((min(240, var_1))), ((var_6 ? 0 : (arr_3 [i_0] [i_0]))))))));
                arr_6 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
                arr_7 [i_0] [i_1] = ((-(arr_3 [i_1 - 1] [i_1 - 1])));
                var_13 ^= (arr_1 [i_0 + 1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                var_14 ^= ((((((arr_10 [i_3] [i_2]) ? (arr_10 [20] [i_3 - 1]) : (arr_10 [i_2 + 3] [i_3])))) ? ((max(var_5, (arr_10 [i_2] [i_3])))) : (arr_10 [i_2 + 2] [i_3])));
                var_15 = (max(var_15, (((((((!9) != (arr_11 [10])))) ^ ((112 ? ((((arr_8 [i_3 + 1]) || var_12))) : (((arr_9 [i_3] [i_2 + 3]) ^ (arr_8 [i_3]))))))))));
            }
        }
    }
    #pragma endscop
}
