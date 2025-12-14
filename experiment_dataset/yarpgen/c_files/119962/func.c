/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119962
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
    var_14 = ((/* implicit */long long int) max((((/* implicit */int) (short)0)), (-2024848137)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (short)6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (3966802538666724303LL))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) max(((short)3), (((/* implicit */short) ((((/* implicit */int) var_11)) > (((/* implicit */int) (short)0)))))));
                var_16 = (short)-6;
                var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)11)) & (-350479606))) << (((((/* implicit */int) min((((/* implicit */unsigned short) (short)9253)), (var_7)))) / (350479605)))));
            }
        } 
    } 
    var_18 = max((min((((short) var_13)), (((short) (unsigned short)54509)))), ((short)16508));
    var_19 = ((/* implicit */short) var_8);
}
