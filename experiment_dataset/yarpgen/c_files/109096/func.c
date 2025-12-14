/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109096
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
    var_18 = ((/* implicit */int) var_13);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        var_19 *= ((/* implicit */_Bool) (~(((unsigned int) var_7))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        arr_8 [i_0] = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0 + 1] [i_0 - 1] [i_0]);
                        var_20 *= ((/* implicit */unsigned short) var_12);
                    }
                } 
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) arr_0 [i_0])))) > (((/* implicit */int) var_15)))))) <= (max((arr_6 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0 - 1] [i_0] [i_0] [i_0])))));
        var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_7 [i_0])), ((-(arr_4 [i_0] [i_0 - 1] [i_0] [i_0 + 1])))));
        var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)7)) ? ((~(((((/* implicit */int) var_7)) - (((/* implicit */int) (_Bool)1)))))) : (1837585294)));
    }
    for (int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        var_23 -= ((/* implicit */long long int) (((~(min((((/* implicit */int) arr_0 [i_4])), (arr_4 [i_4] [i_4] [i_4] [i_4]))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (-1837585295) : (-1837585294)))) ? (((/* implicit */int) (unsigned char)220)) : (1837585283)))));
        arr_13 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_7 [i_4]))))));
    }
    var_24 = ((/* implicit */unsigned short) var_16);
}
