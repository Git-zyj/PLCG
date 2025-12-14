/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137436
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
    var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((4794284049164149918LL) / (4794284049164149915LL)))))) ? ((((((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) var_6)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((var_5) + (9223372036854775807LL))) >> (((4794284049164149918LL) - (4794284049164149879LL))))) == (((/* implicit */long long int) ((/* implicit */int) ((var_11) && (((/* implicit */_Bool) 12909745078221185499ULL))))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((5536998995488366122ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)37)))))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (18446744073709551588ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))))));
                arr_8 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) var_1))))), (((arr_3 [i_0] [i_1]) / (((/* implicit */long long int) var_0))))));
                var_15 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((((/* implicit */int) (_Bool)1)) / (var_9)))))), (var_5)));
            }
        } 
    } 
}
