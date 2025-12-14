/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157486
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
    var_13 -= ((/* implicit */signed char) ((var_0) ? (((((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (0U))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)90)))))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (var_11)))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_2))))) : (((/* implicit */int) min((var_3), (var_3))))))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)91))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) -1211985389)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67))) : (var_9)))))));
    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)32)) && (((/* implicit */_Bool) (short)21776)))))) : ((~(4294967295U)))))) ? (max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)14933))) % (var_9))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)162)))));
        var_17 |= ((/* implicit */long long int) ((short) arr_2 [i_0 - 2]));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 2]))) < (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))) : (var_9)))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((unsigned short) ((int) 1525328663113542774LL))))));
        var_19 |= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_4 [i_1]))))));
    }
    var_20 = var_6;
}
