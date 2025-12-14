/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166692
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) min((max((((/* implicit */long long int) (short)5525)), (-9223372036854775786LL))), (((/* implicit */long long int) (((_Bool)1) ? (371230666) : (((/* implicit */int) (short)-15788)))))));
        var_10 = ((/* implicit */signed char) var_5);
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_11 = ((/* implicit */_Bool) (unsigned char)251);
            arr_7 [i_2] [(unsigned short)9] = ((/* implicit */short) max((arr_6 [i_2] [(_Bool)1]), (max((arr_3 [i_1] [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) 6180796742218959365LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)43889)))))))));
            arr_8 [i_1] |= ((/* implicit */signed char) max((((/* implicit */int) (signed char)100)), (-371230654)));
        }
        var_12 ^= ((/* implicit */unsigned char) -1786500905936185925LL);
        var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((8323072U) / (((/* implicit */unsigned int) var_5))))) ? ((+(((/* implicit */int) arr_1 [i_1])))) : (((((/* implicit */_Bool) 10199362608049295449ULL)) ? (((/* implicit */int) (short)-7227)) : (-371230651)))))) / (((((/* implicit */_Bool) -6180796742218959394LL)) ? (-5415918817463273385LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_14 += ((/* implicit */int) arr_3 [i_1] [i_1]);
    }
}
