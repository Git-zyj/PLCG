/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147438
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (unsigned short)2973))) > (((int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((min((var_12), (((/* implicit */long long int) var_0)))) + (9223372036854775807LL))) >> (((((unsigned long long int) var_13)) - (19117ULL)))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_16 = ((/* implicit */unsigned short) (-(12886942432229492693ULL)));
        var_17 ^= ((/* implicit */unsigned int) (-(var_2)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)33743)) ? (((/* implicit */long long int) ((((/* implicit */int) var_13)) ^ (529985564)))) : (((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */long long int) var_10)) : (arr_1 [i_1] [i_1])))));
        var_19 = ((/* implicit */long long int) (unsigned short)3596);
    }
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (unsigned short)61940)) : (((/* implicit */int) (unsigned char)37))))) ? (var_12) : (((((var_12) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)53236)) - (53196)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max((var_5), (var_1)))))) : (((((/* implicit */_Bool) (short)-6775)) ? (4130182223U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50126)))))));
    var_21 = ((/* implicit */_Bool) var_4);
}
