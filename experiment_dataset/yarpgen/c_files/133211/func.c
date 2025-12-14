/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133211
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_11 ^= ((/* implicit */unsigned int) arr_1 [i_1] [i_3 + 1]);
                                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_7 [i_3] [i_3]))))) ? (((((/* implicit */_Bool) var_9)) ? (arr_12 [i_0] [i_1] [i_2] [i_1] [i_2 + 1] [i_2]) : (((/* implicit */unsigned long long int) var_0)))) : (((((/* implicit */_Bool) var_2)) ? (0ULL) : (0ULL))))) << (min((0ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))))))));
                                var_13 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -8757081563733360572LL)) ? (((((/* implicit */_Bool) 8ULL)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned long long int) 1323648166)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775787LL)) ? (-8757081563733360572LL) : (-8757081563733360571LL)))))), (((/* implicit */unsigned long long int) var_6))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (unsigned char)9))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) min((max((0ULL), (((/* implicit */unsigned long long int) -345618426)))), (((/* implicit */unsigned long long int) var_8))));
}
