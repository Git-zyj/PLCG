/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124822
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((-1) ^ (((/* implicit */int) var_2))))) - (8974452025664740007ULL)))) ? (((6111745052364436820LL) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (67108863U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54318)))))))) : (((/* implicit */long long int) min((((((/* implicit */int) (unsigned short)61211)) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)74))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_12 -= ((((((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 1])) / (max((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])), (arr_5 [i_2] [i_1] [i_0] [i_0]))))) + (min((((/* implicit */int) max((arr_2 [i_0] [i_1]), (((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (arr_5 [i_2] [i_1] [i_2] [i_2]))))));
                    var_13 |= (!(((/* implicit */_Bool) max(((unsigned char)74), (((/* implicit */unsigned char) (_Bool)1))))));
                }
            } 
        } 
    } 
}
