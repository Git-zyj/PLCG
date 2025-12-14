/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181916
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
    var_19 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) min((((/* implicit */long long int) ((arr_0 [i_0]) ? (min((1105643922U), (((/* implicit */unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) arr_1 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)38332)) << (((((arr_1 [i_0]) + (1125754103))) - (9)))))) ? (1424612509402435588LL) : (((/* implicit */long long int) (+(arr_1 [i_0]))))))))) : (((/* implicit */short) min((((/* implicit */long long int) ((arr_0 [i_0]) ? (min((1105643922U), (((/* implicit */unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) arr_1 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)38332)) << (((((((((arr_1 [i_0]) + (1125754103))) - (9))) + (926910701))) - (22)))))) ? (1424612509402435588LL) : (((/* implicit */long long int) (+(arr_1 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_6 [(unsigned short)8] = ((/* implicit */int) (+(134217728U)));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)6])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) arr_1 [16ULL]))))) ? (((arr_5 [i_1] [i_1]) | (arr_5 [i_1] [i_1]))) : (min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))));
        var_21 &= ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) arr_0 [i_1])), (arr_5 [i_1] [i_1])))));
        arr_7 [i_1] = ((/* implicit */unsigned int) (+(arr_1 [6U])));
    }
    for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 4) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2])) * (((/* implicit */int) arr_10 [i_2] [i_2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (arr_1 [i_2])))) : (((arr_5 [11LL] [i_2]) * (arr_5 [(short)14] [i_2])))))) ? (max((min((arr_5 [i_2] [i_2]), (1356242551U))), (((/* implicit */unsigned int) min((arr_9 [i_2] [i_2]), (((/* implicit */unsigned short) arr_8 [i_2]))))))) : (max((((((/* implicit */_Bool) arr_8 [3U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095))) : (1356242556U))), (1105643922U)))));
        arr_11 [i_2] = ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)127)), ((unsigned short)56122)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (arr_5 [i_2] [i_2]) : (arr_5 [i_2 - 1] [i_2]))))))) << (((max((min((((/* implicit */long long int) arr_10 [14LL] [14LL])), (-1LL))), (((/* implicit */long long int) arr_8 [i_2 - 1])))) + (13LL))));
        arr_12 [i_2] = max((((((/* implicit */int) arr_0 [i_2 - 1])) % (max((((/* implicit */int) arr_9 [i_2 - 1] [i_2])), (arr_1 [i_2]))))), (((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (unsigned short)9413)))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned int) arr_0 [i_3]);
        arr_16 [i_3] [(_Bool)1] = ((/* implicit */unsigned char) (signed char)82);
    }
}
