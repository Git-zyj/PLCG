/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165107
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
    var_10 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1859443899)) || (((/* implicit */_Bool) 8388607)))) || (((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) ((_Bool) var_1))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_4 [6ULL] = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
        var_11 = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2]))));
        arr_5 [(unsigned char)10] = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0 - 1]))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_0 [(signed char)14] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_1]), (((/* implicit */unsigned char) arr_1 [i_1])))))) : (((((/* implicit */_Bool) -8388614)) ? (5784083666251911070LL) : (2432087408164837456LL))))))));
        var_13 &= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned char)0] [i_1])) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1]))))))) == (((/* implicit */int) ((((/* implicit */_Bool) min((arr_7 [0ULL] [i_1]), (arr_7 [(signed char)12] [(signed char)12])))) || (((/* implicit */_Bool) max((((/* implicit */short) arr_6 [i_1])), (arr_7 [(signed char)10] [i_1])))))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [3LL]))) % (arr_3 [2] [(unsigned short)11]))) >= (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1]))))))))) == (((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) - (var_5))) >> (((arr_3 [10] [10]) - (1195973077230861037LL)))))));
    }
}
