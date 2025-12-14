/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111307
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
    var_18 = ((/* implicit */_Bool) var_16);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2702333332U)) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)127))))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 3])) - (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)207)) < (((/* implicit */int) var_0))))))))));
        var_20 = ((/* implicit */short) ((signed char) ((short) ((((/* implicit */_Bool) (unsigned char)207)) || (((/* implicit */_Bool) (unsigned char)48))))));
    }
    for (short i_1 = 1; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */short) (((-(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_3)) : (-1209490796))))) - (((/* implicit */int) ((((/* implicit */int) ((-3647605538082435575LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208)))))) != (((/* implicit */int) ((((/* implicit */int) (signed char)39)) <= (((/* implicit */int) arr_0 [i_1] [i_1 - 1]))))))))));
        var_21 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) != (2111386119089751668LL)))) <= (((int) (_Bool)1)))));
    }
}
