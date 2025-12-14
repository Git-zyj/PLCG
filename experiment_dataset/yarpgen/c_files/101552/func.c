/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101552
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
    for (short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_2 [i_0])))) != (((long long int) var_2))))) : (((/* implicit */int) (signed char)112))));
                var_13 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_3 [20ULL])), (min((((((/* implicit */_Bool) 11981174150273141334ULL)) ? (((/* implicit */long long int) var_3)) : (-6713403191345723631LL))), (arr_0 [i_0 + 2])))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) var_1);
    var_15 = ((/* implicit */signed char) max((min((min((var_6), (var_10))), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (signed char)112))));
}
