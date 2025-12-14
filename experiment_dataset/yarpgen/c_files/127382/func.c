/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127382
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
    var_16 = ((/* implicit */int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3 - 2])) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_2] [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0]))) : (5629254199546676598LL)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_8)) : (886659912940013059ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32761)) ? (arr_9 [i_1] [4LL] [i_1] [i_1]) : (((/* implicit */int) arr_3 [i_3])))))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47564)) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 1] [i_4])))));
                        }
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)(-127 - 1)))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (7U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)30005)))))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) ((2147483647) ^ (((/* implicit */int) var_6))))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (14U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) max((var_4), (((/* implicit */short) (signed char)127))))) ^ (((((/* implicit */_Bool) var_0)) ? (2147483647) : (((/* implicit */int) var_10)))))))));
}
