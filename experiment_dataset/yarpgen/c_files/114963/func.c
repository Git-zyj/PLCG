/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114963
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
    var_16 ^= ((/* implicit */unsigned char) var_7);
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((_Bool) var_9))), (min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (518259532230906703ULL)))));
        var_18 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0)))))), (((/* implicit */unsigned long long int) ((_Bool) var_4)))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        arr_5 [i_1 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3985287230U))));
        arr_6 [i_1] [(_Bool)1] &= ((/* implicit */_Bool) (+(((long long int) arr_4 [i_1 + 1]))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_10)), (max(((+(arr_1 [(short)19]))), (((/* implicit */unsigned long long int) var_8)))))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_3 [i_1 - 2])) + (((/* implicit */int) arr_3 [i_1 + 1])))), (((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 2])))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) ((arr_9 [i_2] [i_2]) % (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) || (((/* implicit */_Bool) var_1)))))));
        arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_2]), (arr_0 [i_2])))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_0 [i_2]))));
        var_21 -= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_2)) ? (6044868498928664186LL) : (min((9223372036854775807LL), (((/* implicit */long long int) 132120576U)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_1)))))) ? (((/* implicit */int) ((short) min((var_4), (((/* implicit */unsigned short) (short)32766)))))) : (((/* implicit */int) ((signed char) var_13)))));
        var_23 = ((/* implicit */unsigned char) ((((var_5) + (9223372036854775807LL))) << (((((((/* implicit */int) min((((short) 14385474571388830280ULL)), (max((var_9), (((/* implicit */short) (_Bool)1))))))) + (15833))) - (33)))));
    }
    var_24 = var_14;
}
