/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110572
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
    var_17 = ((/* implicit */int) var_7);
    var_18 &= ((/* implicit */int) ((((/* implicit */int) ((signed char) ((signed char) var_6)))) != (((/* implicit */int) min((var_4), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-123)) != (((/* implicit */int) var_8))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_0 [i_0 + 3]))));
        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((var_11) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (short)-1024))))))) ? (arr_0 [i_0 - 1]) : (((/* implicit */int) ((short) arr_0 [i_0 + 2])))));
    }
    for (signed char i_1 = 1; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_21 = arr_3 [i_1] [i_1];
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_14) ? (arr_0 [i_1]) : (((/* implicit */int) arr_3 [i_1] [i_1 + 2])))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)148)) == (((/* implicit */int) (_Bool)1)))))))) ? (((((((/* implicit */_Bool) arr_1 [6])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) var_14)))) % (((/* implicit */int) (_Bool)1)))) : (max((((/* implicit */int) (!(arr_2 [i_1])))), (arr_0 [i_1 - 1])))));
        arr_4 [i_1] = ((/* implicit */long long int) (!(var_9)));
        var_23 |= ((((((/* implicit */_Bool) min((((/* implicit */int) var_16)), (arr_0 [i_1])))) ? (arr_0 [i_1 + 3]) : (((((/* implicit */_Bool) arr_1 [14])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1])))))) * ((-(((/* implicit */int) arr_2 [i_1 + 2])))));
    }
}
