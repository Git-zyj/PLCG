/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10442
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_1))))) >> (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) 7382089186894439757LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-5)) >= (((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 1] [i_1 + 1])) ? (arr_5 [i_1 + 1] [i_1 - 2] [i_1 - 2]) : (arr_5 [i_1] [i_1 - 1] [i_1 - 2]))) - (((long long int) arr_5 [i_1] [i_1 + 1] [i_1 - 1]))));
                arr_6 [i_0] [i_1] [i_1 - 2] = arr_3 [i_0] [i_1];
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_2 [i_1 - 2]), (((/* implicit */long long int) arr_4 [i_0 - 2] [i_0] [i_1]))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : ((+(((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_0] [i_0 - 2])), ((unsigned char)221))))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_2 [i_0]))) ? (max((0LL), (20LL))) : (max((((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0] [i_1])) ? (((/* implicit */long long int) var_6)) : (-21LL))), (-4412691873174911939LL)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) ((-4412691873174911939LL) > (((/* implicit */long long int) ((/* implicit */int) var_5)))))) : (((((/* implicit */int) (signed char)82)) * (((/* implicit */int) var_10)))))))));
}
