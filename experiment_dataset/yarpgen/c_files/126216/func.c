/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126216
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_12 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0 + 2]), (arr_0 [i_1]))))));
                arr_4 [i_0 + 2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))));
                arr_5 [i_0 - 1] [i_1] = ((/* implicit */unsigned char) (-(((long long int) 8864864946122957710LL))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (max((((((/* implicit */long long int) ((/* implicit */int) var_8))) % (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_7) : (var_7)))))) : (((/* implicit */long long int) max((((/* implicit */int) max(((unsigned short)3016), ((unsigned short)45932)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))))))));
    var_14 = ((/* implicit */unsigned short) var_4);
}
