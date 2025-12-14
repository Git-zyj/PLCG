/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147346
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_0 [i_1]) : (arr_3 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (short)-192))))) || (((/* implicit */_Bool) arr_0 [i_0])))))));
                var_12 = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_1))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)209)))))) < (min((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_2 [7U] [7LL] [i_0])))))))));
                arr_4 [i_1] |= ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_2 [14LL] [i_1] [i_1]) : (arr_2 [i_0] [i_0] [i_1]))))))), (min((var_2), (((((/* implicit */int) (unsigned char)213)) << (((((/* implicit */int) var_7)) - (53740)))))))));
                var_13 *= ((((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */unsigned long long int) ((long long int) (unsigned short)47321)))))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)2))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (unsigned short)49981))))), (var_10)));
    var_15 |= ((/* implicit */signed char) (short)3998);
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) ((0U) < (var_8)))) << (((/* implicit */int) ((_Bool) (short)4015)))))));
}
