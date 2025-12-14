/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159461
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
    var_19 = ((/* implicit */short) var_1);
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) / (((((/* implicit */_Bool) var_18)) ? (((((/* implicit */int) var_18)) / (((/* implicit */int) var_13)))) : (((/* implicit */int) ((unsigned char) var_4))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_3]))) : (var_1)))));
                        var_22 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (((unsigned long long int) var_11))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            arr_17 [5ULL] [i_0] [5ULL] |= ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
            arr_18 [i_0] [i_4] = ((/* implicit */long long int) ((unsigned char) ((short) var_1)));
        }
    }
}
