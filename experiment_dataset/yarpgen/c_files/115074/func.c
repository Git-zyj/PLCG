/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115074
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (var_5))))));
    var_14 &= ((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (var_7)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) var_11);
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5)))));
                    var_17 |= (~(var_2));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 4) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_1), (min((var_2), (var_7)))))) ? (((/* implicit */long long int) (+(((((/* implicit */int) var_10)) - (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) var_8)) ? ((~(var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
        var_19 = var_4;
    }
    for (unsigned int i_4 = 2; i_4 < 15; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((((((var_1) + (9223372036854775807LL))) << (((((var_2) + (8684486256785739244LL))) - (32LL))))), (((/* implicit */long long int) var_10)))))));
        var_21 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_3))))));
        var_22 = ((/* implicit */unsigned int) var_0);
        /* LoopSeq 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_23 = var_9;
            var_24 = ((/* implicit */signed char) ((max((var_7), (((/* implicit */long long int) min((var_12), (((/* implicit */unsigned short) (signed char)99))))))) <= (((/* implicit */long long int) min(((~(((/* implicit */int) var_11)))), (var_8))))));
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_7))));
        }
        for (short i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            var_26 = min(((~(var_2))), (min((((/* implicit */long long int) (+(var_4)))), (max((var_7), (((/* implicit */long long int) var_5)))))));
            var_27 = ((/* implicit */int) (+(max((var_3), (((/* implicit */long long int) var_11))))));
            var_28 = ((/* implicit */unsigned char) max((var_0), (var_0)));
            var_29 = ((/* implicit */signed char) max((((/* implicit */long long int) max((var_11), (var_0)))), (((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */long long int) var_11)), (var_3))) : (max((((/* implicit */long long int) var_6)), (var_7)))))));
        }
    }
}
