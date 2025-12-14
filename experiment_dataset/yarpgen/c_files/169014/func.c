/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169014
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_11 *= ((/* implicit */signed char) var_2);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_12 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 2]))));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)99)) ? (1620116057U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2674851238U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (11630185955775282946ULL)))) ? (((/* implicit */unsigned int) (~(var_10)))) : (((((/* implicit */_Bool) var_10)) ? (1620116048U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))))));
            }
            for (short i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                var_15 += ((_Bool) arr_8 [i_0 - 2] [i_1] [i_3]);
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((_Bool) arr_6 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 1])))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_0 - 2])) ? (((1620116035U) & (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 1] [i_0 - 2]))))))));
            }
        }
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0 - 1])) ? (arr_3 [i_0]) : (arr_3 [i_0]))), (((/* implicit */int) ((short) arr_2 [i_0] [i_0] [i_0 - 2]))))))));
        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1620116057U)) ? (2674851239U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_5))));
    }
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_8))));
    var_22 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (1620116057U)));
}
