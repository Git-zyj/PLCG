/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184233
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
    var_19 = ((((/* implicit */_Bool) ((((var_1) + (2147483647))) >> (((var_1) + (1390707264)))))) ? (((/* implicit */int) min((max((((/* implicit */unsigned short) (short)-12398)), (var_5))), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */int) var_2)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 = min((((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */int) var_16)) - (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 14646279018288054319ULL))));
        arr_5 [i_0] = ((/* implicit */unsigned int) 360945944);
    }
}
