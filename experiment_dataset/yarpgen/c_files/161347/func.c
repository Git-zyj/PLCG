/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161347
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (max((arr_3 [i_0]), (((/* implicit */unsigned int) var_1)))))));
                var_20 &= ((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0] [13])), (((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) arr_6 [i_0] [(unsigned short)6])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [(signed char)10])) && (((/* implicit */_Bool) 2147483647)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (((~(((/* implicit */int) var_3)))) ^ (((/* implicit */int) var_12))));
}
