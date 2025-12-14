/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11406
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
    var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)20))))) ? (((/* implicit */int) var_5)) : ((((-2147483647 - 1)) + (((/* implicit */int) (signed char)127)))))))));
    var_12 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (unsigned char)255)))))));
        var_14 &= ((/* implicit */unsigned short) max((((/* implicit */long long int) var_3)), (((((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (arr_1 [i_0]))) & (max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0]))))))));
    }
}
