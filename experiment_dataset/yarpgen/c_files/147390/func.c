/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147390
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
    var_15 = ((long long int) max((var_9), (((/* implicit */unsigned long long int) var_13))));
    var_16 = ((/* implicit */short) ((max((var_12), (((/* implicit */long long int) var_1)))) | (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_17 += ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */long long int) arr_0 [10ULL])), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (short)7878)))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
                        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
                        var_20 &= (_Bool)1;
                    }
                } 
            } 
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((short) ((unsigned long long int) (_Bool)1)))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) ^ (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_1))))))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_14)) > ((((+(((/* implicit */int) var_1)))) + (((/* implicit */int) var_7))))));
        }
        var_22 &= ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) var_14))) ^ (arr_4 [i_0]))), (((/* implicit */long long int) var_5))));
    }
}
