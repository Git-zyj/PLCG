/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155933
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)24908))))) ? (((/* implicit */int) ((short) var_14))) : (((int) (unsigned char)95))))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) min((((arr_2 [i_0]) || (arr_2 [i_0]))), (((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))));
        arr_6 [i_0] [i_0] = ((/* implicit */int) var_18);
        arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) (_Bool)1))))))));
        arr_8 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
    }
    var_20 ^= ((/* implicit */long long int) min((max((((/* implicit */int) (unsigned short)7182)), ((~(((/* implicit */int) var_1)))))), (((/* implicit */int) var_10))));
    var_21 = ((/* implicit */signed char) (_Bool)1);
}
