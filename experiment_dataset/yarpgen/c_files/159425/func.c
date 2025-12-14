/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159425
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
    var_12 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (min((((/* implicit */unsigned long long int) var_8)), (var_1))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((var_0), (((/* implicit */unsigned long long int) var_6)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (+(arr_1 [i_0] [i_0]))))));
        var_15 += ((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned char) 4099043519U))) == (((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)9])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))) ? (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((arr_0 [21] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) (+(((long long int) arr_0 [i_1] [i_1]))));
        var_16 = ((/* implicit */int) ((2170216770502823267ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        var_17 ^= (-(var_1));
        arr_8 [(_Bool)1] = ((/* implicit */short) arr_3 [i_1]);
    }
    var_18 = min(((((-(2688936379072822019ULL))) - (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (var_3)))))), (((/* implicit */unsigned long long int) var_6)));
}
