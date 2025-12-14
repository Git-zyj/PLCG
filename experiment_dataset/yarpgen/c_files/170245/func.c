/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170245
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_18 *= (-(((((/* implicit */_Bool) 67108856U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)7148)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [14]);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_19 = ((/* implicit */short) (unsigned char)61);
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) 4024409773732643179LL))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_21 += (short)-15966;
            var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1]))) : (var_14)));
        }
        arr_10 [i_0] = arr_9 [i_0];
    }
    var_23 = ((/* implicit */short) (_Bool)1);
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-8685)) + (((((/* implicit */_Bool) (signed char)53)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)5618)))))))))));
}
