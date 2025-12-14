/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187160
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_14 -= ((/* implicit */unsigned short) arr_1 [i_0]);
        var_15 *= ((/* implicit */short) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (var_10)))) ? (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned int) var_9))))) : (var_1))) + (9223372036854775807LL))) << (((var_7) - (541689817U)))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) ((short) var_6))))))));
        var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)702)) : (1147860212)))));
        arr_7 [i_1] = ((/* implicit */_Bool) var_2);
        var_17 -= ((/* implicit */unsigned char) ((int) ((((/* implicit */int) arr_3 [i_1 + 1])) | (((/* implicit */int) arr_3 [i_1 + 1])))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        var_18 = ((_Bool) arr_9 [i_2 + 1]);
        var_19 ^= ((/* implicit */unsigned char) var_13);
    }
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) (short)-713)), (var_4)));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min(((-(((((/* implicit */int) (unsigned short)57549)) & (((/* implicit */int) var_9)))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))))));
    var_22 = ((/* implicit */_Bool) var_5);
}
