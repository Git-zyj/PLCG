/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129731
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
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((unsigned short)8), (((/* implicit */unsigned short) var_11)))))))) | (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_16)), (3649860863U)))), (var_0)))));
    var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) -1707130843)) ? ((~(var_13))) : (((((/* implicit */int) var_3)) ^ (((/* implicit */int) (signed char)112)))))), ((~(1397030859)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_6 [i_0] [13U] = ((/* implicit */unsigned int) ((unsigned char) min(((signed char)29), ((signed char)-29))));
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)20045)) : (((/* implicit */int) arr_0 [i_1])))))))));
        }
        var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24))) : (arr_5 [i_0] [i_0])))) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_0]))) != (((/* implicit */unsigned int) ((/* implicit */int) var_18)))));
        var_23 = ((/* implicit */unsigned int) (!((!(((((/* implicit */_Bool) (signed char)29)) || (((/* implicit */_Bool) arr_2 [i_0] [3U]))))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
    {
        var_24 += ((/* implicit */unsigned short) ((arr_1 [i_2 + 1]) && (arr_1 [i_2 - 1])));
        arr_9 [i_2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_14)))) ? (((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */int) (short)21955)) : (((/* implicit */int) arr_2 [i_2 - 1] [i_2])))) : (((/* implicit */int) arr_2 [i_2] [i_2 + 2]))));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2 + 3])) >= (((/* implicit */int) ((short) var_5)))));
        /* LoopSeq 1 */
        for (int i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            var_26 = ((/* implicit */unsigned char) (-(arr_3 [i_2 + 3] [i_3 - 1] [i_3 - 1])));
            arr_12 [i_2] [i_2 - 1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3] [i_2] [i_3 + 1])) | (var_8)));
        }
    }
}
