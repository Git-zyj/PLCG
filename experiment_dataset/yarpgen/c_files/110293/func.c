/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110293
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [11LL] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)157))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32664))) & (((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (var_2)))) : ((+(arr_3 [i_2]))))))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) (((-(((/* implicit */int) arr_2 [i_0])))) + (((/* implicit */int) min((var_12), (var_4))))))) - (min((arr_5 [i_0] [i_1] [i_0]), (((/* implicit */long long int) ((unsigned int) 14951826427406084099ULL)))))));
                    var_17 = ((/* implicit */short) max((arr_3 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) arr_4 [i_1] [(unsigned char)12]))))) && (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_2)))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
}
