/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126193
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
    var_13 = ((/* implicit */long long int) var_10);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [(short)8] |= ((/* implicit */unsigned short) arr_2 [i_0]);
        var_14 = (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) min((((/* implicit */long long int) (unsigned short)65527)), (4437502966456000036LL)))))) : (max((6U), (((/* implicit */unsigned int) arr_0 [i_0])))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) min((arr_0 [i_0]), ((short)32767))))) || (((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        var_16 = ((/* implicit */short) (_Bool)0);
        var_17 = ((/* implicit */_Bool) max((arr_1 [i_1 + 1] [i_1 - 1]), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1] [i_1 - 1])) >> (((((/* implicit */int) arr_4 [i_1] [i_1 - 2])) - (26))))))));
    }
    var_18 ^= ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (short)32750)) & (((/* implicit */int) ((unsigned short) var_11))))));
}
