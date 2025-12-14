/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110559
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
    var_12 += ((/* implicit */long long int) 456397311);
    var_13 = ((/* implicit */short) (-(var_7)));
    var_14 = ((/* implicit */unsigned short) ((unsigned char) var_11));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_15 *= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_1 [i_0]))));
        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_17 = ((short) (+(min((((/* implicit */long long int) arr_1 [i_1])), (-8566683482983078055LL)))));
        var_18 = ((/* implicit */unsigned int) ((int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-17)) > (((/* implicit */int) arr_2 [i_1]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
    {
        var_19 = (unsigned short)17432;
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_6 [i_2])))) ? ((-(arr_6 [i_2]))) : ((+(8275003078522401215LL)))));
        var_21 = ((/* implicit */long long int) ((208117453) + (((/* implicit */int) arr_0 [i_2]))));
    }
}
