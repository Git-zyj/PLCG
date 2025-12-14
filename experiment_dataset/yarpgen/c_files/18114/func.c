/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18114
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (min((max((max((((/* implicit */unsigned long long int) var_10)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_4))))));
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
    var_14 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (((((/* implicit */_Bool) 2305561534236983296ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_9)))));
        var_15 |= max((((/* implicit */unsigned long long int) arr_2 [i_0])), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((16413987679099075802ULL) | (16141182539472568319ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) % (((/* implicit */int) arr_1 [i_0]))))))));
    }
    for (unsigned short i_1 = 3; i_1 < 23; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2305561534236983309ULL)) ? (((/* implicit */int) (unsigned short)8188)) : (((/* implicit */int) (unsigned short)30461))))) ^ (max((2305561534236983296ULL), (var_9))))) < ((-(((arr_7 [i_1] [i_1 + 1]) * (var_9))))))))));
        arr_9 [i_1] [i_1] = var_4;
        var_17 &= ((/* implicit */unsigned short) max((53210239537184804ULL), (15757212819942774822ULL)));
    }
}
