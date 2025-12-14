/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170555
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
    var_15 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-7))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0]))))) / (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)65535)))) : (arr_1 [i_0]))));
        var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_13) : (arr_1 [i_0])))) ? (((15544988122590909018ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31263))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51304))))) <= (min((((((/* implicit */_Bool) (unsigned short)20016)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_0 [i_0])) - (15115))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_2 [i_1])))) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)45514)) >= (((/* implicit */int) (short)29936)))))))) >= (((((/* implicit */_Bool) min((15544988122590909003ULL), (0ULL)))) ? (arr_4 [i_1]) : (((((/* implicit */_Bool) (unsigned short)7)) ? (2901755951118642601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))))));
        arr_7 [i_1] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20016)) ? (14418816950794729127ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))) && (((/* implicit */_Bool) var_5)))));
        var_17 = ((/* implicit */unsigned short) ((long long int) 2901755951118642598ULL));
        var_18 = ((/* implicit */unsigned short) ((arr_4 [i_1]) / (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)16256)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)14336)))) * (((/* implicit */int) arr_2 [i_1])))))));
    }
    var_19 = ((/* implicit */long long int) var_6);
}
