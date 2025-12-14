/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158496
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
    var_10 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-12)), (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_7)) ? (13793782440725514851ULL) : (((/* implicit */unsigned long long int) var_9)))))) >> (((((/* implicit */int) (signed char)112)) - (90)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_11 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)6])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0])))) : (((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((var_3) + (var_9))) : (((/* implicit */long long int) max((2220274607U), (arr_2 [(unsigned char)12]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (-((((_Bool)1) ? ((~(((/* implicit */int) (unsigned char)125)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_1 [i_0])))))))));
    }
    var_12 = ((/* implicit */unsigned long long int) var_2);
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (~(var_6))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (var_7)))))));
    var_14 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned short)64007));
}
