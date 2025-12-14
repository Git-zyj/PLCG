/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149226
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
    var_12 = (!(((/* implicit */_Bool) max((max(((unsigned short)24039), ((unsigned short)36935))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 6; i_1 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */long long int) (signed char)9);
            var_14 = (-(min((arr_5 [i_1 - 1]), (arr_5 [i_1 + 4]))));
        }
        for (signed char i_2 = 3; i_2 < 6; i_2 += 2) /* same iter space */
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_2 + 3]);
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((var_5), (((/* implicit */unsigned long long int) (unsigned short)33490))))))) ? (((/* implicit */unsigned long long int) min((max((var_3), (((/* implicit */long long int) 4134653658U)))), (max((((/* implicit */long long int) (unsigned short)33481)), (var_3)))))) : (max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (var_7)))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1883))) | (33554431U)));
            var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11535550474902803156ULL)) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))));
            var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))));
        }
        arr_12 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41494))) : (min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0])), (var_7))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-108)))))));
    }
    for (signed char i_4 = 2; i_4 < 18; i_4 += 3) 
    {
        arr_15 [(unsigned short)0] |= ((((/* implicit */_Bool) min(((unsigned short)63653), (arr_13 [(signed char)16] [(signed char)18])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_14 [i_4] [i_4])))) : (((arr_14 [i_4] [i_4]) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-23055)) < (((/* implicit */int) (unsigned short)1)))))))));
        arr_16 [i_4] = ((/* implicit */unsigned int) min((((/* implicit */int) ((((((/* implicit */int) (unsigned short)7)) + (((/* implicit */int) (unsigned short)1898)))) >= (((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */int) arr_13 [i_4] [i_4 + 2])) : (((/* implicit */int) arr_13 [i_4] [i_4]))))))), ((-(((/* implicit */int) ((4294967291U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
    }
    for (signed char i_5 = 3; i_5 < 18; i_5 += 4) 
    {
        var_18 = ((/* implicit */int) arr_18 [i_5 - 2]);
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_19 -= ((/* implicit */_Bool) arr_21 [i_5]);
            arr_23 [i_6] = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) var_2)), (var_0)))));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((33554437U), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1046))) > (0ULL))))))) | ((~(24ULL)))));
        }
    }
    var_21 = ((/* implicit */int) var_7);
}
