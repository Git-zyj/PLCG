/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179212
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0 - 2] = ((/* implicit */unsigned short) min(((+(-7971474065615338048LL))), (((long long int) (unsigned short)0))));
        var_16 = ((/* implicit */signed char) arr_1 [i_0 + 1] [i_0]);
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_1 + 2]) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 - 1]))))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (unsigned char)0))))));
                    var_17 = ((/* implicit */long long int) arr_5 [8]);
                    var_18 = ((/* implicit */unsigned short) 263507448);
                }
            } 
        } 
        arr_10 [i_1 + 1] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1 + 3])) + (((/* implicit */int) ((_Bool) var_2)))));
    }
    var_19 = var_10;
    var_20 = 263507448;
    var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (max((((long long int) var_11)), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) min((((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-98))))), ((~(((/* implicit */int) var_4)))))))));
}
