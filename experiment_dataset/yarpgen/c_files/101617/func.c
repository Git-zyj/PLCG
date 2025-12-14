/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101617
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
    var_17 ^= ((/* implicit */signed char) ((((((((/* implicit */int) var_6)) - (((/* implicit */int) (unsigned char)128)))) / (((/* implicit */int) (((-2147483647 - 1)) != (2147483647)))))) * (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) != (((/* implicit */int) min((var_15), (var_15)))))))));
    var_18 *= ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (2147483643)))) + (((((/* implicit */unsigned int) ((/* implicit */int) (short)-29918))) ^ (var_4)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] [7LL] = ((/* implicit */signed char) var_4);
                            arr_17 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
                            arr_18 [i_0] = ((/* implicit */signed char) min((((((/* implicit */int) var_14)) << (((min((71494644084506624ULL), (((/* implicit */unsigned long long int) var_12)))) - (16460ULL))))), (((((/* implicit */int) var_10)) << (((((/* implicit */int) var_0)) - (118)))))));
                        }
                        for (unsigned char i_5 = 3; i_5 < 20; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */signed char) 2147483647);
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2524831808540745026LL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) var_2))))) : (((9338643416866079314ULL) & (3314232324488745789ULL)))))) ? (((var_15) ? (((/* implicit */long long int) var_11)) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    }
                } 
            } 
        } 
        arr_22 [i_0] = ((/* implicit */long long int) 1950849869U);
    }
}
