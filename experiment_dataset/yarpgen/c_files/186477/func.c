/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186477
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
    var_12 *= ((/* implicit */unsigned short) ((var_1) > (((((((/* implicit */long long int) var_10)) >= (var_8))) ? (((/* implicit */int) min((((/* implicit */short) var_2)), (var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1091)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 6; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)133)) > (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 3] [i_0 + 2])) ? (arr_4 [i_0 + 2] [i_0 + 3] [i_0 + 3]) : (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (var_8)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)51)) ? (3910610406169041898LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)220))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((/* implicit */int) (!(((((/* implicit */_Bool) 463868777U)) && (((/* implicit */_Bool) (short)-6751)))))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? ((~((~(var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    var_15 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_1)) : (var_9)))) ? (((((/* implicit */unsigned long long int) var_3)) & (var_9))) : (((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7680))) : (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
}
