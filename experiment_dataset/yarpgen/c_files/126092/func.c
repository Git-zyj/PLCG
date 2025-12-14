/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126092
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
    var_11 &= ((/* implicit */_Bool) ((int) max((((((/* implicit */unsigned long long int) var_1)) ^ (var_9))), (((/* implicit */unsigned long long int) 6128856685521905343LL)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) arr_3 [(_Bool)1]))));
            var_13 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((long long int) (signed char)-1)) + (9223372036854775807LL))) << (((((((long long int) arr_3 [i_0])) + (2444369029971068201LL))) - (36LL)))))), ((-(arr_5 [i_0 - 1])))));
            var_14 = ((/* implicit */unsigned long long int) ((min((max((arr_5 [i_0]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) arr_1 [i_0])))) > (min((max((((/* implicit */unsigned long long int) var_6)), (arr_5 [i_0]))), (8013793111049367583ULL)))));
        }
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-8))))))))));
        arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0 - 1])), (var_9)))) ? (max((((/* implicit */unsigned int) var_5)), (6U))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-12)) + (2147483647))) << (((/* implicit */int) arr_1 [i_0 - 1])))))));
    }
    var_16 &= ((/* implicit */unsigned char) min((1625762153), (min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))))));
}
