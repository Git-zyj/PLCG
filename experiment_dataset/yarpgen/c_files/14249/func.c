/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14249
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
    var_10 = ((/* implicit */short) ((long long int) max((((((/* implicit */_Bool) (short)-1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28246)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-28246))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_2 [i_0] [0LL] [i_1 + 1])))) ? (((/* implicit */int) max((arr_0 [i_1 + 2]), ((unsigned short)65472)))) : ((+(((/* implicit */int) (unsigned char)86))))))), ((+(((3485878384U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20)))))))));
                var_11 = ((/* implicit */signed char) min((min((arr_1 [i_0 + 2]), (arr_1 [i_0 - 1]))), (((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 2])))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-126)))))))))));
}
