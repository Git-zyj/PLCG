/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127369
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (-(((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0])))));
        var_10 = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_0 [i_0])))), (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
    }
    for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)104)))))) < (max((9077563337799531335ULL), (((/* implicit */unsigned long long int) arr_5 [i_1])))))))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(max((((/* implicit */int) arr_3 [i_1])), (arr_2 [(unsigned short)21])))))) ? (((((/* implicit */_Bool) arr_5 [i_1 - 3])) ? ((~(9077563337799531335ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)17))))))) : (9077563337799531335ULL)));
        var_13 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (arr_2 [i_1 - 3]) : (((/* implicit */int) arr_5 [i_1 - 2])))), (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) arr_5 [i_1 - 3]))))));
    }
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
    var_15 = ((/* implicit */unsigned long long int) (~(-4)));
}
