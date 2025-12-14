/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100220
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
    var_12 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = var_5;
                arr_5 [i_1] [(unsigned short)12] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1 + 1]))) : (-6142453881789074912LL)))) ? (((((/* implicit */_Bool) 131071U)) ? (((/* implicit */int) arr_0 [i_1])) : (var_2))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)14283)) : (((/* implicit */int) (short)7553))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(4294836224U)))) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_0)))))) : (min((((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) var_8))))), (var_11)))));
            }
        } 
    } 
    var_14 = var_11;
}
