/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131876
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_12 = min((((/* implicit */unsigned long long int) (unsigned short)26943)), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (var_5)))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))));
        var_13 = ((/* implicit */unsigned short) ((_Bool) (~(((arr_1 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [4LL]))))))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */int) var_7)) ^ (((/* implicit */int) max(((unsigned char)175), (arr_3 [i_0])))))))))));
        arr_4 [i_0] = ((/* implicit */int) 0ULL);
    }
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        arr_7 [i_1] = max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (var_9)))) ? (arr_5 [i_1 - 1] [10ULL]) : (arr_5 [i_1 - 1] [i_1]))), (((/* implicit */unsigned int) arr_6 [i_1 - 1] [i_1])));
        arr_8 [i_1] = ((/* implicit */unsigned int) arr_6 [i_1] [(unsigned short)9]);
    }
    var_15 = ((max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_5)) : (var_9))))) ^ (((/* implicit */unsigned long long int) (((-(var_11))) << (((/* implicit */int) var_7))))));
}
