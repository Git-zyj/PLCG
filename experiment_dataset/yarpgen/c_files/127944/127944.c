/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((max((!var_2), (max(var_9, var_3)))), (((!(!var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [4] [i_1] [i_1] [i_2] = (!0);
                    var_12 += (max(((((min(1594172024, 2005783865127351260))) ? (arr_4 [i_0] [i_1] [i_2]) : (arr_5 [i_0]))), ((((arr_0 [i_1]) ? 8 : (arr_0 [i_0]))))));
                    var_13 += (((((~((28737 ? 2005783865127351268 : 1594172047))))) ? ((((!(arr_4 [4] [i_1] [i_2]))) ? (((arr_6 [i_0 + 2] [i_1] [0]) ? (arr_3 [i_0] [i_1] [i_2]) : (arr_2 [i_0] [i_1] [i_2]))) : (arr_6 [i_0 + 2] [i_1] [i_0 + 2]))) : (arr_3 [i_0] [i_1] [i_2])));
                    arr_8 [i_0] [i_1] [i_2] = ((~((((((arr_1 [i_1] [i_2]) ? (arr_4 [i_0] [i_1] [3]) : (arr_6 [i_0] [i_1] [i_2])))) ? (((arr_4 [i_2] [i_1] [i_0]) ? (arr_4 [i_0] [i_1] [i_2]) : (arr_6 [i_0] [i_1] [i_2]))) : (max(16440960208582200354, 8245561956806134843))))));
                }
            }
        }
    }
    #pragma endscop
}
