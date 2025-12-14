/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117552
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) var_11)) * (((((/* implicit */int) (unsigned short)57408)) / (((/* implicit */int) arr_6 [i_0])))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                var_14 -= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))) : (10ULL))));
            }
        } 
    } 
    var_15 = (signed char)85;
}
