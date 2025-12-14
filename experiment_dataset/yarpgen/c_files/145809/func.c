/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145809
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
    var_11 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) % (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-69))) : (var_0)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(1364057967682559060ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (11606223400334496983ULL) : (0ULL)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_0 [i_0] [i_0]) : (17146314752LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 16252928U)) ? (var_9) : (arr_3 [i_0 - 1])))))) : (((((/* implicit */_Bool) ((long long int) 2097151))) ? (((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) arr_5 [i_0 - 1] [i_0] [i_1])))) : (((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_10)))))));
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned char)184)) ? (5202772089523275405ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))))))))));
                var_14 -= ((/* implicit */signed char) var_9);
            }
        } 
    } 
}
