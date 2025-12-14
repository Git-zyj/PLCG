/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((max((~-3), -var_6)))));
    var_13 ^= (((((25165824 ? 0 : -1504570148))) ? (((((-1504570137 ? 52706 : 25165826))) ? ((max(32767, 69))) : 1)) : (max(((max(0, 49927))), -1023))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = ((((!((min(0, 49927))))) ? (min((max(-873550450, 25165824)), (max(192, (arr_1 [i_1]))))) : ((-((max(var_5, (arr_4 [i_0] [i_0] [i_1] [i_0]))))))));
                    arr_6 [i_1] [i_1] [i_1] = (+(((~211853630) ? ((var_6 ? 186 : var_10)) : ((var_1 ? var_0 : var_1)))));
                    var_15 = ((((min(((var_9 ? (arr_0 [i_0]) : 25165824)), (((arr_1 [i_0]) ? 873550454 : var_7))))) ? ((((min(var_9, (arr_3 [i_1])))) ? ((max(10, 68))) : ((1 ? var_8 : (arr_5 [i_1] [i_1] [i_2]))))) : (min(((max(var_0, 217))), ((-(arr_0 [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
