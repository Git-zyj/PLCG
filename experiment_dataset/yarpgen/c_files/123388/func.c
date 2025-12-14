/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123388
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [4ULL] = ((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [(unsigned short)6])), (arr_5 [i_2] [i_0] [i_0]))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_1 [i_2 + 1] [i_1 - 1])))), (var_8)));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) == (min((-1LL), (((/* implicit */long long int) (short)127))))))));
}
