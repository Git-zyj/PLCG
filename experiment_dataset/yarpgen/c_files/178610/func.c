/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178610
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) var_4)), (339175378U)))))) ? ((-(2807186903043972074ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) 3955791938U))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 3955791917U)), (((((/* implicit */_Bool) ((12228762447817525182ULL) + (18446744073709551615ULL)))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((3955791917U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27655)))))))))))));
                var_16 = ((/* implicit */short) (((!(((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned int) var_5))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)23623)) ? (var_1) : (((/* implicit */long long int) 339175389U)))) <= (((/* implicit */long long int) ((/* implicit */int) (short)28))))))));
                var_17 = ((/* implicit */int) ((unsigned char) arr_2 [i_0]));
                var_18 = ((/* implicit */unsigned int) ((min((var_4), ((-2147483647 - 1)))) == (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (6629828478472259534LL)))) : (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) var_11)))))) & (((/* implicit */unsigned long long int) 3955791918U))));
}
