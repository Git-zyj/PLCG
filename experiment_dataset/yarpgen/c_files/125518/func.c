/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125518
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
    var_13 = (-(((/* implicit */int) var_2)));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) ((signed char) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (((68719476735ULL) % (14777432013847198151ULL))))));
        var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) || (var_2))))) <= (arr_3 [i_0 - 1]))))));
        var_16 ^= ((/* implicit */unsigned int) ((((arr_0 [i_0 - 1] [i_0 - 1]) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_9)), ((short)18397))))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((-(var_6))) : ((-(((/* implicit */int) (short)18401)))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 22; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (7485038111847486015LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))) ? (((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_7))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1 + 1])))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((arr_5 [i_1 - 2]) ? (((/* implicit */int) arr_4 [i_1 - 2])) : (((/* implicit */int) var_11))));
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_18 = arr_3 [i_2];
        var_19 = ((/* implicit */int) min((var_19), (((((((/* implicit */_Bool) arr_1 [i_2])) ? (var_6) : (((/* implicit */int) arr_8 [i_2] [i_2])))) << (((/* implicit */int) arr_5 [i_2]))))));
        var_20 ^= max((((/* implicit */unsigned short) arr_8 [i_2] [i_2])), ((unsigned short)2143));
    }
    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned long long int) var_2);
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_10 [i_3]), (arr_10 [i_3])))))))));
        arr_14 [i_3] = ((/* implicit */_Bool) ((unsigned long long int) -610236625637589318LL));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            {
                var_22 = ((/* implicit */short) (_Bool)1);
                arr_19 [2U] = ((/* implicit */int) arr_5 [i_4]);
            }
        } 
    } 
}
