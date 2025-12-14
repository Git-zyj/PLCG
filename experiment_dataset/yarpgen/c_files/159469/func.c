/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159469
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (short)32761))) == (((/* implicit */int) var_5))));
    var_12 = ((/* implicit */unsigned int) (+((-(((-536870912) | (((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned short) arr_8 [i_3]);
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [(unsigned short)7])) >> (((((/* implicit */int) ((short) min((var_5), (((/* implicit */unsigned short) (signed char)-26)))))) + (20297))))))));
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((arr_10 [i_2]) - (7120911119697165911LL))))))));
                    }
                    var_16 -= ((/* implicit */unsigned long long int) (-2147483647 - 1));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (long long int i_5 = 2; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((unsigned char) -2147483639));
                                var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (3412887035U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5 + 3])))))) ? (((/* implicit */unsigned long long int) ((var_7) + (((/* implicit */int) arr_0 [(signed char)0]))))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (7402878939292754037ULL)))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) ((unsigned short) arr_11 [i_0])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_6 = 1; i_6 < 19; i_6 += 4) 
        {
            arr_22 [i_6] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_18 [i_0] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) >= (((/* implicit */int) arr_0 [i_0]))))))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                arr_25 [i_0] [i_0] [i_6] [i_7] = ((/* implicit */unsigned char) ((long long int) arr_17 [i_0 - 1] [i_6] [i_6 - 1] [i_6 - 1] [5ULL] [(_Bool)1]));
                arr_26 [i_7] [i_6] [i_6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 2798820874343228303ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6 - 1] [i_6 - 1] [i_7]))) : (65535U)));
                arr_27 [i_7] [(short)13] [i_7] [i_6] = ((/* implicit */short) 3412887039U);
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((arr_9 [i_0 + 2]) <= (((/* implicit */unsigned long long int) var_4)))))));
            }
        }
        for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            var_21 *= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_8]))))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_8] [i_8])) ? (var_4) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (signed char)0)))));
            arr_31 [i_0] [i_0] [i_8] = ((/* implicit */signed char) var_10);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    {
                        var_22 = ((/* implicit */long long int) var_4);
                        arr_36 [i_0] = var_6;
                        arr_37 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_10])) : (((/* implicit */int) arr_11 [i_10]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1637948116)) ? (2147483627) : (((/* implicit */int) (_Bool)1))))) : ((~(65551U)))))) ? ((-(1649756862))) : (((/* implicit */int) ((short) 5304784699331409556ULL)))));
                        arr_38 [i_10] [i_10] = ((/* implicit */unsigned char) (signed char)100);
                        var_23 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 5304784699331409558ULL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65516)))))))));
                    }
                } 
            } 
        }
        var_24 &= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */unsigned long long int) 2140338641U)) : (14048305056341835669ULL)));
        var_25 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))) / ((-(((/* implicit */int) arr_11 [i_0 - 1]))))));
    }
}
