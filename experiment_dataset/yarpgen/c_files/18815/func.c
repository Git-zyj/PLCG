/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18815
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) min((arr_7 [i_0] [i_1] [i_2 - 2]), (var_10))))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) var_5)), (max((((/* implicit */int) var_3)), ((-(((/* implicit */int) var_13))))))));
                    arr_10 [i_0] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 1] [13] [i_1 - 2])) : (min((((/* implicit */int) arr_5 [i_0] [(signed char)15] [i_1] [i_2 - 1])), (var_7)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)14925)))))));
    var_17 |= ((/* implicit */short) ((((/* implicit */int) (unsigned short)40642)) * (0)));
}
