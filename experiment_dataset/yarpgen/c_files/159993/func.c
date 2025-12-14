/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159993
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 6290872U)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */long long int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 4194303ULL))) ? (((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_1 + 4])))) : (((((/* implicit */_Bool) (short)-18291)) ? (2147483647) : (((/* implicit */int) (unsigned short)38051))))))) : (((((/* implicit */unsigned long long int) var_14)) | (((((/* implicit */_Bool) (short)-18291)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27485))) : (18446744073709551615ULL))))));
                var_16 = ((/* implicit */unsigned char) ((var_8) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_1 + 1])) / (((/* implicit */int) arr_3 [i_0])))))) : (((/* implicit */int) ((max((2095545749), (-2147483647))) != (((/* implicit */int) (signed char)47)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_0)) ? (var_6) : (14422746819807973051ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12819))) : (var_11)))))));
}
