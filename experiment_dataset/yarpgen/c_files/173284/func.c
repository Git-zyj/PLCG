/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173284
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [(signed char)4] [(short)4] [(unsigned char)8] = ((/* implicit */long long int) ((short) max((((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)0)), (arr_0 [(short)1] [8ULL])))), (arr_7 [1U] [6ULL] [5ULL]))));
                    arr_11 [(_Bool)1] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10799090430446316337ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16384))) : (15756496254587614025ULL)));
                }
            } 
        } 
    } 
    var_11 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_0)) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10799090430446316338ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))) : (((var_9) + (var_6)))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)66))) * (126100789566373888LL)));
}
