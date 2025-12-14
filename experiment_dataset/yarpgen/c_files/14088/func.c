/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14088
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((18446744073709551615ULL), (18446744073709551614ULL))), (max((((/* implicit */unsigned long long int) (unsigned short)65534)), (10ULL)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) max((var_9), (((/* implicit */short) var_0))))) + (116)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (959692347803990469ULL)))))));
    var_15 *= ((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_9))))))));
    var_16 ^= ((/* implicit */signed char) ((unsigned short) (unsigned short)65532));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) min((arr_2 [i_1]), (((/* implicit */unsigned short) var_9)))))))), (max((var_3), (((/* implicit */long long int) max((arr_3 [i_0]), (arr_3 [i_1]))))))));
            }
        } 
    } 
}
