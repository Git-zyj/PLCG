/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188630
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */long long int) var_1);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)8191))));
                    arr_7 [i_2] [i_1 - 2] [i_0] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (min((arr_1 [i_0 - 1]), (((/* implicit */long long int) arr_3 [i_1 - 3] [i_1 + 2] [i_0 - 3])))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_5 [17ULL] [i_1 + 1] [i_1 - 2] [i_1 + 1]), (arr_5 [i_2 + 1] [i_1] [i_0 - 3] [i_0 - 3])))))));
                    arr_8 [i_2 + 1] [(signed char)6] [(signed char)6] [(signed char)6] = ((/* implicit */short) ((signed char) max((min((((/* implicit */long long int) arr_2 [i_1] [i_1])), (9004502284072893316LL))), (((/* implicit */long long int) arr_6 [i_0 + 1] [(signed char)13])))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned short) var_11);
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_13))));
}
