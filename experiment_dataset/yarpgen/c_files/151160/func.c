/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151160
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
    var_12 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (~(((((/* implicit */_Bool) ((long long int) arr_2 [i_0] [i_0]))) ? (var_2) : (((/* implicit */long long int) arr_0 [i_0])))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) -7864923899857770162LL)) ? (arr_5 [i_0] [i_1 + 1] [i_0]) : (arr_5 [i_0] [i_1 + 1] [i_0]))), (((((/* implicit */_Bool) var_3)) ? (arr_5 [i_0] [i_1 + 1] [i_0]) : (var_2)))));
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1]))));
                arr_9 [i_0] [0] [i_0] = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) var_5)))) && (((_Bool) -7864923899857770162LL)))) ? (9223372036854775807LL) : (arr_3 [i_0] [i_0] [(_Bool)1])));
                arr_10 [3LL] [i_0] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((-7864923899857770162LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) ? (min((max((((/* implicit */long long int) var_0)), (arr_2 [i_1] [i_0]))), (((long long int) arr_0 [i_0])))) : (min((var_11), (((/* implicit */long long int) ((_Bool) arr_2 [i_0] [i_0])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((max((((var_11) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (var_1))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) -1594748846))))) ? (((/* implicit */long long int) ((246592456) << (((/* implicit */int) ((var_5) <= (((/* implicit */long long int) ((/* implicit */int) var_9))))))))) : (((((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))) - (var_6)))));
}
