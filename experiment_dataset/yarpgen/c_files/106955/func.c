/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106955
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) var_8))), (max((var_8), (((/* implicit */int) (unsigned char)22)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) ((-1) > (((/* implicit */int) (signed char)-1)))))));
        arr_4 [(unsigned char)0] [17ULL] &= ((/* implicit */_Bool) (signed char)-18);
        arr_5 [15] = ((/* implicit */unsigned short) ((((((((arr_0 [i_0]) + (2147483647))) << (((((arr_3 [i_0]) + (419919332))) - (20))))) < (var_8))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) var_5)) : (arr_3 [i_0]))))) : (max((((/* implicit */int) ((signed char) arr_0 [i_0]))), (max((((/* implicit */int) var_10)), (arr_2 [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */_Bool) ((unsigned char) max((arr_2 [i_1]), (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)19816)))))));
        var_14 ^= ((/* implicit */unsigned char) arr_6 [i_1]);
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 511)) ? (714965961) : (((/* implicit */int) (signed char)127))))) ? ((+(((unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) (+(((int) -361280808)))))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((unsigned short) 131025806)))));
    }
}
