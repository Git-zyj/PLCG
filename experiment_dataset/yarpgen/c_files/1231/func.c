/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1231
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
    var_16 = ((/* implicit */short) var_15);
    var_17 = ((/* implicit */unsigned short) ((_Bool) var_2));
    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [7U] = ((/* implicit */unsigned int) ((signed char) ((unsigned char) arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (unsigned char)152))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)138)))) >= (((/* implicit */int) (signed char)31))));
        arr_4 [i_0] = ((/* implicit */signed char) (short)6604);
        arr_5 [i_0] = ((/* implicit */unsigned int) ((short) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_5))));
    }
    for (unsigned char i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-2857))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)155))))) : (max((2597251229572668683ULL), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1 - 1])))))));
        arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_14))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1880373257)))))))) : (min((((/* implicit */unsigned long long int) ((_Bool) (signed char)12))), (var_5)))));
        arr_12 [i_1 + 1] = ((/* implicit */unsigned short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)44896))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4322702718798047788ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_12))))))) ? (((/* implicit */long long int) min(((~(var_15))), (((/* implicit */unsigned int) (signed char)6))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (unsigned char)199)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)-2859))))) : (((/* implicit */long long int) (+(var_15))))))));
}
