/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117085
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
    var_10 |= max((((/* implicit */int) var_4)), (var_9));
    var_11 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65525)) + (-1999410082)))) * (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (arr_2 [i_0 + 1]))));
        arr_3 [i_0] [i_0] = arr_2 [i_0];
        var_13 = ((((_Bool) (signed char)18)) || (((arr_2 [i_0]) >= (((/* implicit */int) var_4)))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))));
                    var_15 = ((/* implicit */int) arr_1 [i_2] [(signed char)19]);
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) 
        {
            var_17 ^= var_1;
            var_18 *= ((/* implicit */int) ((unsigned char) ((_Bool) var_9)));
            var_19 = var_8;
        }
    }
}
