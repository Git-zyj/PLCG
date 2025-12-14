/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119919
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned char) var_4)), (((/* implicit */unsigned char) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))) ? (var_6) : (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_9))), (((/* implicit */long long int) ((signed char) var_7))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) (signed char)16);
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) ((unsigned char) arr_0 [i_0])))))))))));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (((!(((((/* implicit */_Bool) var_11)) && ((_Bool)0))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (25LL)))))))))));
    }
    for (unsigned short i_1 = 3; i_1 < 15; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) ((_Bool) ((unsigned int) arr_2 [i_1] [i_1])));
        var_18 = ((/* implicit */unsigned char) (((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_6))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 2]))))) > (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 4398045986816ULL)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (signed char)11)))))))));
        var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 1])) ? (((((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])) << (((var_1) - (2181005677U))))) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_20 = ((/* implicit */long long int) var_1);
        var_21 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((arr_5 [i_2]) ? (var_1) : (((/* implicit */unsigned int) arr_4 [i_2] [i_2])))) != (((/* implicit */unsigned int) arr_4 [i_2] [i_2]))))) | (((/* implicit */int) min((arr_5 [i_2]), (arr_5 [i_2]))))));
        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_4 [i_2] [i_2]), (329214085)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (arr_4 [i_2] [i_2])))) : (((unsigned long long int) var_5)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2])) >> (((/* implicit */int) arr_5 [i_2])))))));
    }
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 329214085)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_6 [i_3])))), ((!(((/* implicit */_Bool) var_8)))))))));
        var_24 = ((unsigned char) arr_8 [i_3]);
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((var_9), (arr_8 [i_3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned int) var_5)) : (var_2))))))) ? ((-(min((((/* implicit */int) var_0)), (329214085))))) : (min((-329214085), (((/* implicit */int) arr_7 [i_3]))))));
    }
    var_26 = ((/* implicit */long long int) var_5);
    var_27 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-10)), (((((/* implicit */_Bool) var_5)) ? (-1250996151) : (((/* implicit */int) (_Bool)0))))))), ((+(min((2853641890U), (((/* implicit */unsigned int) 250467209))))))));
}
