/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125854
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
    var_19 &= ((/* implicit */unsigned short) min((((/* implicit */long long int) 4294967295U)), (((((/* implicit */_Bool) (unsigned short)50179)) ? (min((-2336349311420737040LL), (((/* implicit */long long int) (unsigned short)15343)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15357)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) var_0);
        var_20 &= ((/* implicit */unsigned short) (+(var_5)));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)216))))) ? (max((((/* implicit */int) (unsigned short)50192)), (1074349017))) : (((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
        var_22 = ((((/* implicit */int) min((arr_0 [i_0 - 3]), (((/* implicit */unsigned short) var_14))))) > (((((/* implicit */_Bool) (unsigned short)15352)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (unsigned short)50181)))));
    }
    var_23 = ((/* implicit */_Bool) var_12);
}
