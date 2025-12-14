/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113374
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
    var_10 *= ((/* implicit */signed char) max((((((((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_5))) + (9223372036854775807LL))) << ((((+(2047LL))) - (2047LL))))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) ((((((/* implicit */int) ((unsigned char) var_4))) >> ((((~(((/* implicit */int) (_Bool)0)))) + (17))))) ^ (((/* implicit */int) var_9))));
        arr_2 [8] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((_Bool) var_6)))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)24131)) >= (((/* implicit */int) (_Bool)0)))))))) : (var_1)));
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (~(((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) var_2)) - (22563))))))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 3880343770U)) + (6926696897850088890LL)));
        var_13 ^= ((/* implicit */int) ((unsigned int) (!(arr_3 [i_1 + 1]))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned int) (signed char)-99)), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_0))))))))) / ((~(-5101760217110992749LL)))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    arr_12 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(3880343770U))))));
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (2832171334U))))));
                }
            } 
        } 
    }
    for (unsigned int i_4 = 3; i_4 < 14; i_4 += 1) 
    {
        arr_16 [13LL] [i_4] |= ((/* implicit */signed char) max((((/* implicit */long long int) max((var_2), (((/* implicit */unsigned short) (short)-31437))))), (min((((/* implicit */long long int) var_7)), (var_5)))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_5 [i_4 - 2])) ? (((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(unsigned char)16]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_4])) < (((/* implicit */int) var_2)))))))) : (((((/* implicit */_Bool) var_5)) ? ((~(var_8))) : (arr_13 [i_4 + 4])))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_5 = 2; i_5 < 23; i_5 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_2)), ((~(var_4)))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((5101760217110992747LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42228)))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) max((arr_18 [i_5] [i_5 + 2]), (((/* implicit */short) (_Bool)1)))))));
    }
    for (unsigned int i_6 = 2; i_6 < 23; i_6 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) var_1);
        var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_21 [(_Bool)1])) * ((-(((/* implicit */int) (unsigned short)0))))))));
    }
    for (unsigned int i_7 = 2; i_7 < 23; i_7 += 2) /* same iter space */
    {
        var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7] [i_7]))) : (max((1466845096U), (18U)))));
        arr_26 [i_7] = ((/* implicit */_Bool) var_4);
    }
}
