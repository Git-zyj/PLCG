/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137152
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
    for (int i_0 = 1; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_10 = ((32904200) ^ (287179631));
        var_11 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -235072255)) ? (-3449770782323952009LL) : (((/* implicit */long long int) -421041307))))), (max((((/* implicit */unsigned long long int) var_1)), (var_9)))))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_8)) + (((/* implicit */int) var_4)))) + (((/* implicit */int) min((var_4), (var_7))))))) : (((((/* implicit */_Bool) 1974255490)) ? (((/* implicit */long long int) 3739361234U)) : (9033886363047068442LL)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)75)) > (32904200)))) : (((/* implicit */int) var_4)))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_6) || (((/* implicit */_Bool) var_4))))) - (var_2)));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                arr_16 [i_4] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) var_2);
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) >= (var_5))))) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_9)))));
            }
            arr_17 [i_2] [i_2] = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */int) var_7)))) : (((((/* implicit */int) var_6)) + (var_0))));
        }
        for (int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))));
            arr_21 [i_2] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3)))));
            var_16 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) - (((/* implicit */int) var_8)))) & (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))));
            var_17 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)));
        }
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_9)))) ? (var_9) : (((/* implicit */unsigned long long int) var_1))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (var_2) : (((((/* implicit */int) var_8)) * (((/* implicit */int) var_8))))));
        var_20 = ((/* implicit */int) var_8);
    }
    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
    {
        arr_26 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned char) var_6))))) ? (((421041306) / (-1974255499))) : (((var_5) * (((/* implicit */int) var_6))))))) ? (max((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) var_4))))), (max((var_9), (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (max((var_2), (((/* implicit */int) var_8)))))))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 5772573191135778559LL)) && (((/* implicit */_Bool) -32904200))));
    }
    var_22 ^= ((((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))))) + (max((((/* implicit */int) min((var_8), (var_8)))), (((var_1) + (var_1))))));
}
