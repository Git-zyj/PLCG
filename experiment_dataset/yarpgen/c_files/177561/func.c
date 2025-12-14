/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177561
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))));
        var_13 = ((/* implicit */_Bool) (unsigned char)62);
        var_14 = arr_0 [i_0] [i_0];
        var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_16 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) max((((unsigned short) 522361649)), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) 522361652))))) % (((/* implicit */int) arr_1 [i_0] [12U]))))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [(unsigned char)15])) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned int) -1712238946))))) ? (((/* implicit */int) ((_Bool) (unsigned char)121))) : (((/* implicit */int) ((_Bool) arr_0 [i_1] [i_1])))))));
        arr_6 [i_1] [13U] = ((/* implicit */unsigned short) max((((-581370866) % (522361672))), ((-(((/* implicit */int) (unsigned short)52859))))));
    }
    var_18 = var_1;
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (unsigned char)159)))))))))));
}
