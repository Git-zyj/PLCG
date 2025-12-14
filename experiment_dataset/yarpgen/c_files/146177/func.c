/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146177
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((var_14) + ((~(var_4))))))));
    var_18 *= ((/* implicit */unsigned short) ((var_7) - (((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_9)))) ? (var_13) : (12579308071795055889ULL)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((var_2) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 1])))))))));
        arr_2 [i_0 - 1] = ((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0 + 1])))));
        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (arr_0 [i_0 - 1]) : (var_11))) <= (min((6871107131874473197ULL), (((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) ((12579308071795055884ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533)))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
        var_22 ^= ((/* implicit */unsigned short) max((min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) arr_3 [i_1]))));
        var_23 = ((/* implicit */unsigned long long int) ((unsigned short) arr_3 [(unsigned short)7]));
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
    {
        var_24 -= ((/* implicit */unsigned short) max((((13565632130091638857ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)384))))), (((arr_6 [i_2]) / (arr_6 [i_2])))));
        var_25 *= ((/* implicit */unsigned short) (-((((+(var_4))) << (((((((/* implicit */_Bool) var_5)) ? (var_16) : (arr_6 [i_2]))) - (15154462873875696464ULL)))))));
    }
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 13565632130091638879ULL)) ? (var_5) : (((((((/* implicit */_Bool) var_4)) ? (var_15) : (var_3))) | (min((((/* implicit */unsigned long long int) var_9)), (var_2))))))))));
}
