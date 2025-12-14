/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163150
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_15 = (unsigned char)23;
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (var_8))))))) || (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_10)), ((unsigned char)35))))) <= (((unsigned int) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) var_5);
    }
    for (signed char i_1 = 2; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((var_14) + (9223372036854775807LL))) >> (((/* implicit */int) var_0)))))));
        var_17 = ((/* implicit */unsigned int) min((((((arr_1 [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) 7892404235440979690ULL)) ? (arr_8 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))), (((/* implicit */unsigned long long int) arr_7 [i_1]))));
        arr_9 [i_1 + 2] [i_1] = ((/* implicit */long long int) (unsigned char)220);
    }
    var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) (+(var_6)))), (((((((/* implicit */int) var_2)) <= (((/* implicit */int) var_1)))) ? (((/* implicit */long long int) var_6)) : (((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
    var_19 = ((signed char) ((((/* implicit */_Bool) min((-8601831012115795106LL), (((/* implicit */long long int) (unsigned short)43071))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-64))));
}
