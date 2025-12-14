/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167357
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((var_8) - (var_8)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */int) (short)-7750)) > (((/* implicit */int) (unsigned short)7))))), (min(((short)-7741), (((/* implicit */short) (signed char)107))))))) ? (min((((/* implicit */long long int) var_9)), (min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (var_4))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (2857772056U))) ? (((/* implicit */long long int) ((int) var_3))) : (min((var_4), (((/* implicit */long long int) var_8))))))));
        var_11 = ((/* implicit */int) var_2);
        var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)115))));
        var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2159828938U)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (short)7750))))) ? (((/* implicit */int) ((short) arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)12000))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [18ULL]))) : (7355178147371171651ULL))))));
    }
    var_14 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) (signed char)107)) >> (((var_4) - (4925905557231481231LL))))));
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned short) var_3)), (var_9)));
}
