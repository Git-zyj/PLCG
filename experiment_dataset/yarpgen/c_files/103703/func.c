/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103703
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)-37)))) != (((/* implicit */int) max((arr_1 [i_0 - 1]), (((/* implicit */unsigned short) arr_0 [i_0 + 2])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (signed char)(-127 - 1)))));
                    arr_9 [i_2] [i_1] [i_1] [16ULL] = (signed char)-101;
                }
            } 
        } 
    }
    var_13 = ((/* implicit */signed char) var_9);
}
