/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162431
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
    var_14 = ((max((min((11625784191965993731ULL), (((/* implicit */unsigned long long int) var_12)))), (((((/* implicit */unsigned long long int) var_9)) * (var_2))))) != (((/* implicit */unsigned long long int) min((min((131040), (((/* implicit */int) (unsigned short)59323)))), (((/* implicit */int) var_0))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_4 [12] &= ((/* implicit */unsigned short) min((max((((int) -131040)), ((~(((/* implicit */int) (unsigned short)1)))))), (((/* implicit */int) ((short) arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((min(((-(var_7))), (((/* implicit */unsigned long long int) var_0)))) <= (((var_2) | (((/* implicit */unsigned long long int) 0))))));
            var_15 = ((unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (var_2))), (((unsigned long long int) 397894675))));
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (_Bool)0))) / (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_1])), (var_0)))))))));
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((unsigned short) ((arr_5 [i_2] [i_2] [i_2]) ^ (((/* implicit */int) (unsigned short)41561))));
        var_18 = max(((-((-(arr_8 [i_2] [i_2]))))), (min((((/* implicit */int) arr_3 [i_2] [i_2])), (max((((/* implicit */int) arr_3 [i_2] [4ULL])), (var_9))))));
        arr_11 [i_2] = ((/* implicit */_Bool) min((((arr_5 [(unsigned short)0] [i_2] [i_2]) | (-397894676))), (((/* implicit */int) ((_Bool) ((397894684) ^ (574405520)))))));
    }
    var_19 = ((/* implicit */_Bool) ((unsigned short) max((max((var_2), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((unsigned short) var_3))))));
}
