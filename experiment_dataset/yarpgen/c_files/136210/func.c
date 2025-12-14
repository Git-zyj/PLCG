/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136210
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((arr_1 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (-1)));
        var_18 = ((/* implicit */signed char) ((((unsigned int) var_8)) | (((unsigned int) arr_1 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */int) min(((short)1023), ((short)21064)))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) arr_4 [i_1])))))));
        var_20 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) min((((/* implicit */short) arr_1 [i_1])), ((short)-21922)))) : (((/* implicit */int) arr_2 [i_1])))) + (2147483647))) << ((((+(((((/* implicit */int) (short)1039)) - (((/* implicit */int) arr_1 [i_1])))))) - (1038)))));
    }
    for (short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_21 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-28043))) + (3941849722U))));
        var_22 ^= ((/* implicit */_Bool) (-(arr_8 [i_2])));
    }
    var_23 &= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) var_12)))) >= (((/* implicit */int) var_4))));
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((long long int) ((((((/* implicit */_Bool) (signed char)-115)) ? (3941849722U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1010))))) >> (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (_Bool)1)) : (1275944901)))))))));
    var_25 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) ^ (((long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (unsigned char)24)))))));
    var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((unsigned short) var_14)))))) ? ((+((~(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_9))));
}
