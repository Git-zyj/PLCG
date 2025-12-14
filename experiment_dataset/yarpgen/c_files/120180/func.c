/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120180
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_7)) : (var_10)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (((/* implicit */int) ((arr_1 [i_0]) > (((/* implicit */int) arr_2 [i_0 - 2] [i_0])))))));
        arr_4 [i_0 + 1] = ((/* implicit */unsigned long long int) arr_3 [i_0 - 1]);
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21975)) ? (((/* implicit */int) (unsigned short)35748)) : (((/* implicit */int) (signed char)92))));
    }
    for (unsigned short i_1 = 2; i_1 < 8; i_1 += 4) 
    {
        arr_9 [i_1 + 4] = ((/* implicit */int) ((unsigned int) ((((arr_8 [i_1]) != (((/* implicit */unsigned long long int) arr_7 [i_1 - 2] [6LL])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1] [i_1])) / (((/* implicit */int) arr_6 [i_1 + 3] [i_1 + 1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) + (arr_8 [i_1]))))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1])) ? ((~(((((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 2])) << (((arr_7 [i_1] [i_1]) - (1088233088))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1] [i_1 + 4]))))) ? (arr_7 [i_1] [i_1]) : ((+(arr_7 [i_1] [i_1 + 4])))))));
        arr_10 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 3] [i_1 + 3])) ? (arr_7 [i_1 - 2] [(_Bool)1]) : (arr_7 [i_1 + 4] [i_1 + 3])))) ? (((unsigned long long int) arr_7 [i_1 - 2] [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_1 + 2] [i_1 + 2]))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 + 3])) ? (arr_8 [(_Bool)1]) : (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 4] [i_1 + 4])) ? (((/* implicit */int) arr_6 [(_Bool)1] [i_1 - 2])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))) : (arr_8 [i_1 + 2])))) ? (((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1])) : (arr_8 [(_Bool)1]))) & (((/* implicit */unsigned long long int) ((arr_7 [i_1] [i_1]) | (((/* implicit */int) arr_6 [2ULL] [i_1 - 1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_7 [i_1] [i_1 - 1])))))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 1) 
    {
        var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 - 3])) ? (((/* implicit */int) arr_12 [i_2 - 3])) : (((/* implicit */int) arr_11 [i_2 - 3]))))) ? (((arr_13 [i_2 + 1] [8ULL]) ? (((/* implicit */int) arr_13 [i_2 - 3] [(short)20])) : (((/* implicit */int) arr_13 [i_2 - 3] [i_2])))) : (((((/* implicit */int) arr_12 [i_2 - 3])) & (((/* implicit */int) arr_11 [i_2 - 2]))))));
        var_18 = ((/* implicit */unsigned short) ((((-8132622316558649100LL) != (((-2444568500548017163LL) ^ (8787503087616LL))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))) : (2444568500548017166LL)));
    }
    for (short i_3 = 3; i_3 < 16; i_3 += 1) 
    {
        arr_17 [i_3 - 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_3 - 3]))));
        arr_18 [i_3] [i_3 - 1] = ((((((/* implicit */_Bool) arr_11 [i_3 - 3])) ? ((~(((/* implicit */int) arr_15 [i_3] [i_3])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_3])) && (arr_13 [i_3 - 3] [i_3])))))) + (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) / (9223372036854775805LL)))) ? (((arr_13 [i_3 - 3] [(_Bool)1]) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_16 [i_3])))) : (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_11 [i_3 + 1])) : (((/* implicit */int) arr_16 [i_3])))))));
    }
}
