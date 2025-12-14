/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122850
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1588552457)) ? (17689386684963397491ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) != (16600382589135393376ULL)))), (((arr_3 [11LL]) >> (((((/* implicit */int) (unsigned char)119)) - (56)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 16600382589135393396ULL)) ? (((/* implicit */unsigned long long int) -1588552448)) : (34351349760ULL)));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)-3700);
        var_17 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 10ULL)) && (((/* implicit */_Bool) 18446744073709551605ULL)))))) > (var_4))) ? ((+((+(var_11))))) : ((+(1846361484574158245ULL))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_10 [i_1] [i_1] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-12063))));
        arr_11 [i_1] = ((unsigned long long int) ((16600382589135393376ULL) + (((/* implicit */unsigned long long int) 1588552457))));
        var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483636)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)25813))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10913))) : (16600382589135393377ULL)));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_9))));
}
