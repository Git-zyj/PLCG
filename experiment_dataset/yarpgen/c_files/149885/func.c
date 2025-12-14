/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149885
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
    var_12 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)0)), (12102310163604820868ULL)))) ? (var_6) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))))), (524256U)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_3 [(unsigned char)1] = ((/* implicit */short) var_1);
        var_13 = ((/* implicit */signed char) arr_2 [i_0 + 2] [i_0]);
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned int) arr_0 [i_1] [i_1]);
            arr_6 [13U] = ((/* implicit */unsigned short) arr_2 [8LL] [i_1]);
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (signed char)37))));
        }
    }
    for (long long int i_2 = 1; i_2 < 13; i_2 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (unsigned char)0))));
        var_17 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 3] [i_2 + 2])) ? (arr_5 [i_2 + 2] [i_2 + 2] [12ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
        var_18 += ((/* implicit */unsigned long long int) 928400446U);
    }
    var_19 = ((/* implicit */short) var_11);
}
