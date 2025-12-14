/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165979
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)13120)) && (((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (!((_Bool)1)))), ((signed char)127))))) : (((((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) var_1)) ? (1242493799523667199LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [7ULL] [(unsigned char)5] [(short)13] [i_0] [7ULL] [i_0])) ? (((/* implicit */int) var_4)) : (max((((/* implicit */int) var_8)), (2147483647)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)199)), (var_6))))) : (min((var_0), (((/* implicit */unsigned long long int) -1525044536512778769LL)))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 2279180619381213861ULL)) ? (((/* implicit */int) (unsigned char)246)) : (1122133129))), (arr_0 [i_0 - 2]))))));
                                arr_14 [(unsigned short)8] [(signed char)6] [(unsigned short)3] [(short)0] [7] = ((/* implicit */_Bool) arr_4 [(short)13]);
                                arr_15 [(signed char)1] [i_1] = ((/* implicit */unsigned short) arr_9 [i_3] [9LL] [17LL] [i_3]);
                                arr_16 [12] = ((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((((/* implicit */_Bool) (~(-1525044536512778769LL)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_0 + 1]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                    {
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (-(((/* implicit */int) (unsigned char)199)))))));
                        arr_20 [i_0] [i_0] [7ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1] [i_1] [(unsigned short)1]))))) : (((((/* implicit */_Bool) max((1525044536512778768LL), (((/* implicit */long long int) (unsigned short)65524))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (max((16167563454328337754ULL), (((/* implicit */unsigned long long int) (unsigned short)54806))))))));
                        var_16 = ((/* implicit */long long int) arr_12 [14LL]);
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) 2759541193671371949LL);
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned short) ((short) arr_10 [(unsigned char)6] [(unsigned char)11] [(unsigned char)11] [i_6]))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_19 = ((unsigned short) ((((/* implicit */_Bool) arr_9 [(short)9] [i_0 - 1] [i_0 - 1] [i_0 - 1])) || (var_8)));
                        var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(short)5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))) : (arr_17 [i_0] [(short)9] [i_0 - 1] [i_0 - 1] [(short)9]))), ((~(((((/* implicit */_Bool) arr_19 [(_Bool)1] [i_1])) ? (-1525044536512778765LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))));
                        var_21 += ((/* implicit */signed char) max((max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_24 [i_0] [13ULL] [i_2] [(_Bool)1])))), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65535)))))), (((/* implicit */int) var_11))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_5))));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 17; i_8 += 2) 
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16932))) >= (var_3)))) : (((/* implicit */int) ((unsigned char) var_7)))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
                        arr_30 [i_0] [i_8] = ((/* implicit */long long int) ((var_2) ? (arr_21 [i_0] [i_8] [(_Bool)1] [i_8] [(signed char)8] [i_0 - 2]) : (arr_21 [i_0] [i_8] [i_1] [i_1] [i_1] [i_0 - 2])));
                    }
                }
            } 
        } 
    } 
}
