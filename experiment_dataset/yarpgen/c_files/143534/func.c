/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143534
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) max((arr_0 [i_0]), (arr_1 [i_0])))), (max(((unsigned short)65535), ((unsigned short)9782)))))), (var_9))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (+(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)21))))), (1369335054U))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (2147483647)))) ? (2925632235U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 3647397174U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1]))))), (max((-838254471139877983LL), (((/* implicit */long long int) 2925632250U))))));
        var_18 += ((/* implicit */long long int) (+((+(((/* implicit */int) arr_5 [i_1]))))));
    }
    var_19 += ((/* implicit */_Bool) max((var_9), (((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    var_20 = ((/* implicit */_Bool) (((~((-(((/* implicit */int) var_0)))))) * (((/* implicit */int) var_2))));
}
