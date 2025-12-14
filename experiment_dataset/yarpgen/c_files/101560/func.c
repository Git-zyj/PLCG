/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101560
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 3; i_4 < 15; i_4 += 2) 
                        {
                            arr_10 [i_0] [i_4] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) 631800872);
                            var_12 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29374)) ? (631800872) : (((/* implicit */int) (unsigned short)39495))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-631800872) : (var_4))))));
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -631800863)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 2]))) : (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_10)))))))));
                            arr_11 [i_0] [i_1 - 2] [i_1 - 2] [i_3 - 1] [i_4] [i_4] = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned long long int) (!(((_Bool) (unsigned short)26041)))))));
                        }
                        var_14 = ((/* implicit */unsigned char) min((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-20304)))), (((/* implicit */int) var_9))));
                        arr_12 [i_0 + 3] [i_0] [i_0] [i_0 - 2] = ((/* implicit */int) var_0);
                    }
                    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((var_4) & (((/* implicit */int) (unsigned short)39495)))))) ? (((481982019797964701ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 2] [i_1] [i_0 + 1] [i_1 - 2] [i_5 + 1]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1905816708)) ? (((/* implicit */int) (unsigned char)248)) : (631800862))) ^ (((var_8) | (((/* implicit */int) var_7)))))))));
                        var_16 -= ((/* implicit */unsigned char) (~((-2147483647 - 1))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (6488127367451875097LL)));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_3)), (481982019797964699ULL)));
                        /* LoopSeq 1 */
                        for (int i_7 = 1; i_7 < 16; i_7 += 2) 
                        {
                            arr_24 [i_0] [i_0] [i_7] [i_6] = ((/* implicit */unsigned char) max((((short) ((481982019797964689ULL) * (((/* implicit */unsigned long long int) var_8))))), (((/* implicit */short) var_7))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((((((/* implicit */int) var_5)) * (var_4))) / ((-(var_8))))) * (((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned char)5)))))))));
                            var_20 = ((/* implicit */unsigned char) ((_Bool) var_4));
                        }
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) arr_16 [(signed char)2] [i_1] [i_1] [i_6] [i_1] [i_1])) - (73))))), (((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [i_6] [i_0] [i_0]))))) ? (min((((/* implicit */int) ((((/* implicit */int) (unsigned short)26040)) <= (((/* implicit */int) (unsigned char)253))))), (((((/* implicit */int) (unsigned char)79)) - (((/* implicit */int) (unsigned short)9)))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) -919353823)) && (((/* implicit */_Bool) (unsigned short)26056))))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 17; i_8 += 2) 
                        {
                            var_22 = ((/* implicit */short) arr_22 [i_6] [i_2] [14]);
                            var_23 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_6] [i_0])) ? (((/* implicit */int) arr_20 [i_0] [i_1] [(unsigned char)8] [i_6] [i_6])) : (-409043586))) != (arr_6 [i_0 + 3] [i_0] [i_0])));
                        }
                        var_24 |= ((/* implicit */unsigned char) var_10);
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */int) min((17964762053911586916ULL), (((/* implicit */unsigned long long int) (short)-32757))));
                        var_26 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_5)) + (((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 1] [i_0] [(unsigned short)4]))))))), (var_10)));
                    }
                    var_27 &= ((/* implicit */unsigned char) ((var_0) ? (max((((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [i_1] [i_0 + 3] [i_0])), (17964762053911586932ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_5 [i_0 + 1])))))));
                    var_28 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) != (((((/* implicit */int) (short)-3873)) & (-631800851)))))) + (((/* implicit */int) ((unsigned short) ((7885876100242338815LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30)))))))));
                    var_29 *= ((/* implicit */short) ((((((/* implicit */int) var_0)) & ((~(((/* implicit */int) (unsigned char)226)))))) & (((((/* implicit */int) var_5)) >> (((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_2 [i_0 - 1])))) - (59)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 11; i_10 += 2) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            {
                arr_35 [(_Bool)1] [i_10] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [i_11])) + (((/* implicit */int) ((_Bool) arr_0 [i_10]))))) - (((((/* implicit */int) ((((/* implicit */unsigned long long int) 0U)) <= (var_10)))) << (((/* implicit */int) var_0))))));
                var_30 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (var_6))) ? (var_8) : (((/* implicit */int) arr_16 [i_11] [i_10] [i_10] [i_10] [i_10] [i_10]))));
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) var_4);
}
