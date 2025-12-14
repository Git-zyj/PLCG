/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110184
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1 + 1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_1)) != ((~(18446744073709551615ULL))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_5))));
                    arr_9 [i_0] [i_2] [i_2] [i_2] |= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10610800609453876498ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_11))))) : (max((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_2])), (arr_5 [i_2])))))) & (((((/* implicit */unsigned long long int) var_8)) & (max((7727922921030651123ULL), (((/* implicit */unsigned long long int) arr_1 [i_2] [i_1])))))));
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) < ((-(max((((/* implicit */unsigned int) -1250008076)), (var_1))))))))));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (+(min((-6010785767299047900LL), (0LL)))));
                }
                for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_3]))) != (((arr_0 [i_0]) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (21ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(signed char)3] [i_0] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1 + 3])))))));
                }
                for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_16 += ((/* implicit */int) max(((~(min((var_10), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) var_5))))), (max((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_6])), (-6010785767299047880LL))))))));
                                arr_22 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 933680555)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (var_5))))))) ? (((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_7 [i_5] [i_4 - 1])) ? (16814810878506559133ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51837))))) : (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned long long int) 6010785767299047879LL)))))) : (((/* implicit */unsigned long long int) 2147483647)));
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((7835943464255675123ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (arr_12 [i_4] [i_1] [i_1] [i_4]) : (((/* implicit */unsigned long long int) -510977926)))) != (((/* implicit */unsigned long long int) ((arr_18 [i_1 + 3] [i_4] [i_5] [i_5]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))))))) : (((/* implicit */int) var_5)))))));
                                var_18 = ((/* implicit */unsigned char) ((max((((/* implicit */int) (_Bool)0)), ((~(var_4))))) & (min((((/* implicit */int) arr_4 [i_1 + 2] [i_6])), (((((/* implicit */_Bool) (unsigned short)53245)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_26 [i_0] [i_0] [i_4 - 2] [i_0] [i_1 + 1] = ((/* implicit */unsigned short) arr_23 [i_1] [(_Bool)1] [(_Bool)1]);
                        arr_27 [i_7] [i_7] [i_0] [(unsigned short)12] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((short) arr_14 [i_1 + 4] [i_4]));
                        arr_28 [i_0] [i_0] [i_4] &= ((((unsigned long long int) var_2)) == (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (-6010785767299047900LL)))));
                    }
                    arr_29 [i_0] [i_0] [i_4 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32250))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (9760288564159893221ULL)));
                }
                for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    var_19 = ((/* implicit */long long int) var_3);
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) << (((var_10) - (4706245343237959027ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (2147483647)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (4294967295U) : (((/* implicit */unsigned int) arr_7 [(unsigned short)5] [i_8]))))) ? (arr_14 [i_0] [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)221)) ? (var_3) : (((/* implicit */int) (unsigned short)65535)))))))));
                }
                arr_32 [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) max((((arr_20 [i_1] [i_0] [i_1 + 2]) ? (((/* implicit */int) (unsigned short)13249)) : (((/* implicit */int) arr_19 [i_1] [i_0] [i_1 - 1] [i_1 + 4])))), (((/* implicit */int) arr_19 [i_1] [i_0] [i_1 - 1] [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 2; i_9 < 16; i_9 += 3) 
    {
        for (short i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (max((1764437366038693639ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-2147483647)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_35 [i_9] [i_10] [i_9 + 2])))) : (((((/* implicit */_Bool) arr_34 [i_9] [i_9])) ? (((/* implicit */int) arr_33 [i_10])) : (((/* implicit */int) var_7)))))))))));
                var_22 = ((/* implicit */long long int) var_1);
                arr_37 [i_9] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_35 [i_9] [i_9 + 1] [i_9 - 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))) ^ (((/* implicit */int) arr_34 [i_9] [i_9 - 2]))));
            }
        } 
    } 
}
