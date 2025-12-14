/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18900
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_0]);
        var_12 = ((/* implicit */unsigned int) ((arr_0 [i_0 + 2] [i_0 + 2]) ^ (arr_0 [i_0 + 2] [i_0 + 1])));
        var_13 = ((/* implicit */unsigned int) var_10);
        var_14 = ((/* implicit */unsigned int) ((((4433203963999418927LL) % (arr_1 [i_0] [i_0]))) - (((long long int) arr_0 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) (((_Bool)1) ? (745387333088225307ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
                    arr_9 [i_1] [i_1] = ((/* implicit */signed char) arr_5 [i_2 + 3] [i_2] [i_1 - 1]);
                }
            } 
        } 
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_1])))))));
    }
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) var_8)), (var_2)))) << (((((((/* implicit */int) (unsigned short)8)) | (((/* implicit */int) var_6)))) - (61)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((var_4) - (2110887410U)))))) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_7))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_5)), (var_8)))) ? (var_9) : (((/* implicit */unsigned long long int) ((long long int) (signed char)14)))))));
}
