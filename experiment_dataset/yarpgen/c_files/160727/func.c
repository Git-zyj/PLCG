/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160727
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_10 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(1571267825)))) ? (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_11 = ((/* implicit */short) arr_0 [13LL]);
        var_12 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (5808038191470335029LL)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (3003642508660200728ULL) : (min((3003642508660200739ULL), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), (arr_0 [i_0])))))));
    }
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned short) arr_0 [i_1])))))) & (min((((/* implicit */unsigned int) (_Bool)1)), (var_6)))))), (((((8714849521439864455ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21493))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))) : (((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */unsigned long long int) var_7)) : (3502764349762966739ULL)))))));
        var_14 -= ((/* implicit */unsigned long long int) (-(var_6)));
    }
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (arr_7 [i_2]))))));
        var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2138921808)) ? (1443843952) : (((/* implicit */int) min(((short)-14123), ((short)-14680))))))) ? (((((((/* implicit */unsigned long long int) var_6)) <= (arr_2 [i_2]))) ? (((((/* implicit */_Bool) 2558826338U)) ? (((/* implicit */int) (unsigned short)43873)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) min(((short)14039), (((/* implicit */short) (unsigned char)95))))))) : (var_4)));
        var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 3003642508660200732ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 1]))) : (15395467453117619382ULL))), (((/* implicit */unsigned long long int) min((arr_0 [i_2]), (arr_0 [i_2 + 1]))))));
        var_18 ^= ((/* implicit */unsigned short) max((((var_5) ? (((/* implicit */int) (_Bool)0)) : (var_0))), (((/* implicit */int) arr_3 [i_2]))));
    }
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (unsigned char)109)) : (var_4))))));
}
