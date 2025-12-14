/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113474
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
    var_16 = ((/* implicit */unsigned short) (+(var_8)));
    var_17 = var_11;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_18 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [3ULL] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_5)))) ? (((unsigned int) arr_0 [i_0] [0U])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)7])) : (((/* implicit */int) arr_1 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
        var_19 = ((((/* implicit */_Bool) max((3220654729U), (((((/* implicit */_Bool) (unsigned short)49368)) ? (3220654729U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) ? (((unsigned int) arr_1 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_8))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))))));
        arr_4 [(unsigned short)9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_20 += ((/* implicit */_Bool) arr_7 [i_1]);
        arr_9 [i_1] = ((/* implicit */unsigned char) ((long long int) 3220654754U));
        arr_10 [(_Bool)1] [i_1] = ((/* implicit */unsigned short) arr_6 [i_1]);
    }
}
