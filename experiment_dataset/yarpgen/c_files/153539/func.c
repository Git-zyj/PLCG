/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153539
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
    var_11 = (((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_1))))) * (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) var_3))))))));
    var_12 = ((((/* implicit */_Bool) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31894)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1)) ? (13) : (((/* implicit */int) (short)-16163))))) : ((~(min((var_9), (((/* implicit */unsigned long long int) 559945612)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((((((/* implicit */_Bool) var_10)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (11584316833810553724ULL)))));
                    var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483647)) * (arr_0 [18U])));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_2] [i_1] [7ULL] [7ULL])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_3)))) % (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (signed char)86))))))))));
                }
            } 
        } 
    } 
}
