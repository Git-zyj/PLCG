/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179622
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_19 |= ((/* implicit */_Bool) ((unsigned long long int) arr_0 [4ULL]));
        var_20 = ((/* implicit */_Bool) (-(min((max((arr_2 [i_0] [(unsigned char)10]), (11091223088152208811ULL))), (((arr_0 [i_0]) ^ (12780889603537149116ULL)))))));
        var_21 = ((((/* implicit */_Bool) (+(-214483032)))) ? (((((/* implicit */_Bool) ((var_10) ? (-1627509473) : (((/* implicit */int) (short)-14457))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39757))) : (arr_2 [i_0] [11U]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (short)10956)))))));
    }
    var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_0)) ? ((+(1627509460))) : (((/* implicit */int) ((((/* implicit */_Bool) -688828530)) || (((/* implicit */_Bool) -1627509473)))))))));
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_14))));
    var_24 -= ((/* implicit */unsigned char) (-(((((((/* implicit */unsigned int) -901489372)) == (var_9))) ? (max((((/* implicit */long long int) (unsigned short)47423)), (var_1))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-25320)))))))));
}
