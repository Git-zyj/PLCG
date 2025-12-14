/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137545
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (2528337161201872685LL) : (((/* implicit */long long int) 2176402416U))));
            var_16 -= ((/* implicit */short) ((arr_3 [i_0] [i_0] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        }
        var_17 = ((/* implicit */_Bool) var_13);
        arr_4 [i_0] [i_0] |= ((/* implicit */signed char) (+(arr_1 [i_0])));
        var_18 = ((((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)20] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2954653466U))) + (arr_3 [i_0] [i_0] [i_0]));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((short) (unsigned char)24));
        var_20 &= ((/* implicit */long long int) ((unsigned short) arr_3 [i_2] [i_2] [i_2]));
    }
    var_21 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((var_12) / (((/* implicit */long long int) var_4))))) | (((((/* implicit */_Bool) var_6)) ? (10392329734827135526ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) | (((/* implicit */unsigned long long int) min(((+(var_1))), (((/* implicit */long long int) var_3)))))));
}
