/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!3091134533) << (var_9 + 23472)));
    var_20 = 3307;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [14] |= (min((((-3307 & 13807) / 3296)), ((((arr_1 [i_0]) < (arr_4 [i_0] [i_1] [i_1 + 1]))))));
                arr_7 [i_0] [i_1] [i_0] = ((!(((-(arr_2 [i_1 - 1]))))));
                arr_8 [0] [i_1] |= (max(((max(var_7, (arr_0 [2])))), (((((((arr_5 [i_0]) ? (arr_2 [i_1]) : (arr_1 [i_0])))) ? ((3307 ? 32767 : (arr_0 [8]))) : (arr_1 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
