/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108146
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_7))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)0)) ? (12387000317847846312ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))));
                var_21 = ((/* implicit */unsigned char) min(((+(arr_2 [i_1 - 1]))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [i_0])), ((~(((/* implicit */int) (signed char)126)))))))));
            }
        } 
    } 
}
