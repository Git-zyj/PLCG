/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160667
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
    var_13 = ((/* implicit */unsigned int) var_4);
    var_14 |= ((/* implicit */unsigned int) var_12);
    var_15 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) | (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [(short)0] [i_0])) ? (((/* implicit */long long int) var_2)) : (-8913804931293409569LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (3627410693U) : (((/* implicit */unsigned int) var_2))))))))));
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [1])))))) < (arr_1 [i_0] [i_0])));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((arr_2 [i_0] [i_0]) << (((arr_2 [i_0] [i_0]) - (1976400897432168589ULL)))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((var_3) * (arr_2 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((((/* implicit */_Bool) arr_6 [i_1] [(short)8])) ? (var_2) : (((/* implicit */int) arr_6 [i_1] [i_1])))) : (((/* implicit */int) ((_Bool) arr_6 [i_1] [(_Bool)1])))));
        var_19 = ((/* implicit */unsigned short) ((3566948653U) - (4065227085U)));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1])))))));
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)3184)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)3184))))) ? (min((((/* implicit */unsigned long long int) arr_10 [16LL])), (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) arr_6 [(short)0] [17LL]))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_2] [i_2])), (((((/* implicit */int) (signed char)127)) / (((/* implicit */int) (short)23108)))))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (short)224))))) == (max(((~(arr_8 [i_2]))), (((/* implicit */long long int) (unsigned char)255)))))))));
        var_22 = ((/* implicit */unsigned short) (~(var_2)));
        var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_7 [i_2] [i_2])), ((unsigned short)0)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_2] [i_2]), (((/* implicit */unsigned char) arr_7 [0ULL] [i_2])))))) : (arr_10 [5]))) | (((/* implicit */long long int) (~((~(var_2))))))));
    }
    var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-121)), ((unsigned char)82))))));
}
