/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115760
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
    var_10 = ((/* implicit */int) (unsigned short)40407);
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) ((signed char) 4039203554U));
        var_12 = ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */unsigned int) 874201104)) : (4039203550U)))));
        arr_2 [0LL] = ((/* implicit */int) min((min(((((_Bool)1) ? (var_1) : (255763737U))), (((/* implicit */unsigned int) (unsigned short)508)))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 999770218)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)5)))), (max((-1), (((/* implicit */int) (unsigned char)14)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)768)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (4039203554U)));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)64))))) < (((/* implicit */int) arr_5 [i_1 + 1])))))));
        arr_6 [12] [i_1] |= ((/* implicit */unsigned char) ((short) arr_5 [i_1 + 1]));
        var_14 += ((/* implicit */_Bool) ((((arr_4 [i_1]) << (((11U) - (11U))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (short)-1)))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (signed char)-65)) : (-422636406)));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (unsigned char)245))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) (unsigned short)65528);
        var_18 -= ((/* implicit */signed char) (unsigned short)25135);
    }
}
