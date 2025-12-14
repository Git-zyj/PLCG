/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152705
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] [(unsigned char)19] = ((/* implicit */unsigned short) (_Bool)1);
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21577))) * ((+(1150669704793161728ULL))))))));
        var_21 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-30849)) || (((/* implicit */_Bool) var_11))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) (signed char)-66);
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_1 - 1]))));
        arr_9 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_1 + 1]))));
        arr_10 [2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) -1178745341))) ? (((((/* implicit */int) (unsigned char)26)) / (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_1 [i_1 - 1]))));
    }
}
