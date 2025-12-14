/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119959
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
    for (unsigned char i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_1] [i_0 + 4]) << (((min((((/* implicit */long long int) arr_4 [i_0 + 4] [i_1] [i_1])), (var_7))) - (556961153LL)))))) ? (((((((/* implicit */_Bool) 10654840844216437169ULL)) ? (3367573171146377885ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10331))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) - (-8643609272428597099LL)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [1] [i_1] [(signed char)5]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)15446)))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_1] [i_0 + 4]) << (((((min((((/* implicit */long long int) arr_4 [i_0 + 4] [i_1] [i_1])), (var_7))) - (556961153LL))) + (186273095LL)))))) ? (((((((/* implicit */_Bool) 10654840844216437169ULL)) ? (3367573171146377885ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10331))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) - (-8643609272428597099LL)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [1] [i_1] [(signed char)5]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)15446))))))))));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) min((min((min((((/* implicit */long long int) arr_4 [i_0 + 1] [(signed char)4] [i_1])), (var_7))), (((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */int) var_9))))))), (var_7))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) (unsigned short)50107)))))) & (min((16827522014679136ULL), (((/* implicit */unsigned long long int) var_11))))))));
}
