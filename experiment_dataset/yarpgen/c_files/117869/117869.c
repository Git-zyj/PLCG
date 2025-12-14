/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 5684571792940011371;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] [8] [i_1] = (((((+(((arr_6 [i_0] [10] [i_2] [i_3]) & 63))))) ? ((((max((arr_3 [13] [i_1]), (arr_0 [i_0])))) ? var_6 : (arr_0 [i_3]))) : (((arr_6 [0] [3] [i_2] [i_3]) ? ((21348 ? (arr_0 [1]) : 21348)) : -0))));
                            var_19 = ((!(arr_11 [9] [9] [9])));
                        }
                    }
                }
                var_20 *= ((((-((13974128774738312650 + (arr_3 [i_0] [2]))))) + ((-1 ? (((max(-1571, 44663)))) : (max(5417, (arr_8 [i_0] [i_0] [i_1] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
