/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107993
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [17LL])) ? (-1145484242) : (((/* implicit */int) (unsigned short)46896))))) ? (((int) arr_1 [i_0] [i_0])) : ((-(((/* implicit */int) arr_2 [i_0] [i_0])))))))));
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (((((+(((/* implicit */int) arr_2 [i_0] [i_0])))) + (2147483647))) << (((var_2) - (470832514819463687ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7879))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            arr_9 [(_Bool)1] &= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))))) * (((/* implicit */int) arr_1 [i_1 + 1] [i_2])));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) 945435545U);
                            arr_17 [i_4] [i_4] [i_3] [i_4] [i_5 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_2] [6U] [i_4])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [7LL]))))) - (((/* implicit */unsigned long long int) ((int) var_8)))));
                        }
                    } 
                } 
            } 
            arr_18 [i_1 + 1] |= ((/* implicit */long long int) arr_8 [i_1 + 1]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        {
                            arr_28 [i_1 + 1] [i_1 + 1] [i_8] [i_8 + 1] [i_9] = ((2583566126941386158LL) + (1717700339666556598LL));
                            var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_6])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1] [i_1 + 1])) / (((/* implicit */int) (unsigned short)2430)))))));
                        }
                    } 
                } 
            } 
            arr_29 [i_1] = ((/* implicit */unsigned int) ((signed char) 3894466003U));
            var_15 = ((/* implicit */signed char) ((unsigned char) arr_24 [i_1] [i_6] [i_1 - 1]));
        }
        /* LoopSeq 1 */
        for (unsigned int i_10 = 1; i_10 < 11; i_10 += 3) 
        {
            arr_33 [i_1 + 1] [i_1] [i_1] &= ((/* implicit */unsigned char) min((min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63106)) && (((/* implicit */_Bool) var_1))))), (((int) var_4)))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_10] [i_10] [i_10])))))))));
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(arr_14 [i_1] [i_1] [2ULL] [i_1]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63106))))))))) ? (((long long int) (~(((/* implicit */int) arr_5 [i_10 - 1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)91)), ((unsigned short)27121)))) : ((+(((/* implicit */int) (unsigned short)63106)))))))));
        }
    }
    for (int i_11 = 4; i_11 < 24; i_11 += 2) 
    {
        var_17 = (-(min((arr_35 [i_11]), (((/* implicit */int) var_0)))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_8))));
        /* LoopSeq 1 */
        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            arr_40 [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) arr_38 [i_11] [i_11 - 1] [i_11])))))) + (((((/* implicit */int) var_3)) + (arr_35 [i_11 + 1])))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_11 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_37 [i_11 - 4] [i_11 - 2]))))) ? ((~(((/* implicit */int) arr_38 [i_11 - 4] [i_11 - 4] [i_11 + 1])))) : (((((/* implicit */_Bool) (unsigned short)63131)) ? (((/* implicit */int) (unsigned short)54867)) : (((/* implicit */int) (signed char)-71))))));
            /* LoopNest 3 */
            for (signed char i_13 = 2; i_13 < 24; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_36 [i_12])) : (((/* implicit */int) arr_36 [i_13 - 1]))))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_9))))) : (((/* implicit */int) min((var_1), (((/* implicit */short) (signed char)-119))))))))))));
                        }
                    } 
                } 
            } 
        }
        var_22 *= ((/* implicit */short) ((min((arr_45 [i_11] [i_11] [i_11 - 2] [i_11 - 1] [i_11] [i_11 + 1] [i_11]), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (arr_41 [i_11] [i_11 - 1] [i_11 - 3] [i_11])))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_11 + 1]))) : (var_10))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [i_11] [i_11 - 2])) << (((var_2) - (470832514819463675ULL)))))))))));
    }
    var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) > ((-(min((((/* implicit */unsigned long long int) var_6)), (var_2)))))));
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) max((var_6), (var_0))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))));
}
