/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162794
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
    var_14 &= ((/* implicit */unsigned short) -8852060551746548592LL);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_5)))) ? (arr_1 [(signed char)1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))), (((unsigned long long int) -8852060551746548592LL)))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 7; i_4 += 4) 
                        {
                            {
                                var_16 = (+(((((min((-8852060551746548592LL), (var_3))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] [i_4 + 3])) - (13767))))));
                                arr_13 [i_3] [i_1] [i_2 - 1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -8852060551746548592LL)) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (((/* implicit */int) ((unsigned short) arr_5 [i_1] [i_2] [i_3] [i_4])))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [6ULL] |= ((/* implicit */signed char) ((((long long int) 18446744073709551615ULL)) % (((long long int) arr_9 [i_0 + 1]))));
                    arr_17 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_5])) ? (1346926353452595142LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)24)) ? (8852060551746548589LL) : (((/* implicit */long long int) var_5))))));
                    arr_22 [i_0] [i_1] = ((/* implicit */unsigned char) arr_18 [i_1] [i_0 - 1]);
                }
                var_18 = ((/* implicit */unsigned short) ((min((-1346926353452595143LL), (((/* implicit */long long int) (signed char)-55)))) & (((/* implicit */long long int) arr_7 [(signed char)5] [(signed char)5] [(signed char)5] [i_1]))));
            }
        } 
    } 
}
