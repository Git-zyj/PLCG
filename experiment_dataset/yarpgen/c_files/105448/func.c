/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105448
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
    var_16 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        var_18 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_1 [i_0 - 1] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_4 [i_1] &= ((((/* implicit */int) arr_3 [i_1])) != (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_0 [i_1])))));
        var_19 = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_1] [i_1]))));
        var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */int) var_2))))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_21 *= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2])))) ? (var_11) : (((/* implicit */int) var_9))));
            var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_8))))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 3; i_3 < 7; i_3 += 3) 
            {
                var_23 *= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_3 + 3] [i_1] [i_3 - 3]))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_3 [i_1])))) - (((unsigned int) var_5))));
            }
            for (short i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                arr_12 [i_2] [i_4] = ((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2]);
                var_25 *= var_8;
            }
        }
    }
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (((long long int) var_10)))))));
    var_27 = ((/* implicit */_Bool) var_0);
}
