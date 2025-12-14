/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_1] [7] [7] = ((((arr_1 [i_0]) ? (((arr_5 [i_1] [i_2]) ? (arr_5 [9] [18]) : 0)) : (((min(60216, (arr_3 [i_0 - 2]))))))));
                    arr_7 [i_2] [16] [16] |= (arr_3 [i_2]);
                    arr_8 [i_0] [i_1] [i_0] = ((((max((arr_2 [i_0] [i_0 - 1] [i_1]), (((33522 != (arr_4 [12]))))))) ? (((19626 ^ -5024141419746202143) + ((max((arr_1 [16]), 127))))) : (arr_1 [i_1])));
                }
            }
        }
    }
    var_11 = (max(var_11, ((((((-2079039717 ? -2079039717 : (max(-2079039717, 1004953888))))) ? (-128 >= 107) : (max((var_1 && 3298775818), 10045381964209444064)))))));
    #pragma endscop
}
