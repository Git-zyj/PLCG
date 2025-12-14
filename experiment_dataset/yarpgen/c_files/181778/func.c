/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181778
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_10 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [21U] [19U] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (-8644722233688929530LL)))) * (((arr_7 [i_1] [i_2 + 1] [3U] [(signed char)11]) ^ (((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [i_2 + 1] [(unsigned char)14] [i_2]))))));
                    arr_9 [i_1] = ((/* implicit */_Bool) arr_0 [i_0] [(signed char)14]);
                }
            } 
        } 
    }
    var_11 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (min((var_2), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
    var_12 = ((/* implicit */signed char) var_4);
}
