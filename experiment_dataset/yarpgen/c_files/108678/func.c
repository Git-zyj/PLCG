/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108678
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
    var_17 = ((/* implicit */short) max(((-(((/* implicit */int) ((short) 3948222220U))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!((_Bool)1)))) : ((+(var_1)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_0);
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1])) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) -5520851312928467336LL))))))))));
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((short) (_Bool)1));
        }
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) arr_11 [i_0] [i_0]);
            arr_13 [i_0] [i_2] = ((/* implicit */short) arr_11 [i_0] [i_0]);
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (arr_15 [i_0] [i_3] [i_0]) : (((/* implicit */long long int) 2030980060U))));
            arr_16 [i_0] = ((((/* implicit */_Bool) 1961498453)) ? ((~(-7364821710055384631LL))) : (arr_1 [i_0] [i_3]));
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])) | (((unsigned long long int) 0ULL))))));
        }
        var_20 &= ((/* implicit */int) var_4);
    }
    for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 4) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)0)), ((-(5520851312928467359LL)))))) : (var_15)));
        var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_6 [i_4 - 1] [i_4] [i_4]) + (9223372036854775807LL))) << (((578648163) - (578648163)))))) ? (((-5520851312928467336LL) + (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (min((arr_6 [i_4 - 1] [i_4] [i_4 + 1]), (((/* implicit */long long int) (signed char)7))))));
    }
    var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
    var_24 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (((long long int) var_4))));
}
