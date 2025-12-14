/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152928
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
    var_10 = ((/* implicit */unsigned long long int) 3189904425U);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = max((((9883470790671674691ULL) - (var_5))), (((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0 - 4]) : (arr_2 [i_0 - 4]))));
        var_11 = ((/* implicit */unsigned int) min((var_11), ((-(((arr_1 [i_0 - 4]) & (arr_1 [i_0 - 4])))))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8563273283037876941ULL)) && (((/* implicit */_Bool) 1906934620U))))), (8563273283037876941ULL)))))))));
    }
    var_13 = max((max((7074386240592980129ULL), (8563273283037876936ULL))), (max((((/* implicit */unsigned long long int) ((338183699U) >= (2993434278U)))), (min((17540549967155855565ULL), (9883470790671674680ULL))))));
}
