/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102347
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
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */int) 14137314201075558706ULL);
                    var_13 = ((/* implicit */unsigned int) min((max((arr_5 [i_0 - 1]), (arr_5 [i_0 + 2]))), (14137314201075558706ULL)));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0 - 2] [i_1]);
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (14137314201075558738ULL)));
    var_15 ^= ((/* implicit */short) max((((/* implicit */unsigned char) var_0)), ((unsigned char)210)));
}
