/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172826
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_14 = ((((/* implicit */int) arr_2 [i_0])) << (((var_13) - (8430050239390890671LL))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) var_10)) != (arr_1 [i_0] [i_0])))))))));
        var_16 = var_3;
        var_17 |= ((/* implicit */int) (-(var_5)));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) min((min((16777215U), (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) arr_3 [i_1] [i_1])))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_7)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 2]))));
            arr_10 [(signed char)1] [0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)125))))));
            arr_11 [i_1] [i_2] = ((((/* implicit */_Bool) arr_4 [i_2] [i_2 - 1])) ? (arr_7 [i_2] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_12))));
            arr_12 [i_1] [(signed char)9] [i_1] = ((/* implicit */short) ((unsigned int) arr_8 [i_2 + 2]));
        }
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        arr_15 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (unsigned short)65535)))));
        arr_16 [i_3] = ((/* implicit */signed char) min(((+(min((-9223372036854775797LL), (((/* implicit */long long int) (unsigned short)4316)))))), (((/* implicit */long long int) (-(((((/* implicit */int) (signed char)102)) - (var_3))))))));
        var_22 = ((/* implicit */_Bool) 1798390166);
    }
    var_23 = ((/* implicit */short) max((((/* implicit */int) var_8)), ((+((~(((/* implicit */int) var_12))))))));
}
