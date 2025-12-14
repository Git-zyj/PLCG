/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10338
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
    for (int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 369344258)) ? (((/* implicit */int) (short)0)) : (1083921765)))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (4294967284U) : (((/* implicit */unsigned int) -2147483632))))));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) ^ (var_4))))))));
        }
        for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            var_20 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_2 [i_0])), ((-(((var_3) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
            arr_6 [(short)2] &= ((/* implicit */unsigned char) (+(((int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_4))))));
        }
        for (short i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_14))));
            var_22 &= ((signed char) arr_5 [i_0] [i_0] [(unsigned char)2]);
        }
        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (-(((int) 1074758514U)))))));
            arr_12 [i_0 + 2] [i_4] [i_4] &= ((/* implicit */int) (-(((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))));
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((int) var_11))) : (arr_1 [i_4]))), (((/* implicit */unsigned int) var_3)))))));
            var_25 &= ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) ((unsigned char) var_10)))), ((-((-(((/* implicit */int) var_11))))))));
        }
        var_26 &= ((/* implicit */unsigned long long int) ((signed char) var_13));
    }
    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (-(var_15))))));
    var_28 &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) (~(((/* implicit */int) var_13))))))));
    var_29 &= ((/* implicit */unsigned char) (!(var_3)));
}
