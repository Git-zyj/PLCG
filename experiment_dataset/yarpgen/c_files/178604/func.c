/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178604
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1 + 1]))) ? (-1023256039) : (((/* implicit */int) arr_0 [0LL]))));
                arr_5 [(unsigned char)8] [i_0] = ((long long int) arr_4 [i_0] [i_1]);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) 1023256038);
}
