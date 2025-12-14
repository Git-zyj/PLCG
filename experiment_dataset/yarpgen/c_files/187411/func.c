/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187411
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
    for (long long int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) != (arr_1 [i_0 - 4] [i_0]))))) : (var_2)))));
        var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((max((((/* implicit */int) (signed char)63)), (var_5))) > (((/* implicit */int) arr_0 [i_0] [i_0 - 4])))))));
    }
    for (long long int i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        var_12 = ((/* implicit */signed char) (((~((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9506))) : (var_2))))) >= (((/* implicit */unsigned long long int) ((-784607159914896737LL) / (((/* implicit */long long int) arr_1 [i_1] [i_1])))))));
        var_13 += ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned char) (_Bool)1))), (max((var_0), (((/* implicit */long long int) var_9))))));
    }
    var_14 = ((/* implicit */unsigned int) max((var_8), (((/* implicit */int) ((signed char) ((long long int) var_10))))));
    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-107)), ((unsigned char)205))))))), (max((((/* implicit */unsigned int) (~(-1265744851)))), (10U)))));
}
