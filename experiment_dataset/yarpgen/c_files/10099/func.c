/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10099
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
    var_16 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) * (var_9));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))) > (min((arr_4 [i_1 + 3]), (arr_4 [i_1 + 2])))));
                arr_5 [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((arr_1 [i_0] [i_1 - 1]) | (min((var_7), (var_6)))))));
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) var_5)) | (0U))))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_3 [(unsigned short)9] [i_1] [0LL])), (var_7)))) ^ ((~(-965265900090370856LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (var_3)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)139)) ? (-2137377318) : (-283053517)));
}
