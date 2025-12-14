/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145614
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) ((((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) < ((~(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0]))))) ? (arr_1 [i_0] [i_0]) : (min((arr_1 [i_0] [(_Bool)1]), (((/* implicit */int) arr_0 [1LL]))))))) : ((~(-772190522383872465LL)))));
        var_13 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_0 [i_0])))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 4) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? ((~(var_3))) : (max((((/* implicit */int) (unsigned char)209)), ((~(((/* implicit */int) arr_2 [15LL]))))))));
        var_14 ^= ((/* implicit */long long int) (signed char)-7);
    }
    for (int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_15 = ((/* implicit */long long int) 10483502941651967917ULL);
        arr_8 [i_2] = ((/* implicit */_Bool) arr_6 [i_2] [i_2]);
        var_16 = ((/* implicit */long long int) min((var_16), (var_4)));
        var_17 |= ((/* implicit */_Bool) arr_6 [i_2] [i_2]);
    }
    var_18 = (_Bool)1;
}
