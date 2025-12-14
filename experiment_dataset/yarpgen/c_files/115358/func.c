/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115358
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)92)) ? (arr_3 [i_0]) : (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_1 + 2])) > (((/* implicit */int) (unsigned char)170))))), ((unsigned short)0)))))))));
                var_12 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (signed char)-12)), (18446744073709551615ULL)));
            }
        } 
    } 
    var_13 *= ((/* implicit */unsigned char) var_3);
    var_14 = ((/* implicit */_Bool) var_7);
    var_15 = ((/* implicit */_Bool) var_6);
}
