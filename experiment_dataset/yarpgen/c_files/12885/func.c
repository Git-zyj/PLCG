/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12885
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
    var_13 += ((/* implicit */int) (~(((((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)22680)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22680))) : (var_8))))))));
    var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) (unsigned short)22680))))), (max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)42856)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42835)) ? (arr_1 [i_1] [i_2]) : (((/* implicit */long long int) arr_5 [i_0] [12LL]))));
                    var_16 = ((/* implicit */short) (unsigned short)22680);
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_0])) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)42847)) || (((/* implicit */_Bool) (unsigned short)42856)))))));
    }
}
