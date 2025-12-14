/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153124
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_12)), (18446744073709551594ULL)));
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) max((min((max((-1149038383), (var_8))), (((/* implicit */int) (unsigned char)230)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-21961)) > (((/* implicit */int) (unsigned char)64)))))) < (max((3184724715845273636ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))))));
                arr_5 [i_0] [(short)23] = ((/* implicit */signed char) ((min((13773569414814250167ULL), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))) + (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_17)))) - (((/* implicit */int) max((var_15), (arr_1 [2U] [i_0])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_4);
    var_20 = ((((/* implicit */_Bool) min((max((var_12), (var_12))), (((/* implicit */signed char) (_Bool)1))))) || (((/* implicit */_Bool) ((unsigned int) (unsigned char)127))));
}
