/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161724
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */unsigned char) arr_3 [i_0 + 1]);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)65)))));
            arr_7 [i_0] [i_1] = var_13;
            var_17 = arr_1 [i_0];
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_8 [i_0 + 1]))));
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_2]);
        }
    }
    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        arr_15 [i_3] &= ((/* implicit */signed char) (unsigned char)66);
        var_19 = ((/* implicit */short) (+((-(arr_12 [i_3])))));
        arr_16 [i_3] = ((/* implicit */long long int) (((-(17964158526543549204ULL))) % (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 482585547166002432ULL)) ? (2534721355U) : (((/* implicit */unsigned int) -45151206))))))));
    }
    var_20 = ((/* implicit */unsigned int) min((var_20), (var_14)));
}
