/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120448
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
    var_16 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((arr_0 [i_0]) % (((/* implicit */unsigned long long int) var_4))));
        arr_3 [i_0] = ((/* implicit */int) var_0);
        arr_4 [0ULL] [i_0] = ((/* implicit */unsigned char) var_10);
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)21564)) / (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (796476751)))));
    }
    var_18 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    arr_12 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [i_1] [i_1]), (((/* implicit */int) arr_5 [i_1]))))) ? (max((((/* implicit */unsigned int) var_0)), (arr_6 [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -796476752)) ? (-796476747) : (((/* implicit */int) (unsigned short)32640)))))))) && (((/* implicit */_Bool) max((951218868U), (((/* implicit */unsigned int) -796476747)))))));
                    arr_13 [i_1] [i_1] [i_3] = ((/* implicit */signed char) (unsigned short)32658);
                }
            } 
        } 
    } 
}
