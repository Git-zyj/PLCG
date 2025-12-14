/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147306
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
    var_11 |= ((/* implicit */short) (-(((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51996))) : (4294967294U))) : (((((/* implicit */_Bool) var_5)) ? (var_7) : (var_7)))))));
    var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24350))))))))));
    var_13 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) var_2);
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [(short)15]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) != (((16623777576079316810ULL) << (((267862546U) - (267862494U)))))));
                var_16 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (short)8440)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned char)159)))) : (((int) var_8))))));
                var_17 &= ((/* implicit */signed char) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))) == (arr_2 [i_1]))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (arr_0 [i_1])))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 6501923015776906864ULL)))))));
                var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_1])), (var_8)))))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (18446744073709551599ULL))))))))));
            }
        } 
    } 
}
