/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156524
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (min((((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) / (((arr_4 [i_0]) / (var_13))))), (((/* implicit */unsigned long long int) min((arr_2 [i_1]), (arr_2 [i_0]))))))));
                var_17 = ((/* implicit */unsigned char) ((arr_0 [i_0]) - (((((/* implicit */long long int) ((unsigned int) arr_4 [i_1]))) & (((arr_3 [i_0] [i_1]) + (arr_0 [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    {
                        var_18 += ((/* implicit */unsigned short) ((min((arr_13 [i_2] [i_3] [i_4] [i_5]), (arr_13 [i_2] [i_2] [i_4] [i_2]))) - (((/* implicit */long long int) ((((arr_14 [21LL] [21LL] [i_4] [i_2]) * (var_7))) + (min((var_1), (((/* implicit */unsigned int) arr_6 [i_2] [i_5])))))))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_5] [i_4] [i_2])) ? (var_13) : (((/* implicit */unsigned long long int) arr_9 [i_2] [i_3] [i_3]))))))));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_7 [i_4] [5]))));
                    }
                } 
            } 
        } 
        arr_16 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_12 [i_2] [i_2] [i_2])))) ? ((~((~(arr_6 [8LL] [i_2]))))) : (((/* implicit */int) arr_8 [i_2] [i_2]))));
    }
}
