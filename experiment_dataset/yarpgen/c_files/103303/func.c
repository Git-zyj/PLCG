/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103303
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
    var_12 = ((/* implicit */_Bool) var_0);
    var_13 += ((/* implicit */long long int) 232351412U);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2713402477U)) ? (3661328032U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5)))))) ? (max((((/* implicit */long long int) 4062615897U)), (arr_0 [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2]))))))))))));
        var_15 = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) 4062615879U);
        var_16 = var_10;
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (signed char)42)) ? (arr_0 [i_1]) : (arr_0 [i_1]))));
        var_18 = ((/* implicit */long long int) ((min((arr_4 [i_1]), (((/* implicit */long long int) max((4062615887U), (((/* implicit */unsigned int) (signed char)63))))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) & (232351413U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((4062615897U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [(short)2]))))))))));
    }
    var_19 = ((/* implicit */short) max((var_7), (((/* implicit */unsigned short) var_5))));
}
