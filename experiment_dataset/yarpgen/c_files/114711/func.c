/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114711
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_3)))) : (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_11 ^= ((/* implicit */int) var_5);
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))));
    }
    for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_1))))));
        var_13 &= ((/* implicit */unsigned char) var_6);
        var_14 = ((/* implicit */signed char) min((var_1), (var_2)));
    }
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) var_1);
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (unsigned int i_4 = 1; i_4 < 17; i_4 += 2) 
            {
                for (long long int i_5 = 2; i_5 < 19; i_5 += 3) 
                {
                    {
                        arr_16 [i_2] [i_4] [15ULL] [i_2] [i_5] = ((/* implicit */unsigned char) var_6);
                        arr_17 [i_4] [12U] = ((/* implicit */unsigned long long int) var_8);
                        var_15 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_8))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                        var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((68719476735LL), (-68719476742LL)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))))));
                        var_17 = ((/* implicit */short) min((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */_Bool) var_3)) ? (var_5) : (var_6)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_6 = 2; i_6 < 17; i_6 += 1) 
        {
            arr_21 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_5)) ? (var_6) : (var_5)))));
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3)))) ? (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
            arr_22 [i_2] [i_2] [i_2] = ((/* implicit */long long int) var_9);
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 3) 
    {
        for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    for (unsigned int i_10 = 1; i_10 < 15; i_10 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */short) var_2))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))));
                            var_20 = ((/* implicit */int) var_8);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_12 = 1; i_12 < 16; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 3; i_13 < 18; i_13 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) var_2);
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_9))));
                                arr_41 [i_7] [5LL] [i_11] [i_12] [i_7] = ((/* implicit */int) var_3);
                            }
                        } 
                    } 
                    arr_42 [i_7] [i_8] [i_11] [i_7 - 2] |= ((/* implicit */unsigned short) var_3);
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 19; i_14 += 2) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 19; i_15 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                                arr_50 [i_7] [i_7] [i_11] [(signed char)7] [i_11] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_4))));
                                arr_51 [i_7] [i_8] [8LL] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned char)20)) ? (68719476740LL) : (var_6))) : (7507539849941822312LL)));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))) ? (var_6) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6)))));
                }
            }
        } 
    } 
    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_9))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))) ? (var_5) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) ? (max((var_5), (var_6))) : (var_5))));
}
