/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144103
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
    var_12 = ((/* implicit */unsigned long long int) (+(var_10)));
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (max((((/* implicit */unsigned long long int) var_2)), (min((((/* implicit */unsigned long long int) 4294967295U)), (max((6767784871077968209ULL), (((/* implicit */unsigned long long int) (unsigned char)67))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_14 += ((/* implicit */short) min((((/* implicit */unsigned long long int) -541076118)), (min((((/* implicit */unsigned long long int) (short)1023)), (4394095678682753526ULL)))));
                var_15 = ((/* implicit */_Bool) min((min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)7)))), (((/* implicit */long long int) max(((+(var_10))), (((/* implicit */unsigned int) arr_5 [i_1])))))));
            }
        } 
    } 
}
