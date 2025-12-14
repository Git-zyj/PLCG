/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184018
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((/* implicit */int) ((unsigned short) var_1))) : ((-(((/* implicit */int) arr_1 [i_0 + 1]))))));
                arr_8 [2ULL] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (var_7)))) ? (((var_15) ^ (var_7))) : (((var_9) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1] [(short)5]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) max((var_6), (((/* implicit */unsigned long long int) var_12))));
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((signed char) (unsigned short)2704));
        var_18 ^= ((/* implicit */signed char) (~(((((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))))) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)58)), ((unsigned short)53628)));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (unsigned short)53628)) << (((((/* implicit */int) (unsigned short)11907)) - (11897))))))) ? (min(((((_Bool)1) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)632)))), (((/* implicit */int) (short)-633)))) : (((/* implicit */int) (short)10157))));
    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * ((~((-(((/* implicit */int) var_1))))))));
}
