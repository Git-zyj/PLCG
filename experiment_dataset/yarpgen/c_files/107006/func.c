/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107006
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
    var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (var_2) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) var_15))), (((((/* implicit */_Bool) (signed char)-65)) ? (-7575547547071543230LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)85))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        var_19 += ((/* implicit */unsigned long long int) (~(max(((-(var_1))), (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (var_8)))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_1])))));
        }
    }
    for (long long int i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */long long int) arr_3 [i_2] [i_2]);
        var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_15))))) : (((/* implicit */int) min(((signed char)-83), (var_9))))))));
        var_22 ^= ((/* implicit */long long int) ((unsigned long long int) max((((((/* implicit */_Bool) arr_5 [i_2] [3LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned char)4]))) : (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_10 [i_2]))))))));
        var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) arr_0 [i_2])) + (88)))))))));
    }
    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
    {
        var_24 |= ((/* implicit */_Bool) arr_4 [i_3] [i_3]);
        var_25 = ((/* implicit */long long int) arr_10 [i_3]);
    }
    var_26 = ((/* implicit */int) var_12);
    var_27 = ((/* implicit */_Bool) var_0);
}
