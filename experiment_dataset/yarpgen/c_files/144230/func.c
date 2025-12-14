/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144230
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_17 += (unsigned short)0;
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_18 = ((/* implicit */signed char) arr_3 [i_1]);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                var_19 |= ((/* implicit */unsigned long long int) ((short) arr_1 [i_0] [i_2]));
                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0]))));
            }
        }
        for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-19770)) ? (((/* implicit */int) (unsigned short)22)) : (((/* implicit */int) (short)15))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (short)0))));
        }
    }
    var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) var_13)), (var_2))), (((/* implicit */long long int) var_14))))) ? (((((/* implicit */int) (unsigned char)25)) & (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_0)))))) : (((/* implicit */int) var_7))));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) >> (((((/* implicit */int) var_11)) - (61721)))));
}
