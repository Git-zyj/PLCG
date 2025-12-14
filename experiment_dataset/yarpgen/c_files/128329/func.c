/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128329
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
    var_13 = ((/* implicit */signed char) min((((/* implicit */short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_1))))), (var_0)));
    var_14 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) (-((~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-44)), (var_6))))))));
                var_16 = ((/* implicit */_Bool) 17484520739196974369ULL);
                var_17 = ((/* implicit */unsigned char) min(((+(arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))), (17484520739196974370ULL)));
            }
        } 
    } 
}
