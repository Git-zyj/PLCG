/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187118
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
    var_13 |= ((/* implicit */unsigned int) var_0);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_14 *= ((/* implicit */signed char) (+(max((arr_1 [i_0]), (((/* implicit */unsigned int) var_9))))));
        var_15 = ((/* implicit */short) arr_0 [i_0]);
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((unsigned long long int) var_1)))));
            var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_1]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
            {
                var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (5947163559398844413LL) : (((/* implicit */long long int) ((/* implicit */int) (short)6691)))))) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((int) arr_6 [(unsigned char)1]))));
                arr_8 [i_1] [16LL] [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) 9223372036854775796LL)) ? (9223372036854775796LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)14])))))));
            }
            for (short i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))) + (18446744073709551605ULL)));
                var_20 ^= ((/* implicit */unsigned short) (signed char)-5);
            }
            var_21 = ((/* implicit */unsigned int) (+(((long long int) (-(var_1))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_13 [i_4] [i_4] = ((/* implicit */unsigned short) ((signed char) arr_7 [i_0] [i_0] [i_0]));
            arr_14 [i_0] [i_4] [i_4] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (signed char)30))))));
            var_22 = ((/* implicit */unsigned int) arr_2 [(unsigned char)11] [i_0]);
            var_23 = ((/* implicit */signed char) (+(9223372036854775796LL)));
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_12 [i_0] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_4]))))))));
        }
        for (short i_5 = 2; i_5 < 15; i_5 += 4) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (9223372036854775787LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-14840)))));
            arr_17 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)19)) % (((/* implicit */int) (short)16577))));
        }
    }
    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29)))))) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23))))), (((/* implicit */unsigned int) var_0)))))));
}
