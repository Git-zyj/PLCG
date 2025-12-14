/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1157
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) (short)5641))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_4 [i_1 + 1] [i_2] [i_2 - 1]))));
                        var_20 = ((/* implicit */int) (~(var_18)));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_12)))))));
                    }
                } 
            } 
        }
        var_22 ^= ((/* implicit */unsigned char) (-(arr_0 [i_0])));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (+(arr_2 [i_0] [i_0] [(unsigned char)14]))))));
        var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        arr_10 [i_0] [20U] |= ((/* implicit */unsigned short) var_13);
    }
    var_25 = ((/* implicit */int) max((((/* implicit */long long int) (~(((/* implicit */int) ((var_6) && (((/* implicit */_Bool) var_17)))))))), (var_18)));
    var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
}
