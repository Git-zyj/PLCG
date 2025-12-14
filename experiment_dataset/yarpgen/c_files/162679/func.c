/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162679
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) var_6))));
    var_11 = ((/* implicit */unsigned long long int) ((_Bool) var_8));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)11157))))) ? (((((/* implicit */_Bool) 16254317220577736580ULL)) ? (140737488355327LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)203))))) : (max((((/* implicit */long long int) arr_1 [i_1])), (arr_3 [i_0] [i_0]))))), (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
                var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_3 [i_0 + 1] [i_0 - 1])))) * (((unsigned int) min((var_5), (var_7))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) arr_2 [i_0] [i_0 + 1] [i_0])))));
                arr_6 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(max((((/* implicit */long long int) (unsigned short)17)), (arr_3 [i_0] [i_1]))))))));
            }
        } 
    } 
}
