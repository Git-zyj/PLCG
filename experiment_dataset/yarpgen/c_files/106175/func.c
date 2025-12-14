/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106175
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
    var_15 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14))))) : (min((((/* implicit */long long int) var_12)), (var_6))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) : ((+(var_0)))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_0)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
        {
            var_16 = ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (arr_2 [i_0] [i_1]));
            var_17 = ((/* implicit */unsigned int) ((var_10) + (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        }
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                var_18 = ((/* implicit */unsigned short) ((arr_8 [9U] [8LL] [i_3]) ? (arr_6 [i_2]) : (((/* implicit */int) var_5))));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27020))) : (0LL))))));
            }
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_4))));
        }
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (unsigned short)16796)) : (((/* implicit */int) (signed char)62))))));
            var_22 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(short)6]))) : (arr_1 [i_0] [i_4]));
        }
    }
    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            arr_23 [i_5] [i_6] = ((/* implicit */_Bool) var_13);
            var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -1591582938434445446LL)) ? (min((((/* implicit */unsigned long long int) (signed char)-62)), (126024627936153604ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-63)) + (2147483647))) << (((((/* implicit */int) (unsigned char)183)) - (183)))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))))))));
            arr_24 [i_5] = ((/* implicit */long long int) ((max((((unsigned int) var_3)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((var_0), (((/* implicit */unsigned long long int) arr_8 [i_5] [12U] [i_6])))))))));
        }
        arr_25 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? ((~(arr_2 [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2))))));
    }
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((long long int) var_11)) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-63), (max(((signed char)54), ((signed char)-49)))))))));
}
