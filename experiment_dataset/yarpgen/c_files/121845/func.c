/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121845
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((2052707802), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2052707803)) ? (arr_3 [i_0]) : (((/* implicit */long long int) 2052707788))))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) (unsigned short)49219);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_11))));
            var_17 = max(((unsigned short)35185), (((/* implicit */unsigned short) var_11)));
        }
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) * (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (arr_6 [(unsigned short)18]))), (((((/* implicit */_Bool) -2052707802)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_4))))))))));
            var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) max((arr_7 [i_0]), (((/* implicit */unsigned int) (short)-31217)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned short)49219)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
            {
                var_20 *= ((/* implicit */unsigned long long int) var_11);
                arr_16 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((arr_15 [i_0] [i_2] [i_3]), (((/* implicit */unsigned short) var_8))))) ? (((/* implicit */unsigned long long int) min((1023581730), (((/* implicit */int) var_8))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15166))) ^ (var_4))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */int) arr_15 [i_0] [i_2] [i_3])), (-2052707803))), (((/* implicit */int) var_13)))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
            {
                arr_19 [i_0] = ((/* implicit */short) arr_14 [i_0] [(_Bool)1] [(signed char)5] [i_0]);
                arr_20 [i_0] [4ULL] [i_0 - 2] &= ((/* implicit */unsigned long long int) var_5);
            }
            arr_21 [i_0] = ((/* implicit */unsigned long long int) var_7);
        }
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_2))));
            arr_24 [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-32764)) + (2147483647))) >> (((268435455) - (268435430)))));
                    var_23 += ((/* implicit */unsigned short) -2052707819);
                    var_24 &= ((/* implicit */signed char) (short)23346);
                    var_25 += ((/* implicit */short) ((arr_18 [i_7 - 1] [i_7 - 1] [i_0 + 1] [i_0 - 2]) && (arr_18 [i_7 - 1] [i_7 - 1] [i_0 + 1] [i_0 - 2])));
                    arr_31 [(_Bool)1] [i_6] [(unsigned short)10] [i_5] [i_0] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) & ((-(var_14)))));
                }
                arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (10603218477027144545ULL) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_5] [i_0] [(signed char)0]))))) ? (((((/* implicit */int) arr_13 [i_6])) / (((/* implicit */int) arr_26 [i_0] [i_0] [i_0 + 1])))) : ((-2147483647 - 1))));
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [4] [4])) || (((/* implicit */_Bool) 15203092204244565188ULL)))) && (((var_3) || (var_3))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        {
                            var_27 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_9]))) | (7843525596682407079ULL)));
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) 5520671477193114069ULL))));
                        }
                    } 
                } 
            }
        }
    }
    var_29 |= ((/* implicit */int) ((((/* implicit */_Bool) -11LL)) && (((/* implicit */_Bool) 10LL))));
    var_30 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) + (((((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */short) var_3)))))) + (((-8016030036256156577LL) + (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)15418)) && (((((/* implicit */_Bool) -10LL)) || (((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_0)))))))));
}
