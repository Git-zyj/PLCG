/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120213
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_19 = (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32768)) && (((/* implicit */_Bool) arr_3 [(signed char)10] [(signed char)10] [i_0]))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) arr_1 [i_0] [i_0]))))) == (((arr_1 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767))) : (arr_0 [i_0] [i_1])))))) | (((((((/* implicit */int) (unsigned short)32768)) / (((/* implicit */int) (unsigned short)32752)))) / (((/* implicit */int) ((((/* implicit */_Bool) (signed char)123)) && (((/* implicit */_Bool) (signed char)12)))))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1] [i_0])) + (((((/* implicit */int) (unsigned short)654)) + (((/* implicit */int) arr_1 [i_0] [i_0]))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((~(var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) < (7U))))) : (((((/* implicit */_Bool) var_8)) ? (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) 7U)))) : (((/* implicit */unsigned long long int) var_6))))));
}
