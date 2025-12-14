/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122080
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(2LL)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((var_6) ? (13LL) : (var_13)))));
        arr_4 [(short)3] [(short)3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (signed char i_1 = 4; i_1 < 15; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (10LL))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), ((signed char)36)));
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((-6196481254735353223LL) >= (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > ((-(var_1)))));
            arr_13 [i_1] [i_1] = ((/* implicit */signed char) var_3);
            var_18 &= ((/* implicit */short) (_Bool)1);
        }
        var_19 = ((/* implicit */signed char) ((var_2) ? (2676957213U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    var_20 = ((/* implicit */unsigned int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-1))))) != (18446744073709551599ULL)))))));
}
