/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150945
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) arr_2 [i_0]);
        var_16 = ((/* implicit */int) (+(((((/* implicit */long long int) 248522713U)) / (7795792673041529885LL)))));
        var_17 ^= (((((~(var_1))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) var_12)) ? (3857933483U) : (arr_2 [i_0]))) - (3857933483U))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((max((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (arr_2 [i_1]))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_14))))) >> (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_9)))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (287122329U))))))))));
        var_19 += ((/* implicit */unsigned char) (_Bool)0);
        var_20 = ((/* implicit */unsigned int) arr_3 [i_1]);
        arr_8 [(_Bool)1] [(short)9] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [18LL] [18LL]), (((/* implicit */long long int) arr_5 [i_1]))))) || (((/* implicit */_Bool) max((240079774), (((/* implicit */int) (_Bool)1))))))))) % (var_2)));
    }
    var_21 += ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
    var_22 = ((/* implicit */short) 1138364661U);
    var_23 = ((/* implicit */short) max((var_14), (((/* implicit */unsigned int) var_5))));
    var_24 += ((/* implicit */unsigned int) var_13);
}
