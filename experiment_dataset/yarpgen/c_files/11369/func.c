/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11369
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
    var_10 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)40515)) || (((/* implicit */_Bool) var_4))))))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) (unsigned short)50080)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(var_9)))) : (((/* implicit */int) (unsigned short)51421))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (+((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (5170083990706825593ULL)))))))))));
        var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((min((5484546446742942709ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31605)) ? (-6008635426000627615LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)39241)) : (((/* implicit */int) arr_3 [i_1 + 1])))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1 - 1]))))) | ((~(((var_1) ? (13979768723292729658ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
        var_14 -= ((short) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)39241)))), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 2] [i_1])) >= (((/* implicit */int) var_9)))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (16255428947020273147ULL) : (13979768723292729658ULL)));
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33950)) + (((/* implicit */int) var_9)))))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)11205)) > (((/* implicit */int) (short)(-32767 - 1))))))))))));
        var_16 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)9910)) ? (((((/* implicit */int) ((((/* implicit */int) arr_7 [(unsigned short)11] [(unsigned short)11])) > (((/* implicit */int) var_5))))) % (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_2] [i_2]))))));
    }
}
