/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142408
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1 + 2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 274189989U)) ? (((/* implicit */int) var_5)) : (arr_3 [i_0] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (4020777320U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_1 - 2] [i_1]) : (arr_1 [i_1 + 2] [i_1 + 2]))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25030))) : (1269881951370107527ULL)))))));
                var_10 &= ((/* implicit */signed char) arr_0 [i_1 + 1]);
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) ((short) (-((+(-1LL))))));
}
