/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150605
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
    var_20 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) min((((/* implicit */long long int) var_3)), (-4611686018427387904LL)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_21 ^= ((/* implicit */int) min((max((min((((/* implicit */long long int) var_18)), (1140005512132700366LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [(_Bool)1])) >= (-137435483)))))), (((30LL) & (((/* implicit */long long int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned char) arr_2 [i_0]))))))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))));
    }
    for (long long int i_1 = 3; i_1 < 11; i_1 += 2) 
    {
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((var_17), (((/* implicit */long long int) ((arr_2 [(short)19]) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))))))));
        var_24 = arr_4 [i_1];
    }
    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_12))));
    var_26 = ((/* implicit */signed char) (_Bool)0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        var_27 &= ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_4) <= (var_16))))));
        var_28 = var_11;
    }
    for (long long int i_3 = 1; i_3 < 23; i_3 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */long long int) min((var_29), (((((/* implicit */_Bool) ((min((1271260482355313529LL), (((/* implicit */long long int) var_11)))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14)))))))) ? (arr_8 [i_3]) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned short) 137435469))), (var_15))))))));
        var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_3])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_19)) : (137435493))) : (((/* implicit */int) var_3)))) > (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14))))) > (arr_7 [i_3]))))));
        var_31 = ((((/* implicit */unsigned int) min((((/* implicit */int) var_3)), (-137435454)))) % (((((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [(unsigned char)5]) > (var_4))))) + (min((var_9), (((/* implicit */unsigned int) var_3)))))));
        var_32 *= ((/* implicit */unsigned short) var_19);
    }
    for (long long int i_4 = 1; i_4 < 23; i_4 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned char) var_16);
        var_34 = ((long long int) var_6);
    }
}
