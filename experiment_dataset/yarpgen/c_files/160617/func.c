/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160617
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((/* implicit */int) (_Bool)1))));
    var_12 = ((/* implicit */int) min((var_12), ((((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) - (2147483643))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) >= (max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))))))))));
    var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_1)) > ((+(18446744073709551593ULL)))))), (var_1)));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_2] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_4 [i_2] [i_2])) << (((min((((/* implicit */int) var_10)), (var_2))) + (23))))));
                    arr_8 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (arr_1 [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 - 1] [i_1] [i_2])))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (614799431U) : (((/* implicit */unsigned int) -507923591)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) max((max(((_Bool)1), (arr_4 [i_0] [i_0]))), ((_Bool)1)))) : (((/* implicit */int) (unsigned short)896))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)27730)), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23561))) == (var_6))))) ^ (((long long int) arr_12 [i_3])))))))));
        arr_13 [i_3] = ((/* implicit */long long int) ((signed char) (unsigned short)65472));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (12001887681852530703ULL)))));
        arr_17 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17089929177017663718ULL)) ? (((/* implicit */unsigned int) 1563327308)) : (4294967292U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4]))) : (arr_16 [i_4] [i_4])));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_17 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 18446744071562067968ULL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))));
        var_18 = ((/* implicit */signed char) 3680167853U);
    }
}
