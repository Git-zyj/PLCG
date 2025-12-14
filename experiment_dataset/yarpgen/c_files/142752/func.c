/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142752
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
    var_19 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) max((max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)16256)) * (((/* implicit */int) var_11))))), (max((((/* implicit */long long int) arr_1 [i_0])), (arr_2 [i_0]))))), (((/* implicit */long long int) (unsigned short)16256))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (3057724435U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))), (max(((~(arr_2 [i_0]))), (((/* implicit */long long int) min(((unsigned char)253), (var_17))))))));
        var_21 ^= ((/* implicit */unsigned short) min(((~(arr_2 [i_0]))), (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)49279)), (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)60262)))) + (((/* implicit */int) (unsigned short)49287))))));
        var_23 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_5 [(unsigned short)10]) : (((/* implicit */long long int) 2058022770U))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (1237242860U)))))));
        var_24 = ((/* implicit */int) max((var_24), (((((((((/* implicit */int) (short)-9773)) | (((/* implicit */int) arr_4 [i_1])))) + (2147483647))) << (((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1])))) + (17698))) - (16)))))));
    }
}
