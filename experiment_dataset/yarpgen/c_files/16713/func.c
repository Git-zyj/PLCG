/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16713
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
    var_10 |= ((/* implicit */unsigned short) -759887056);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_11 = ((/* implicit */int) max((((/* implicit */long long int) (short)26981)), ((((~(-3488191879372305667LL))) | (9223372036854775807LL)))));
            var_12 = ((/* implicit */unsigned long long int) var_8);
        }
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((short) arr_1 [i_0 - 2]))), (((((/* implicit */_Bool) ((var_5) - (((/* implicit */long long int) 67104768))))) ? ((+(9223372036854775807LL))) : (min((9223372036854775807LL), (((/* implicit */long long int) var_6)))))))))));
        arr_4 [i_0 - 3] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((short) (short)-27998));
        arr_8 [i_2 - 1] [i_2 + 1] = ((/* implicit */short) (~(((((/* implicit */unsigned int) var_8)) & (var_6)))));
    }
}
