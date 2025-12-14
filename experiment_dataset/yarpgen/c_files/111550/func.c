/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111550
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
    var_12 = (-(((/* implicit */int) var_0)));
    var_13 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_2 [i_1] [i_0] [i_0]))) - (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */unsigned long long int) ((long long int) 4113148851093320393LL))) - (((arr_2 [i_1] [i_0] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (-715730512964251608LL) : (((/* implicit */long long int) ((var_4) - (((/* implicit */int) arr_0 [i_0]))))))))));
                var_14 = arr_0 [i_0];
                var_15 = ((/* implicit */signed char) var_1);
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_2 [i_1] [i_0] [i_0])))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1359262642U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (-3738470560420138254LL)))), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_2 [i_1] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2657455825U)) ? (-4113148851093320380LL) : (((/* implicit */long long int) (-(((/* implicit */int) var_2))))))))));
            }
        } 
    } 
}
