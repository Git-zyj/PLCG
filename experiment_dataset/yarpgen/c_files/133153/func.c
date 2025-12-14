/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133153
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_1 [i_1])));
            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_4))));
            var_15 = arr_2 [i_0] [i_0] [i_1];
        }
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)20861))))));
            var_16 |= ((/* implicit */int) arr_7 [i_2] [i_2]);
        }
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            arr_15 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (arr_11 [i_3] [i_0]) : ((~(((/* implicit */int) (unsigned char)254))))));
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3])))))) : (arr_3 [i_0]))))));
            arr_16 [i_0] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned short)65533))))));
        }
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_3 [i_0]))))) : (((/* implicit */int) arr_6 [i_0] [i_4] [i_0]))));
            arr_20 [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)23))))) ^ (((var_8) ^ (var_6)))));
            arr_21 [i_0] = ((/* implicit */unsigned int) (unsigned short)29466);
            var_19 = ((/* implicit */long long int) ((unsigned char) arr_19 [i_0] [i_4] [i_4]));
            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(16470178280908080026ULL))))));
        }
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_0)))))))));
    }
    var_22 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_1)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_4)) : (var_7))) : (((/* implicit */int) var_0)))))));
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min(((+(((long long int) var_9)))), (((/* implicit */long long int) (~((+(((/* implicit */int) var_4))))))))))));
}
