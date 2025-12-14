/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180337
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
    var_13 += ((/* implicit */long long int) ((unsigned int) max((-9191028584314132873LL), (-2271936991727350455LL))));
    var_14 += ((/* implicit */unsigned int) var_5);
    var_15 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (~(9191028584314132873LL)))) && (((/* implicit */_Bool) (~(var_6)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) arr_3 [i_0]);
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min(((((~(arr_2 [i_2] [i_1] [i_0]))) & (arr_3 [i_2]))), (max((arr_2 [i_0] [i_1] [i_0]), (arr_2 [i_0] [i_2] [i_2])))));
                    var_17 = ((/* implicit */long long int) (~(((arr_2 [i_0] [i_1] [i_2]) / (arr_3 [i_1])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) var_7)) & (2271936991727350445LL)))) ? ((~(var_5))) : (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_8))) ? (var_0) : (((3436861734U) ^ (479061074U))))))));
}
