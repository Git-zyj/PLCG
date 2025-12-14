/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113454
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (signed char)22))));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (signed char)-13)))))));
                var_18 *= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_0] [i_1])) | (((/* implicit */int) var_8)))) ^ (((((((/* implicit */int) arr_2 [i_1] [0ULL])) + (2147483647))) >> (((/* implicit */int) var_12))))));
                var_19 += ((/* implicit */signed char) ((max((((((/* implicit */int) arr_2 [i_0] [i_1])) ^ (((/* implicit */int) (signed char)-80)))), (((/* implicit */int) (signed char)44)))) >> (((((((/* implicit */_Bool) max((10720396349206813859ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((~(12ULL))))) - (18446744073709551488ULL)))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_0)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (signed char)-45)))))));
            }
        } 
    } 
    var_21 *= ((/* implicit */signed char) ((((/* implicit */int) var_10)) + (((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_0))))));
}
