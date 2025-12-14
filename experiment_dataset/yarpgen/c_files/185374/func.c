/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185374
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0])))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_0] |= ((/* implicit */short) var_2);
            var_14 &= ((/* implicit */unsigned long long int) (((-(arr_0 [i_0]))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47)))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) 2221411228U)))));
            arr_9 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 14LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65280)) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_0]))))), (((((/* implicit */_Bool) (unsigned short)332)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (-2273295003181321729LL)))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                var_16 += ((/* implicit */unsigned long long int) var_2);
                var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -912402706)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)107))) : (-7991775994248086437LL)));
            }
            var_18 |= ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0)))) : (var_11)));
        }
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65200)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_3)) << (((((/* implicit */int) var_3)) - (23912)))))))) : (((max((arr_11 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) 1003502240U)))) << (((((((/* implicit */_Bool) var_4)) ? (arr_11 [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_0]))) - (4024475621229681312ULL)))))));
    }
    var_21 ^= ((/* implicit */unsigned int) var_10);
    var_22 |= ((/* implicit */unsigned long long int) (_Bool)1);
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_9))));
}
