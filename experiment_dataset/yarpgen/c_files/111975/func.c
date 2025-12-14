/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111975
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
    var_19 = ((/* implicit */short) min((((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_0)))), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (unsigned short)52629)) || (((/* implicit */_Bool) -45702267)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_0])), ((short)1024)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) arr_0 [i_0])))))));
        var_20 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-100)), ((unsigned char)16)))) << ((((+(max((((/* implicit */long long int) (unsigned char)243)), (-4886460535697397692LL))))) - (243LL)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_15);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */int) max((var_21), ((-((((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9))))))));
        arr_6 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)38)) << (((13100127662210555900ULL) - (13100127662210555882ULL))))))));
        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
    }
    for (unsigned char i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        var_23 = ((/* implicit */short) ((((min((((/* implicit */long long int) var_10)), (var_18))) + (9223372036854775807LL))) << (((((min((((/* implicit */int) ((unsigned short) var_10))), (((((/* implicit */int) (unsigned char)38)) | (((/* implicit */int) (short)-32745)))))) + (32761))) - (48)))));
        var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_2 - 1])) && (((/* implicit */_Bool) var_1)))) && (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((var_8) << (((((/* implicit */int) (unsigned char)14)) - (14))))))))));
        arr_10 [i_2] = ((/* implicit */unsigned char) min((var_1), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)240)) && (((/* implicit */_Bool) (unsigned char)147)))))));
    }
}
