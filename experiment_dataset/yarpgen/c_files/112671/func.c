/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112671
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((var_17) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))))))))));
                var_21 += ((/* implicit */signed char) ((min((((/* implicit */long long int) (signed char)116)), (arr_4 [i_0] [i_0] [i_0]))) == (((/* implicit */long long int) var_11))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) 18446744073709551602ULL))));
            }
        } 
    } 
    var_23 &= var_16;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            {
                var_24 = ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) + (((/* implicit */int) arr_9 [i_2] [i_2] [i_3 + 1]))))) ? (((/* implicit */unsigned long long int) ((int) arr_6 [i_3 + 1] [i_3]))) : ((+(((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107))))))));
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned short) (unsigned char)213)), (((/* implicit */unsigned short) var_6))))) ? ((-(arr_6 [i_2] [i_3 - 1]))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)122)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (signed char)107))))))))));
            }
        } 
    } 
}
