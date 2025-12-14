/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184591
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
    var_10 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_9)))))) ? (var_9) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    var_11 |= (+(((/* implicit */int) max((var_8), (((/* implicit */signed char) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        var_13 = ((/* implicit */short) (-(((/* implicit */int) ((short) var_0)))));
        var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [4] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) : (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (arr_1 [i_0 - 1] [i_0 - 1])))))));
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_9))))))), (max((((/* implicit */unsigned int) ((_Bool) arr_2 [i_1] [i_1]))), (var_1)))));
        var_15 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_1 + 1]))));
    }
    for (unsigned char i_2 = 1; i_2 < 12; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_2]));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned char) arr_4 [i_2 + 1])))));
    }
}
