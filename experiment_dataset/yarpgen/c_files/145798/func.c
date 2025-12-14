/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145798
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_1 [i_0]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((var_15) <= (((/* implicit */unsigned int) max((arr_3 [i_0]), (arr_3 [i_0]))))))) : (((int) arr_2 [i_0]))));
        arr_6 [i_0] [i_0] = ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0])));
        var_16 = ((/* implicit */unsigned long long int) ((471341435U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
    }
    var_17 = ((/* implicit */signed char) var_15);
    var_18 = ((/* implicit */unsigned long long int) ((long long int) var_1));
    /* LoopSeq 1 */
    for (signed char i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_8 [i_1] [i_1]))))))))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1 - 1]))))) ? (arr_10 [i_1 - 1] [i_1 - 2]) : (max((arr_10 [i_1 + 3] [i_1 + 1]), (((/* implicit */unsigned int) arr_7 [i_1 - 2]))))));
        var_21 = ((/* implicit */unsigned long long int) (-(var_4)));
    }
}
