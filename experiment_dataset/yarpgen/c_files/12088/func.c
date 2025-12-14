/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12088
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)19)))), (((/* implicit */int) var_4))))) ? ((-(((((/* implicit */_Bool) 14384692109980269769ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((arr_0 [i_0]), (min((((/* implicit */long long int) ((((/* implicit */int) var_6)) & (-100945500)))), (arr_1 [i_0] [i_0])))));
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2186))) : ((~(12ULL)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (+((+(var_8)))));
        arr_4 [i_0] = ((/* implicit */long long int) (~(var_2)));
    }
    var_12 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
}
