/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175200
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) var_0)), (0ULL)))));
        var_13 ^= ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0]))));
    }
    var_14 = ((/* implicit */_Bool) min(((-(var_8))), (4483381140352708198ULL)));
    /* LoopSeq 1 */
    for (short i_1 = 3; i_1 < 7; i_1 += 4) 
    {
        arr_7 [i_1 - 2] [i_1 + 2] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) / (((/* implicit */int) var_3))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) ((-1) >= (((/* implicit */int) arr_0 [i_1 - 2])))))));
        var_16 = ((/* implicit */unsigned short) max((((/* implicit */short) arr_1 [i_1])), (var_6)));
    }
    var_17 = ((/* implicit */int) var_6);
    var_18 = min(((~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (13963362933356843417ULL))))), (max((max((((/* implicit */unsigned long long int) var_11)), (var_8))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))))));
}
