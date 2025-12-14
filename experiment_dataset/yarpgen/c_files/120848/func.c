/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120848
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_11 = ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (((/* implicit */long long int) var_7)))) == (((/* implicit */long long int) arr_2 [i_0 + 1] [i_0 + 1])))) ? (((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (arr_1 [i_0] [(short)12])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 7740004877234177607LL)))))) != (arr_1 [i_0] [i_0 + 1]))))));
        var_12 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1])) ? (arr_1 [i_0] [(unsigned char)9]) : (arr_0 [i_0]))) : (arr_2 [i_0 + 1] [i_0 + 1]))), (var_5)));
    }
    var_13 &= ((/* implicit */int) ((long long int) var_6));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) >> (((var_5) - (1521707126U)))))) ? (((long long int) arr_4 [i_1] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))));
        var_14 += ((/* implicit */unsigned long long int) (!(((var_4) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60493)))))));
        arr_6 [i_1] [4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1]))));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_0))));
        var_16 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_6))))));
    }
    for (signed char i_2 = 1; i_2 < 8; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_9))))))) >> (((((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1])) ? (arr_4 [i_2 + 2] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)28445))))) - (2665719090U)))));
        var_18 = ((/* implicit */signed char) ((long long int) (signed char)54));
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) == ((+(arr_13 [i_4])))))) : (((/* implicit */int) max((arr_11 [i_4]), ((short)28445)))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(arr_4 [i_2] [(_Bool)1]))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)227)) ? ((+(var_2))) : (((/* implicit */unsigned long long int) var_9))));
                        var_22 = ((/* implicit */int) (+(arr_2 [i_3 - 1] [i_3 - 1])));
                    }
                    for (unsigned short i_6 = 2; i_6 < 7; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_23 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_4] [4ULL] [8U])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_17 [i_7] [(unsigned char)10])))) << (((((/* implicit */int) max(((short)27404), ((short)-20316)))) - (27393))))))));
                            var_24 += ((/* implicit */signed char) 14928699282718688532ULL);
                            arr_23 [i_7] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */short) arr_0 [i_2]);
                        }
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) ((var_4) << (((arr_1 [i_6 + 4] [i_2 + 2]) - (2148703069U)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)30935))))) : (((((/* implicit */_Bool) arr_1 [i_6 - 1] [i_2 + 1])) ? (arr_12 [i_4] [i_2 - 1]) : (((/* implicit */unsigned long long int) arr_1 [i_6 - 2] [i_2 + 3]))))))));
                    }
                    for (int i_8 = 3; i_8 < 10; i_8 += 1) 
                    {
                        var_26 &= ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            var_27 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-127), (arr_9 [i_2 + 3] [i_3] [i_4]))))) < (((((/* implicit */_Bool) arr_9 [i_2] [i_3 - 1] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 + 3] [8] [i_4]))) : (arr_21 [i_9] [i_8 + 1] [i_4] [(signed char)10] [i_2 + 3])))));
                            var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_2] [i_2] [i_9] [i_2] [(signed char)2]))) : (var_2)))) ? (((/* implicit */int) ((var_2) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_9] [i_9])))))) : ((~(((/* implicit */int) (unsigned short)22800))))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))) : (var_1))))) : (((unsigned long long int) max((((/* implicit */long long int) var_0)), ((-9223372036854775807LL - 1LL)))))));
                            arr_30 [i_2] [5ULL] [i_2] [i_4] [i_2] [i_4] [6U] = ((/* implicit */int) var_10);
                            var_29 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_2] [i_2] [i_4] [i_4] [i_2] [i_3 - 1]))))) ? (((/* implicit */long long int) arr_1 [i_8 + 1] [i_8 + 1])) : (max((((/* implicit */long long int) arr_26 [i_4] [i_2] [i_4] [i_3 - 1] [i_2] [i_3 - 1])), (var_1))));
                            var_30 = ((/* implicit */unsigned long long int) var_6);
                        }
                    }
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        arr_33 [i_10] [i_10] [i_2] [i_10] = ((/* implicit */int) (+(max((((((/* implicit */_Bool) arr_8 [(_Bool)1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7484))))), (((/* implicit */long long int) arr_22 [(signed char)4] [i_3 - 1] [i_2] [10U] [i_10]))))));
                        var_31 ^= ((/* implicit */int) min((((/* implicit */unsigned short) ((max((((/* implicit */long long int) arr_29 [i_10] [i_10] [i_3] [i_2 + 3] [i_10] [i_2])), (var_1))) == (((/* implicit */long long int) ((/* implicit */int) ((17712442976657053913ULL) < (((/* implicit */unsigned long long int) -58490677))))))))), (((unsigned short) min((var_3), (var_4))))));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_2 + 2] [i_2 + 2]))))), (arr_21 [i_3 - 1] [8ULL] [i_3] [7] [8]))))));
                    }
                    var_33 = ((/* implicit */signed char) max((((/* implicit */long long int) (((+(2147483647))) == (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))))), (max((7740004877234177607LL), (((/* implicit */long long int) (short)6727))))));
                }
            } 
        } 
    }
}
