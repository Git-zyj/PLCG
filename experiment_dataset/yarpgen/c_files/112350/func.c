/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112350
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
    var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 6; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((signed char) ((arr_2 [(short)8] [(short)6] [(short)7]) + (arr_2 [3ULL] [(unsigned char)9] [8]))));
                    var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (signed char)(-127 - 1))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) var_6);
        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0 + 1])) ? (14559242917802624782ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20514)))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_18 = min((min((((/* implicit */unsigned int) arr_8 [i_3])), (((((/* implicit */_Bool) (short)-3070)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [10]))) : (var_4))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_3]))))));
        arr_10 [22] = ((/* implicit */unsigned char) var_4);
    }
    var_19 = max((((unsigned long long int) ((((/* implicit */_Bool) (short)7864)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (signed char)114))))))));
}
