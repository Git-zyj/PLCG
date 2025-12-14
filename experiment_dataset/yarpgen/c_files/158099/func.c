/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158099
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
    var_17 ^= ((/* implicit */signed char) var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_10 [(unsigned short)2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_10);
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) arr_2 [i_3] [i_4]);
                            var_19 = ((/* implicit */short) var_3);
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 14; i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_3] [(_Bool)1] [5] = ((/* implicit */int) ((unsigned long long int) arr_15 [i_5 - 3] [i_5 - 3] [i_5] [i_5] [i_5] [i_5 - 1]));
                            arr_17 [i_0] [i_0] [i_2] [i_3] [2] = ((/* implicit */signed char) var_8);
                            arr_18 [(short)13] [i_0] [i_1] [i_1] [(unsigned char)7] [i_3] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) var_14))));
                            var_20 = ((((/* implicit */_Bool) (signed char)127)) && ((_Bool)1));
                            arr_19 [2U] [2U] [5ULL] [5ULL] = ((/* implicit */unsigned short) arr_6 [i_5 - 2]);
                        }
                        for (int i_6 = 3; i_6 < 14; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_4);
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_8)), (var_9)))))) ? (min((arr_15 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 - 3] [i_6]), (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_22 = ((/* implicit */signed char) ((unsigned int) 1436764797U));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 15; i_7 += 2) 
                        {
                            arr_26 [i_7 - 1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */short) ((int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4294967279U))));
                            arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(var_7)));
                            var_23 = ((/* implicit */unsigned short) min((var_23), ((unsigned short)55467)));
                        }
                        var_24 = max((var_16), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [8LL] [i_2] [i_3])) && ((!((_Bool)0))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 3; i_9 < 15; i_9 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) (_Bool)1);
                                arr_35 [i_0] = ((/* implicit */unsigned int) (signed char)-90);
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (~(((/* implicit */int) ((var_0) <= (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (signed char)-124)))))))))))));
                                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) var_15))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
                    {
                        arr_38 [i_0] [(unsigned short)5] [i_2] [i_10] [(signed char)14] = ((/* implicit */short) ((arr_8 [12] [i_1] [i_10] [i_10] [i_10]) | (((((/* implicit */_Bool) (unsigned char)55)) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122)))))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (arr_33 [i_1])));
                        arr_39 [i_1] [i_1] [i_1] [i_10] [i_1] [i_1] = ((max((((/* implicit */int) arr_2 [i_0] [i_0])), ((-(((/* implicit */int) arr_36 [i_1] [i_1] [i_2] [13LL] [i_0] [i_0])))))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))));
                        arr_40 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_16)), (((unsigned int) (-(((/* implicit */int) var_6)))))));
                        var_29 = ((/* implicit */_Bool) max((202189771U), (((/* implicit */unsigned int) (unsigned short)24727))));
                    }
                    for (long long int i_11 = 0; i_11 < 16; i_11 += 3) /* same iter space */
                    {
                        arr_44 [i_0] = ((/* implicit */short) max((-1551740844), (((/* implicit */int) (_Bool)1))));
                        var_30 = ((/* implicit */short) ((unsigned int) (-(var_10))));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 2) 
                    {
                        arr_47 [i_0] [i_0] [i_0] [0U] [(_Bool)1] = arr_5 [i_0] [i_1] [i_2] [i_1];
                        var_31 = ((/* implicit */_Bool) min((4294967279U), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_0] [i_1] [i_2]))) : (var_13)))));
                        var_32 *= ((/* implicit */unsigned int) -1296386398670839969LL);
                    }
                }
            } 
        } 
    } 
}
