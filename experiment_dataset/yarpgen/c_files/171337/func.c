/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171337
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)7279)) || (((/* implicit */_Bool) (signed char)-35)))))) > (min((7551565819617227470ULL), (((/* implicit */unsigned long long int) 1264473386))))));
                var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 456347807)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 1U)) != (-9223372036854775784LL))))))) % (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9223372036854775784LL)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (short)0)))) ^ (1017954737))))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)252)) >> (((/* implicit */int) (short)7)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)16261)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1535)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47))))))))) : (var_7)));
    var_17 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) var_12)), (7LL)));
    var_18 = ((/* implicit */unsigned short) var_0);
}
