/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127735
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
    var_15 = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_7)) >> (((18446744073709551604ULL) - (18446744073709551589ULL)))))));
    var_16 &= ((/* implicit */long long int) (unsigned short)3068);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_17 |= ((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned long long int) var_11)), (arr_3 [i_2 + 1] [i_2 - 2] [i_0]))));
                    var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_1] [i_2 - 2] [i_2])) ? (18446744073709551582ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)154))))) + (arr_3 [i_0] [i_2 - 2] [i_2])));
                }
            } 
        } 
    } 
}
