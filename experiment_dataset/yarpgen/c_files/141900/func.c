/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141900
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 10454025229372673628ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */int) (short)-19793)) : (((/* implicit */int) arr_2 [i_0 - 1]))))) ? (416095771902650795ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (((/* implicit */short) (signed char)33)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83)))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)33))))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_2 + 2] [i_3 + 1] [(signed char)5]))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 + 3])) ? (((/* implicit */int) (short)-19793)) : (((((/* implicit */int) var_3)) * (((/* implicit */int) var_9)))))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 2])) >= (((/* implicit */int) arr_10 [i_3] [i_4] [i_4] [i_4] [i_3 - 1]))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_2 + 2]))) : (var_2)));
                        }
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                        {
                            var_22 += 16530963763158388488ULL;
                            arr_17 [i_5] [i_1] [i_0] [i_5] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_6 [i_2 - 2] [i_5] [i_2 - 2])) + (((/* implicit */int) arr_6 [i_0] [11ULL] [i_0]))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_21 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-111)), ((~(var_15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15552))) : (min((arr_3 [i_0 + 1]), (var_8)))));
                            arr_22 [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) << (((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2])) + (18149))))));
                            arr_23 [i_0] [i_1] [i_0] [4ULL] [i_1] = ((/* implicit */unsigned short) var_15);
                            arr_24 [8LL] [i_1] [8LL] [i_2] = ((/* implicit */short) (((((~(((/* implicit */int) arr_12 [i_3 + 1] [i_1] [i_2 - 1] [i_0 - 2] [i_3])))) + (2147483647))) >> ((((-(((/* implicit */int) arr_12 [i_3 + 3] [i_3 + 3] [i_2 - 2] [i_0 - 3] [i_6])))) + (53922)))));
                            var_23 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >> (((arr_4 [i_0 - 2] [i_2 - 2] [i_0 - 2]) - (11569286848620137164ULL)))));
                        }
                        var_24 ^= (+((+(var_1))));
                    }
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */short) 2216545910494337573LL);
                        var_26 += ((/* implicit */unsigned short) ((unsigned long long int) (signed char)-24));
                    }
                    for (unsigned long long int i_8 = 3; i_8 < 22; i_8 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (~(((/* implicit */int) min((var_9), (((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [20ULL] [i_1] [i_2 - 1] [i_2 + 2] [i_0 + 1])))))))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_9 = 2; i_9 < 24; i_9 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */_Bool) (-(10454025229372673601ULL)));
                            arr_34 [i_0] [i_9] [i_2 + 1] [i_1] [i_9 - 1] [i_1] = ((/* implicit */long long int) ((short) 7992718844336878010ULL));
                        }
                        for (short i_10 = 2; i_10 < 24; i_10 += 1) /* same iter space */
                        {
                            var_29 |= arr_9 [i_10 - 2] [i_2 - 1] [i_0 - 1] [i_8 + 1];
                            var_30 = ((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)-56)), ((short)19776)));
                            arr_37 [i_1] [i_8] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_0 - 1] [i_8] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : ((-(var_14)))));
                            arr_38 [i_1] [i_1] [(unsigned short)16] [i_8] [i_1] [7LL] [i_10] = (+((-(arr_26 [i_8 - 2] [i_2 + 1]))));
                        }
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                        {
                            arr_43 [i_0] [i_1] [(signed char)0] [i_0] = ((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned short)65535))))));
                            arr_44 [i_0] [(signed char)0] [i_0 - 3] [i_2] [i_0] |= ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32766))))) % ((-(((((/* implicit */_Bool) (signed char)33)) ? (arr_42 [i_2]) : (((/* implicit */unsigned long long int) arr_29 [i_0 - 3])))))));
                        }
                    }
                    arr_45 [8LL] [i_1] [i_1] = ((/* implicit */long long int) (signed char)117);
                    arr_46 [i_2 - 2] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_10);
                }
            } 
        } 
    } 
    var_31 = ((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) ((long long int) var_0))) : (min((var_1), (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
}
