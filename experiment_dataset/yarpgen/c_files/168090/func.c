/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168090
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
    var_16 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) 0ULL);
                var_17 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)254))))));
                var_18 -= ((/* implicit */long long int) (~(4ULL)));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 4594338860527840138ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_9)))))) ? (((arr_3 [i_0]) ? (5737890523128700766ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(arr_2 [i_0])))), (((arr_0 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))))));
                arr_5 [i_0] [i_1] = (+(((max((-2934265491833289845LL), (((/* implicit */long long int) (unsigned char)29)))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_6))))))));
            }
        } 
    } 
}
