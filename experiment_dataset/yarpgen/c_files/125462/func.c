/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125462
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
    var_10 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-63))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */int) var_4);
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_5 [i_0 - 1] [i_0 + 1]), (((/* implicit */short) var_7))))) * (((/* implicit */int) var_2))));
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-26460))))) ? (min((((((/* implicit */_Bool) arr_1 [i_2] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24216))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)24216))))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)152)))))))));
                            var_14 -= ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_11 [i_3] [i_3 + 1] [i_3] [i_3] [i_3 - 1] [i_3]), (arr_11 [i_3] [i_3 + 1] [7LL] [i_3 + 2] [i_3 + 2] [i_3])))), ((~(((/* implicit */int) arr_11 [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 2] [i_3]))))));
                            var_15 |= ((/* implicit */unsigned char) (~(max((3384549235U), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
                        }
                        for (int i_5 = 3; i_5 < 21; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) -1LL)) ? ((~((~(var_8))))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)38))))), (((((/* implicit */_Bool) -1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [12LL] [i_1] [i_1] [i_1] [i_1])))))))));
                            var_17 = ((/* implicit */long long int) var_5);
                        }
                        for (long long int i_6 = 2; i_6 < 20; i_6 += 2) /* same iter space */
                        {
                            var_18 *= ((/* implicit */signed char) var_1);
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-128)) != (((/* implicit */int) (unsigned char)255)))))) != (var_8)));
                        }
                        for (long long int i_7 = 2; i_7 < 20; i_7 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned char) arr_12 [i_1] [i_7]);
                            var_21 = ((/* implicit */unsigned char) (+(-3705966156859563054LL)));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 1] [i_2] [i_7 + 1]))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39)))));
                        }
                        var_23 = ((/* implicit */_Bool) (+((-(((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_2] [i_1] [i_1] [i_3])) ? (var_8) : (var_8)))))));
                    }
                    for (short i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_22 [i_0] [i_1] [(signed char)4] [i_1]), (((/* implicit */short) arr_21 [i_1])))))))), ((unsigned char)109)));
                        var_25 = arr_10 [i_0 - 2] [i_1] [i_2] [i_2];
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) ((-2092475112) - (((var_6) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [(signed char)3] [i_1] [i_9] [i_10])) ? (((/* implicit */int) arr_26 [i_2] [i_2])) : (67076096))) : (((/* implicit */int) (unsigned short)65526))))));
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)109)) ^ ((~(((/* implicit */int) (short)-10042))))));
                                var_28 = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */short) arr_3 [i_10] [i_10] [i_2])), ((short)7168))))));
                                var_29 = ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
