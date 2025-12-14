/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186063
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
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (_Bool)0)))) != ((+(((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */int) (((~(var_7))) == (arr_2 [i_0 - 1] [i_0 - 1])))))))));
                var_16 = ((/* implicit */_Bool) ((int) ((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_14))))));
                var_17 ^= ((/* implicit */int) (+(max((arr_5 [i_0 + 1] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1]))))));
                arr_6 [13ULL] [13ULL] = (~(max((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_11))), (((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0 + 1])))));
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_1)) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((int) (_Bool)1))) : (var_3))));
}
