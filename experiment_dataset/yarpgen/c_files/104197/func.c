/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104197
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
    var_16 = var_5;
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) min((((unsigned int) ((((/* implicit */int) arr_2 [i_1])) & (229461752)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1])))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_1]), (arr_1 [i_0 - 3])))) ? (max((((/* implicit */unsigned long long int) 5425907620131234256LL)), (8577437274692033362ULL))) : (((/* implicit */unsigned long long int) ((long long int) (-9223372036854775807LL - 1LL))))));
                arr_6 [i_0 - 4] = ((/* implicit */signed char) arr_0 [i_1] [i_0]);
                var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (unsigned short)0))))));
            }
        } 
    } 
}
