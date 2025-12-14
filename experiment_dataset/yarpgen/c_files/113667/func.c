/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113667
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
    var_19 *= ((/* implicit */short) ((((/* implicit */int) min(((short)-18520), (((/* implicit */short) (unsigned char)255))))) | (var_18)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) max(((+(arr_5 [i_0] [i_0] [i_1 + 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0])))))));
                var_21 = (~((+(((/* implicit */int) (signed char)66)))));
            }
        } 
    } 
}
