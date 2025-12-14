/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118771
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
    var_16 = ((/* implicit */long long int) ((((unsigned long long int) max(((_Bool)1), ((_Bool)1)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15775)))));
    var_17 = ((/* implicit */short) var_1);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_19 = ((/* implicit */long long int) ((_Bool) ((int) arr_0 [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned int) arr_3 [5] [i_1]))), (var_3))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_3 [i_1] [i_1]))) ^ (max((14288605995393458696ULL), (4158138078316092920ULL))))))));
        var_21 &= ((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_1])) - (((/* implicit */int) arr_2 [(short)15])))) - (((/* implicit */int) max((arr_2 [i_1]), (arr_2 [i_1]))))));
    }
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_10)) : (15ULL))))) | (((/* implicit */unsigned long long int) (~(((unsigned int) (_Bool)1))))))))));
}
