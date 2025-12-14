/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10890
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-22))))) : ((~(var_8)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_7)), ((unsigned char)12))))) & (((((/* implicit */_Bool) (unsigned char)211)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44)))))))) : (var_5)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~((+((~(((/* implicit */int) var_9))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((arr_1 [8LL] [(short)9]) ? (((/* implicit */unsigned long long int) var_3)) : (var_11)))) ? (((((/* implicit */_Bool) 1012643545)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) ((unsigned short) var_3))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(signed char)10]))) : (2127769861U))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) == (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_5 [i_1])))))))));
        var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (var_3)))), ((+(arr_6 [i_1])))))) ? (((/* implicit */unsigned long long int) ((int) (~(var_6))))) : (((((/* implicit */unsigned long long int) 517208034U)) ^ (arr_0 [i_1])))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        var_16 -= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1])))));
        arr_10 [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) min((arr_8 [14LL] [14LL]), (((/* implicit */signed char) (_Bool)1))))) > ((~(((/* implicit */int) arr_8 [i_2 + 1] [12]))))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1]))))));
    }
    var_17 |= var_7;
}
