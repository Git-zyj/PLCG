/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13933
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
    var_10 &= var_0;
    var_11 -= var_0;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((unsigned char) (-(((arr_0 [5ULL]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) : (608500255U)))))))));
        var_13 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_0 [i_0])), (max((((long long int) 1181815617)), (((/* implicit */long long int) arr_0 [7ULL]))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(1181815617)))) ? (((/* implicit */int) (short)-18893)) : (((/* implicit */int) arr_0 [13U]))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))));
        arr_3 [1] = ((/* implicit */unsigned char) ((unsigned short) 1241973197));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((short) arr_4 [i_1] [i_1]));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 608500265U)) ? (608500255U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [13LL])))))) ? ((+(3686467029U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))));
    }
    for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_2]))) ? ((((_Bool)1) ? (max((arr_7 [i_2]), (-1241973197))) : (max((-1241973204), (((/* implicit */int) arr_9 [(short)0])))))) : (min((max((((/* implicit */int) arr_9 [i_2])), (arr_7 [i_2]))), (((/* implicit */int) (_Bool)1))))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -1241973191)) ? (((/* implicit */unsigned int) -1241973204)) : (arr_8 [18ULL] [6]))), (((/* implicit */unsigned int) ((short) (short)18197)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_2 + 3])), (-1241973197)))) ? (((/* implicit */int) ((short) arr_8 [14U] [16ULL]))) : ((-(arr_7 [(signed char)14])))))) : (((unsigned long long int) ((unsigned char) (signed char)62))))))));
        arr_11 [i_2] [i_2] = ((((/* implicit */_Bool) (-(((unsigned int) arr_9 [i_2]))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (arr_8 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 - 1])))))), (max((13519432770461758064ULL), (((/* implicit */unsigned long long int) (unsigned short)65472)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((arr_8 [i_2] [i_2 - 1]), (arr_8 [i_2] [(unsigned short)18])))))));
    }
    var_17 = 1241973234;
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_3))));
}
