/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181061
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [(short)19] = max((((((-942302115455125597LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)61513)) - (61483))))), (((/* implicit */long long int) min(((unsigned short)6244), (min((var_5), (((/* implicit */unsigned short) arr_1 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_0 [i_1] [i_1]) / (arr_0 [i_1] [i_1])))) / (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) 3824971706663865937LL))))));
        arr_6 [4U] [i_1] = max(((+(((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9397114768586326610ULL))))), (14816713759234568231ULL));
        arr_7 [i_1] = (((-(((((/* implicit */_Bool) -942302115455125598LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14234454530866055160ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)42098), (((/* implicit */unsigned short) arr_4 [i_1] [i_1])))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned int) ((_Bool) arr_10 [i_2]));
        var_17 = ((/* implicit */short) (_Bool)1);
        var_18 = ((/* implicit */_Bool) ((unsigned short) arr_0 [i_2] [i_2]));
    }
    var_19 = ((((/* implicit */_Bool) (-(min((-942302115455125597LL), (((/* implicit */long long int) (short)-17374))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 219935330381125306ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_14))))) % (max((((/* implicit */long long int) var_14)), (4168151795631324965LL)))))) : (max((((/* implicit */unsigned long long int) (unsigned char)125)), (6442319724281809157ULL))));
}
