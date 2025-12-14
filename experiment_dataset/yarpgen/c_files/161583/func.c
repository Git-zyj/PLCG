/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161583
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
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (-(((((/* implicit */_Bool) ((long long int) arr_2 [i_1] [i_1]))) ? (-2326995649794139669LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)132)))))))))));
                var_19 ^= ((/* implicit */int) ((unsigned long long int) var_0));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((unsigned long long int) ((int) ((((/* implicit */int) (unsigned char)123)) - (((/* implicit */int) (signed char)0))))));
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_4))));
}
