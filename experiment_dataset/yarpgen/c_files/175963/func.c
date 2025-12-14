/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175963
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
    var_13 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) ((signed char) (-(9223372036854775807LL))));
                var_15 = ((/* implicit */int) 9223372036854775807LL);
                arr_6 [i_1] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) -6168223221842990780LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20687))) : (arr_0 [i_0 - 1]))));
                var_16 ^= ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)225)), (((int) arr_2 [i_0 + 1]))));
            }
        } 
    } 
}
