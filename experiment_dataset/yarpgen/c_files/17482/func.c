/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17482
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
    var_11 -= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)0))) ? ((~(((/* implicit */int) var_10)))) : (1042194840)))), (var_6)));
    var_12 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) max((var_13), ((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)113)))))))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) var_3);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max((((/* implicit */long long int) (+(((/* implicit */int) min((var_10), (arr_7 [i_1]))))))), (max(((-(var_6))), (((/* implicit */long long int) arr_1 [i_1])))))))));
        var_15 |= ((/* implicit */signed char) max((((long long int) var_1)), (((/* implicit */long long int) arr_7 [i_1]))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (arr_2 [i_1]) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)43859))))) * (var_1))))))));
        var_17 = ((((/* implicit */_Bool) -1865715460)) ? (2052867285U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63))));
        arr_8 [i_1] = ((/* implicit */signed char) ((long long int) max((((/* implicit */short) (_Bool)1)), (var_10))));
    }
    var_18 = max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (2126059965U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10))))))), (min((((/* implicit */long long int) (+(((/* implicit */int) var_9))))), (min((var_6), (((/* implicit */long long int) var_2)))))));
}
