/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((((min(6569540622203844217, var_12))) ? -3 : 10)), (0 | 246)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = (((((~(((arr_1 [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_2]) : var_8))))) ? (arr_0 [3] [i_2]) : ((((((arr_4 [i_0] [i_0] [i_0]) ? 1 : 239)) << (var_0 - 64))))));
                    var_21 = (max(var_21, ((((max((arr_3 [i_0]), ((-32 ? (arr_8 [i_0] [i_0] [i_0]) : var_2)))) == ((((((arr_3 [i_0]) * (arr_0 [1] [i_2])))) ? -544 : ((-(arr_1 [i_0] [1]))))))))));
                    var_22 = ((((((((((arr_6 [3] [3]) && 126)))) * ((var_9 ? 1 : (arr_1 [i_0 - 1] [i_0 - 1])))))) ? 16 : (min((arr_5 [i_0 - 1] [i_0 - 1]), (((arr_8 [1] [7] [1]) / (arr_7 [i_0] [i_1] [i_0] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
