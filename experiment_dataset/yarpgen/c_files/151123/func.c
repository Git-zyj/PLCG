/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151123
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)64187)) - (var_12)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2017024032U)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (_Bool)1))))) : (min((var_4), (((/* implicit */long long int) arr_6 [i_1] [i_1]))))))));
            var_15 = (_Bool)1;
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
        {
            arr_9 [i_0] [(signed char)10] = ((/* implicit */unsigned short) ((short) arr_6 [i_0] [15LL]));
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_1))));
            var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_2]))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned char i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        {
                            arr_18 [i_0] [i_0] [15LL] [i_3] [15LL] [15LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2277943262U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_7 [i_2] [i_5])))) : (2017024019U)));
                            var_18 &= ((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)19]));
                            arr_19 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((signed char) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [15] [15]));
                            var_19 = ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_13 [i_0]))));
                    var_21 = ((/* implicit */long long int) var_0);
                    arr_23 [(_Bool)1] [(_Bool)1] [i_3] [(short)6] = ((/* implicit */short) var_7);
                }
                for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_0))));
                    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
                    arr_26 [i_0] [i_2] [i_0] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) var_6))))));
                }
                for (int i_8 = 1; i_8 < 21; i_8 += 2) 
                {
                    arr_31 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_2] [i_8] [i_8] [i_8 + 2])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_0] [i_2] [i_8 + 2])) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) -9223372036854775803LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)4464))))));
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((((/* implicit */_Bool) arr_4 [9ULL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-12357)))))))));
                        arr_34 [i_2] [i_2] [i_2] [i_2] [9U] = ((/* implicit */unsigned int) (+(arr_22 [5U] [i_2] [i_8 - 1] [i_8 - 1])));
                    }
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        arr_37 [i_0] [i_2] [i_0] [i_2] [i_10] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) 2277943254U)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                        var_25 += ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_8 - 1] [i_8 + 2])) ? (arr_15 [i_8 + 1] [i_8 + 2]) : (arr_15 [i_8 + 1] [i_8 - 1])));
                        arr_38 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 1])) || (((/* implicit */_Bool) arr_20 [i_8 + 1] [i_2] [i_3] [i_3]))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_26 *= ((/* implicit */short) (+(((((/* implicit */_Bool) 6917529027641081856LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1)))));
                        arr_41 [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_8 + 2] [i_2] [i_8 + 2])) >> (((1356759828713022967ULL) - (1356759828713022947ULL)))));
                    }
                }
            }
        }
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12361))) : (9320092600171081030ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_0]))) ^ (((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (max((((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_0]))))), (max((((/* implicit */unsigned long long int) var_8)), (var_3)))))));
        arr_42 [i_0] = ((/* implicit */int) ((signed char) (+(((arr_32 [(short)2] [(short)2] [i_0] [(short)2] [i_0] [(_Bool)1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
        var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [(_Bool)1])) | (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) max((var_10), (var_8)))))))));
    }
    var_29 -= var_8;
    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))));
    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) var_7))));
}
