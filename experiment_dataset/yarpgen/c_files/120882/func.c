/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120882
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_6)) - (96)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)0)))))) : (((/* implicit */int) var_0)))))));
    var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_8) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9)))))) ? (min((var_8), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)0))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) : (var_5)))) ? (((((/* implicit */_Bool) (unsigned char)252)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_15 -= ((/* implicit */unsigned short) 9223090561878065152LL);
            arr_4 [i_0] = ((/* implicit */unsigned char) ((((long long int) arr_0 [i_1])) > (((6465402538596653053LL) + (var_5)))));
        }
        var_16 = ((/* implicit */signed char) ((arr_2 [i_0]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))));
        var_17 = ((/* implicit */unsigned short) var_5);
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((long long int) arr_2 [i_0 + 2])) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))));
    }
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) (unsigned short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))) : (((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_8)))))) ? (((/* implicit */int) ((unsigned short) ((unsigned char) var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    var_20 = ((/* implicit */_Bool) var_12);
}
