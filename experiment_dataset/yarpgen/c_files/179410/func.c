/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179410
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
    var_14 = ((/* implicit */signed char) ((short) ((signed char) (unsigned char)148)));
    var_15 ^= ((/* implicit */unsigned short) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25343))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) min((var_3), (((/* implicit */short) var_12))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)107)))))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_3])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_3])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_13)), ((unsigned short)10599))))))) ? (min((((/* implicit */int) (_Bool)1)), (-14))) : (((((/* implicit */int) (short)-11)) & (((/* implicit */int) arr_11 [i_0] [i_1] [i_3] [i_4])))))))));
                            arr_14 [i_0] [i_0] [i_4] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)65532)) ? (-1) : (((/* implicit */int) ((short) arr_11 [i_0] [i_2] [i_3] [i_4]))))) - (((/* implicit */int) var_13))));
                        }
                        for (short i_5 = 1; i_5 < 9; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 + 2]);
                            var_19 -= ((/* implicit */unsigned int) -2921845241475362236LL);
                            var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((arr_13 [i_0] [i_2 + 3] [i_2] [i_3] [i_5] [i_5] [i_5 - 1]) >= (arr_13 [i_0] [i_2 + 3] [i_2] [i_3] [i_5] [i_3] [i_5 + 1])))), ((~(arr_13 [i_0] [i_2 + 3] [i_2] [i_3] [i_5] [i_5] [i_5 - 1])))));
                            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (short)0)))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned char) (-(19U)));
                            arr_21 [i_2] = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) arr_6 [i_2 + 1])))));
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) (unsigned short)65535)) - (65511))))), (((/* implicit */int) ((short) arr_9 [i_3] [i_6]))))))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_19 [i_0] [i_1]))));
                        }
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3])) + (((/* implicit */int) var_9)))))))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)85)) & (((/* implicit */int) (short)0))));
                        var_27 = arr_4 [i_0] [i_1] [i_2];
                    }
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_12 [i_7] [i_2] [i_2] [i_1] [i_1] [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */int) (short)0)) : (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [i_2] [i_2] [i_7] [i_7])) ? (((/* implicit */int) arr_23 [i_2])) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_7] [i_7]))))))) : (max((((((/* implicit */_Bool) (short)0)) ? (arr_13 [i_0] [i_1] [i_1] [i_2] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)22)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_7])))))))))))));
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) max((((/* implicit */long long int) (short)0)), (arr_13 [i_2 + 3] [i_2] [i_2 - 1] [i_2] [i_2 + 3] [i_0] [i_0]))))));
                        arr_24 [i_7] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_13 [i_2 + 3] [i_1] [i_2] [i_7] [i_1] [i_1] [i_2])))) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_7]))));
                    }
                    for (short i_8 = 1; i_8 < 8; i_8 += 2) 
                    {
                        arr_28 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_4 [i_2 + 2] [i_2] [i_8 - 1])) + (((/* implicit */int) arr_8 [i_2 + 2] [i_8 + 2] [i_2] [i_8]))))));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((1028624050U), (((/* implicit */unsigned int) (signed char)85))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_8] [i_8] [i_2] [i_2] [i_2] [i_2 - 1] [i_1])) ? (arr_16 [i_8] [i_8] [i_8] [i_8] [i_2] [i_2 + 2] [i_2]) : (arr_16 [i_8] [i_8] [i_8] [i_2] [i_2] [i_2 + 3] [i_0])))) : ((~(arr_13 [i_8] [i_8] [i_8] [i_8] [i_8] [i_2 + 3] [i_0])))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 536870911)) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_8])) : (((/* implicit */int) var_12)))), (((/* implicit */int) max((arr_11 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) arr_4 [i_0] [i_0] [i_0])))))))) ? ((((!(((/* implicit */_Bool) arr_10 [i_8])))) ? (((/* implicit */int) min(((unsigned short)54936), (((/* implicit */unsigned short) (_Bool)1))))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_8])) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (short)0)))))) : (((arr_5 [i_0] [i_1] [i_2]) * (((/* implicit */int) ((((/* implicit */long long int) -602913943)) >= (2921845241475362239LL))))))));
                    }
                    var_32 = ((/* implicit */_Bool) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0]))) * (5477323923679308303ULL))), (((/* implicit */unsigned long long int) (unsigned char)148)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2])))));
                }
            } 
        } 
        var_33 -= ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))) | (((12969420150030243333ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))))))), (((/* implicit */unsigned long long int) var_10))));
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17344)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)6)))))))));
    }
}
