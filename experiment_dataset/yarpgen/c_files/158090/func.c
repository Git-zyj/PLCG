/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158090
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (+((-(arr_2 [i_1 - 1] [i_1 - 2])))));
                var_19 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-49)) && (((/* implicit */_Bool) (unsigned short)0)))))) > (((var_3) * (((/* implicit */int) (unsigned char)0))))));
                var_20 = min((-1162711976861783522LL), (((((/* implicit */_Bool) min((arr_1 [(_Bool)1] [i_1]), (((/* implicit */long long int) arr_3 [i_0] [i_1]))))) ? (max((((/* implicit */long long int) arr_3 [i_0] [i_1 + 1])), (arr_2 [i_0] [19U]))) : (var_13))));
                var_21 = ((/* implicit */unsigned short) min((((arr_1 [i_1 - 2] [i_1 - 2]) >> (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)49))) : (arr_1 [i_0] [i_1 - 1]))))), (((((/* implicit */_Bool) 1297714790850671304ULL)) ? (((/* implicit */long long int) 0)) : (1162711976861783522LL)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (short)(-32767 - 1))))))) && (((/* implicit */_Bool) var_14))));
}
