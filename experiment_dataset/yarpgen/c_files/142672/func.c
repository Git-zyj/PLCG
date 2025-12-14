/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142672
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
    var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) -11LL)) ? (((/* implicit */int) (unsigned short)19)) : (((/* implicit */int) (unsigned char)251)))), (((/* implicit */int) var_13))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_1 [10ULL]);
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (-(min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) 9416793880092136593ULL)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) arr_1 [i_0]))))))))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_7))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_21 -= ((/* implicit */unsigned short) arr_5 [2LL]);
        var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_5 [14ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [9U] [i_1])))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0ULL))));
    }
}
