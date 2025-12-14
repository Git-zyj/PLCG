/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153086
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
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_12)))) && (((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_1))))))), (var_14)));
    var_19 += ((/* implicit */long long int) (!(((/* implicit */_Bool) var_17))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) / ((-(arr_1 [i_0] [i_0])))))) : (var_3)));
        arr_2 [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) arr_0 [i_0])))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : ((~(var_3)))));
        var_22 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((arr_4 [i_1]) > (2366826882U))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2139095040U)) ? (17091678151227621210ULL) : (((/* implicit */unsigned long long int) -12)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
            var_24 = ((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_6 [i_1]) : (arr_3 [i_1] [i_2]));
            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)196)))))) & (arr_3 [i_1] [i_2])));
            arr_7 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (var_12)))) ? ((-(7360328285000573985ULL))) : (((/* implicit */unsigned long long int) ((long long int) arr_5 [i_2] [i_1] [i_1])))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (2155872276U) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_3])))))));
            var_27 = ((/* implicit */signed char) (~(548537892U)));
            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (unsigned char)166))));
        }
    }
}
