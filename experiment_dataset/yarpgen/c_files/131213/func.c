/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131213
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (2191878182U)))) ^ ((~(var_9)))))) ? (((2848203285U) & (((arr_0 [i_0]) >> (((arr_0 [i_0]) - (2968393866U))))))) : (((var_7) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) (unsigned short)32239))))), (((((/* implicit */long long int) arr_0 [i_0])) + (var_9))))))));
    }
    var_11 = ((/* implicit */short) var_8);
    /* LoopSeq 3 */
    for (unsigned long long int i_1 = 3; i_1 < 6; i_1 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) arr_4 [i_1]);
        arr_7 [i_1] = ((unsigned long long int) -3284719976488943848LL);
    }
    for (short i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_10 [i_2 - 1] [i_2 + 2]))))))));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 0LL)))) % (((unsigned long long int) arr_9 [i_2] [i_2])))))))));
        arr_11 [i_2 + 1] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2])))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)255)), (var_8)))) ? ((+(var_4))) : (var_7)))));
    }
    for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
    {
        var_15 ^= ((/* implicit */unsigned short) var_2);
        var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_3]))))) ^ (((/* implicit */int) (signed char)-100))))));
        arr_14 [i_3] [i_3] = ((/* implicit */signed char) 2848203285U);
    }
    var_17 = ((/* implicit */long long int) (unsigned short)36472);
    var_18 += ((min((((/* implicit */unsigned int) var_0)), (((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) & (var_7));
}
