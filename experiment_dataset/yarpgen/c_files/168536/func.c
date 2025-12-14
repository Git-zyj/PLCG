/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168536
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
    var_15 *= ((/* implicit */signed char) 970399430);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2375981308735071028LL)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (_Bool)0))));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((/* implicit */int) arr_8 [2ULL] [(short)4] [i_2])), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (var_0) : (((/* implicit */int) (unsigned short)30286)))) : (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) (unsigned short)0))))))))))));
                }
            } 
        } 
    } 
}
