/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15190
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_16))));
    var_18 = ((/* implicit */long long int) var_15);
    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)210))))) | (((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) - (((/* implicit */unsigned long long int) (~(var_7))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2077817524)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) var_1)))) | (253497258)));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 + 1])) >> (((1203694952) - (1203694952))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (short)28412)))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (unsigned char i_4 = 2; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)123))));
                            var_23 = ((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2] [19] [19] [19] [i_2])))))) : (arr_13 [i_2] [i_2 - 1] [i_2 - 1] [i_4 - 2] [i_5]));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4] [i_4 - 1] [i_4 - 2] [i_4])) ? (arr_17 [i_4] [(short)13] [i_2] [i_4] [i_4]) : (arr_17 [i_4 - 2] [i_4] [i_2] [i_4] [i_4])));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)112)) && ((!(((/* implicit */_Bool) (unsigned char)0))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */_Bool) var_11);
        }
        arr_18 [i_1 + 1] = ((/* implicit */_Bool) ((var_12) << (((((/* implicit */int) (unsigned short)50697)) - (50696)))));
    }
}
