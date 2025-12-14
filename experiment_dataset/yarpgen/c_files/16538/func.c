/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16538
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [(unsigned char)6] = ((/* implicit */unsigned short) var_4);
        var_15 = ((((/* implicit */_Bool) ((11169228559661428078ULL) >> (((834583835U) - (834583817U)))))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) arr_1 [i_0] [(unsigned char)7]))))))) : ((-(((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0] [i_0]))))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            arr_8 [i_1] = (signed char)-98;
            var_17 = ((/* implicit */unsigned char) ((long long int) arr_7 [i_1] [i_2]));
            var_18 &= ((/* implicit */signed char) min((((long long int) arr_3 [i_2] [i_1])), (((/* implicit */long long int) (+(arr_5 [i_1]))))));
        }
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((short) ((((/* implicit */_Bool) (unsigned char)4)) ? (5177230845204385135LL) : (((/* implicit */long long int) arr_5 [i_1]))))), (((/* implicit */short) (unsigned char)41)))))));
            var_20 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) max(((unsigned char)175), (((/* implicit */unsigned char) arr_4 [(unsigned char)2]))))) : (((/* implicit */int) ((unsigned char) var_12)))))));
            arr_12 [i_1] [i_1] = ((/* implicit */signed char) max((min((max((var_8), (((/* implicit */long long int) 834583835U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 7277515514048123510ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_1] [i_3]))))))), (((/* implicit */long long int) var_13))));
        }
        var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (arr_10 [i_1])))));
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) ((unsigned char) arr_20 [15] [6ULL] [15] [i_6] [i_6]));
                        var_23 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 11169228559661428092ULL))) ? (((((/* implicit */_Bool) ((long long int) arr_5 [i_5]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)80))) : (((unsigned int) 1763188551U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)35)) ? (var_0) : (var_8)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)159))))) : (((((/* implicit */_Bool) 3460383476U)) ? (((/* implicit */unsigned int) var_7)) : (834583816U)))))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) max((var_6), (((/* implicit */unsigned int) var_3)))))) ? (((/* implicit */unsigned long long int) 834583826U)) : (((((/* implicit */_Bool) arr_16 [(unsigned char)14] [i_5] [i_4] [i_1])) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) (unsigned char)64)) ? (7277515514048123545ULL) : (((/* implicit */unsigned long long int) 140737471578112LL))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                var_25 = (-(arr_23 [21U] [(signed char)6] [i_1]));
                var_26 = ((/* implicit */_Bool) ((long long int) var_0));
            }
        }
        for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            var_27 = ((/* implicit */unsigned char) max((2502696864635947869LL), (min((((/* implicit */long long int) var_10)), (arr_20 [i_1] [i_8] [11LL] [i_1] [i_1])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                var_28 = ((/* implicit */_Bool) ((long long int) var_8));
                var_29 = ((/* implicit */unsigned char) var_5);
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) var_11);
                            arr_32 [i_9] = ((/* implicit */unsigned char) ((short) arr_28 [i_11] [i_9] [i_9] [i_1]));
                            arr_33 [i_1] [i_9] [i_9] [i_10] [i_1] = ((/* implicit */long long int) ((short) arr_21 [i_1] [i_1] [i_1] [i_1] [(unsigned char)19]));
                        }
                    } 
                } 
            }
        }
        var_31 *= ((/* implicit */short) ((unsigned long long int) var_4));
        arr_34 [i_1] = var_6;
    }
    var_32 |= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 11169228559661428065ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)196)))) : (((((/* implicit */int) (unsigned char)81)) >> (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_0))) ? (var_8) : (((((/* implicit */_Bool) -2738927300423802994LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-2250022975291641434LL))))) : (((/* implicit */long long int) var_5))));
    var_34 ^= ((/* implicit */_Bool) var_1);
}
