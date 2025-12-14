/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152863
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((+(arr_1 [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) (+(1012593952U))))))) ? ((+(((/* implicit */int) ((var_8) != (((/* implicit */int) arr_0 [i_0] [i_0]))))))) : ((~(((/* implicit */int) ((signed char) var_2)))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [(unsigned short)14] [i_0]))))), ((-(arr_1 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((int) var_13))), (min((var_6), (((/* implicit */long long int) var_11))))))) : (arr_1 [i_0] [16U])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1] [16ULL]))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_4)))))), (((unsigned long long int) ((unsigned short) arr_2 [i_1])))));
        var_19 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)36855))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_2]))))))))) + ((~(var_4)))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (((~(arr_3 [i_1]))) + (((/* implicit */unsigned long long int) (+(4294967295U)))))))));
        }
        for (unsigned char i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_13), (((/* implicit */unsigned short) arr_4 [i_3] [(_Bool)1]))))), (((((/* implicit */int) var_10)) % (var_11)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_2 [i_1]))))))));
            var_23 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3]))) : (var_9)))), (max((((/* implicit */unsigned long long int) arr_6 [i_3])), (arr_3 [i_1]))))), (((/* implicit */unsigned long long int) ((unsigned short) max((var_5), (((/* implicit */unsigned long long int) arr_6 [i_3]))))))));
            var_24 |= ((/* implicit */signed char) var_12);
        }
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_13)))));
        var_26 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4]))))));
    }
    var_27 = ((/* implicit */short) min((((/* implicit */long long int) var_11)), (((((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */long long int) var_8)))) | (((/* implicit */long long int) var_14))))));
}
