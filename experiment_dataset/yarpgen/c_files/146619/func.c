/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146619
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0])))))));
        var_18 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) arr_0 [(short)8])));
        arr_2 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 += ((/* implicit */_Bool) 3070567089U);
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [3LL] [10]) : (arr_4 [i_1] [i_1])))) ? (max((((/* implicit */int) ((unsigned short) var_0))), (((((/* implicit */_Bool) var_4)) ? (arr_3 [i_1]) : (arr_4 [1U] [1U]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(2134865458U)))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [(unsigned short)2] &= ((/* implicit */unsigned int) 18446744073709551599ULL);
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_17 [i_3] [i_3] [i_2] [i_5] = ((/* implicit */unsigned char) (+(min((1224400207U), (((/* implicit */unsigned int) (_Bool)0))))));
                        arr_18 [i_2] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) arr_7 [i_2] [i_2]);
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */unsigned long long int) var_8);
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 13433717385314345563ULL)) ? (-1016973400) : (((/* implicit */int) (short)32747))));
    var_23 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */long long int) var_12))));
}
