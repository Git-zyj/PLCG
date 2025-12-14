/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10535
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
    var_15 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) max((var_0), (var_6))))) ? (((/* implicit */unsigned long long int) max((max((770694081U), (((/* implicit */unsigned int) -813363002)))), (((/* implicit */unsigned int) var_4))))) : (max(((-(18446744073709551593ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) 6550164727789778741LL))));
                arr_5 [i_0] [i_1] [22ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (((((-(((/* implicit */int) (unsigned char)33)))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))) ? ((~(min((((/* implicit */unsigned int) arr_0 [i_0] [i_1])), (arr_1 [(unsigned short)4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [(unsigned short)21]), (((/* implicit */unsigned char) (signed char)-86))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)73)) <= (((/* implicit */int) (short)32552)))))));
                    var_17 = ((/* implicit */int) ((max((10594336759663818162ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 - 3])) != (((/* implicit */int) arr_4 [i_0 - 4]))))))));
                    var_18 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) || (((/* implicit */_Bool) 7168U))))) < (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 2])) != (((/* implicit */int) arr_2 [i_0 + 1])))))));
                    var_19 += ((((unsigned long long int) ((unsigned long long int) 18446744073709551615ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((/* implicit */int) arr_2 [6U]))))));
                    arr_11 [(signed char)22] = ((/* implicit */unsigned int) (-(arr_6 [i_0] [i_1] [i_0])));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 2) 
                {
                    var_20 = ((/* implicit */int) ((4U) << (((arr_14 [i_0 + 1] [15LL]) - (8852687911995248533ULL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 4; i_5 < 21; i_5 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_3] [i_0] [(short)19] [i_5 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2] [i_5 - 1]))) / (4294960119U)));
                                arr_22 [i_0] [i_5 + 1] [i_4] [14U] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)163);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_21 *= ((((/* implicit */_Bool) arr_13 [i_0 - 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_6]))) : (((((/* implicit */_Bool) var_10)) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_22 = ((/* implicit */long long int) (~(15454243559865293947ULL)));
                    }
                }
            }
        } 
    } 
    var_23 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((var_6) < (((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))))))));
    var_24 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(9U)))))) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) var_7)), (var_3))))) : (((((/* implicit */_Bool) (+(2142079387399767889LL)))) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) var_10))))));
}
