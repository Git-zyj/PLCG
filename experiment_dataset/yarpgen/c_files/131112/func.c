/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131112
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
    var_11 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((unsigned int) min((4ULL), (((/* implicit */unsigned long long int) (signed char)91)))));
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (18446744073709551612ULL) : ((-(min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])), (arr_2 [i_0] [i_0] [i_0]))))))))));
                arr_6 [i_1 - 1] [i_1] [i_0] |= max((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) <= (4ULL))))) : (((((/* implicit */_Bool) 4294967295U)) ? (4ULL) : (18446744073709551609ULL))))), (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (max((((/* implicit */unsigned long long int) (signed char)62)), (4ULL))) : (31ULL))));
                var_13 = ((/* implicit */short) (unsigned short)49777);
            }
        } 
    } 
}
