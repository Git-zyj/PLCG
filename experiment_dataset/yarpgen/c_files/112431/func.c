/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112431
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_2))))), (var_11)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
        arr_4 [i_0] [(unsigned char)2] = var_6;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) arr_7 [i_1] [i_1]))))) == (((max((((/* implicit */unsigned long long int) (_Bool)1)), (3ULL))) * (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_3)))))))))));
        var_21 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_7 [(signed char)0] [i_1])), (var_15)))) && (((/* implicit */_Bool) ((13435904765851267073ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59808))))))))), (max((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) - (arr_5 [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (5010839307858284541ULL)))))) ? ((~(((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((var_10) - (13808616923800028645ULL))))))) : ((+(((/* implicit */int) ((signed char) var_18)))))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            {
                var_23 = (((_Bool)1) && (((/* implicit */_Bool) min(((-(21ULL))), (((/* implicit */unsigned long long int) arr_12 [(_Bool)1] [19U]))))));
                arr_14 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
}
