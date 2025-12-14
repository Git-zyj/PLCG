/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159719
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (~(9915804489795974965ULL))))) ? (((unsigned long long int) (+(((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8530939583913576651ULL))))))));
    var_13 = var_11;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (389450179064034760ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10)))))))));
        arr_2 [i_0 - 2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 9915804489795974965ULL)))) ? (((((((/* implicit */unsigned long long int) -2030370728)) < (var_7))) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-113)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)17)) : (-2030370728))))) : (var_2)));
    }
    for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */int) var_3);
        var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)109))))))));
        var_17 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) 8530939583913576650ULL)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (6617094331258118182ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (var_10)))))))));
        arr_6 [i_1] = ((/* implicit */short) (((((-(((/* implicit */int) var_5)))) * (((((/* implicit */int) (unsigned short)65535)) / (-2009687527))))) / (((/* implicit */int) (signed char)109))));
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((short) ((unsigned int) var_2))))));
    }
}
