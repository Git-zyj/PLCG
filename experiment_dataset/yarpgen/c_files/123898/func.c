/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123898
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
    var_16 = ((/* implicit */short) min((((/* implicit */int) var_0)), (((var_3) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (unsigned short)21627)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))))));
    var_17 = ((/* implicit */long long int) var_3);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18841)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) ? (max((var_1), (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)43902)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
            {
                var_20 ^= ((/* implicit */short) ((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) arr_1 [i_1 + 2] [i_1 - 1]))));
                /* LoopNest 2 */
                for (long long int i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        {
                            arr_13 [i_0 - 1] [i_1] [i_0 - 1] [i_1] [i_0 - 1] [i_2] [8LL] = ((/* implicit */unsigned char) var_12);
                            arr_14 [i_1] [i_2] = ((/* implicit */long long int) ((((((((/* implicit */int) var_10)) + (2147483647))) << (((var_1) - (3988940919589153500LL))))) < (((/* implicit */int) var_9))));
                        }
                    } 
                } 
            }
            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_8)))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    for (long long int i_7 = 1; i_7 < 12; i_7 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */short) (~(((/* implicit */int) arr_20 [i_7] [i_5] [i_5] [i_7 - 1] [i_7 - 1] [i_7]))));
                            var_23 -= ((/* implicit */_Bool) (((_Bool)1) ? (3359874640U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (var_7))))));
                            arr_23 [i_7] [i_5] [i_5] [i_6] [i_7] = ((/* implicit */long long int) (signed char)-1);
                        }
                    } 
                } 
            }
            arr_24 [i_0] = ((/* implicit */_Bool) var_6);
        }
    }
    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        var_24 = ((/* implicit */signed char) ((((((/* implicit */int) (short)15238)) - (1585820276))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)37644))) != (432345564227567616LL))))));
        var_25 = ((/* implicit */unsigned int) var_6);
        arr_27 [i_8] = ((/* implicit */signed char) var_0);
    }
}
