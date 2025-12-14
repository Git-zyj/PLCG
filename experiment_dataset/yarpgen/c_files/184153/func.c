/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184153
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min(((+(((/* implicit */int) var_3)))), (((/* implicit */int) var_4)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_16 += ((/* implicit */unsigned short) (!(((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)56480))))) <= (((((/* implicit */_Bool) (unsigned short)9055)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
        var_17 -= ((/* implicit */short) var_1);
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_1] [i_2] &= min((((/* implicit */unsigned short) max((arr_4 [i_2]), (arr_4 [i_2])))), (var_5));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_4 [i_0]))))));
                                arr_14 [i_0] [i_0] [i_2 - 1] [i_3] [i_4] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((arr_9 [i_0] [i_0] [15] [i_0]) + (2147483647))) >> (((arr_8 [i_3 + 1] [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13))))))) : (((/* implicit */unsigned int) ((((((arr_9 [i_0] [i_0] [15] [i_0]) - (2147483647))) + (2147483647))) >> (((arr_8 [i_3 + 1] [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13)))))));
                                var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)9040), (((/* implicit */unsigned short) (_Bool)1))))) ? (min((((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */long long int) arr_7 [i_4] [i_3] [(unsigned char)3] [i_1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (var_6)))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_2 + 2] [i_4] [7]), (arr_5 [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        arr_19 [i_0] [i_2] [i_2] [i_2 + 2] [i_2 + 2] &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_0 [i_1] [i_2 + 2])))) ? (max((((/* implicit */unsigned long long int) arr_0 [(_Bool)1] [i_1])), (arr_3 [i_0] [(unsigned char)15] [(unsigned short)5]))) : (((9620348971327539030ULL) + (arr_15 [i_0] [(short)3] [(short)3] [i_0])))))));
                        var_19 = ((/* implicit */long long int) min((var_19), (arr_0 [15] [8])));
                        /* LoopSeq 2 */
                        for (short i_6 = 3; i_6 < 14; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((arr_15 [i_0] [i_1] [i_5 - 1] [i_6 - 2]), (((/* implicit */unsigned long long int) arr_22 [i_2]))))) ? (((((/* implicit */_Bool) arr_12 [i_6 + 2] [i_6 + 2] [i_2] [i_2] [4U] [i_1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-1782367715496540688LL))) : (((/* implicit */long long int) arr_2 [i_2] [i_1 - 1])))), (((/* implicit */long long int) arr_10 [i_0] [i_1 + 2] [i_2] [i_0] [i_0 - 1])))))));
                            var_21 += ((/* implicit */short) (-((+(max((((/* implicit */unsigned int) var_2)), (arr_7 [i_0] [i_2 - 1] [i_2 - 1] [i_6])))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_7] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_5 + 3] [i_5 + 2] [i_1 + 1]);
                            arr_26 [i_0] = ((/* implicit */int) (+(1726079364U)));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_8 = 1; i_8 < 15; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            var_22 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_22 [i_2]))))));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_7))));
                            arr_35 [i_8] [i_0] = ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [12ULL] [i_2] [i_1]);
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((arr_18 [i_2] [i_8 - 1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0 + 1] [i_9] [i_9] [i_2 + 3] [(_Bool)1]))))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            arr_38 [i_0] [i_8 + 1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) arr_31 [i_0] [i_0]);
                            var_25 = ((/* implicit */unsigned char) var_0);
                        }
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_30 [i_1] [(unsigned short)1] [i_1 + 3] [i_2])) : (((/* implicit */int) var_0)))))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        arr_41 [i_2] [i_1 - 3] [i_1 - 3] [i_11] |= ((/* implicit */unsigned int) (((-(max((arr_12 [i_0 + 1] [(unsigned char)14] [i_2 + 1] [i_11] [13] [i_11] [(short)7]), (-3400098260834627782LL))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236)))));
                        var_27 += ((/* implicit */unsigned int) arr_11 [i_11] [i_2 + 3] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_0 - 1]);
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_4)))) + (((/* implicit */int) arr_1 [(signed char)12] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) != (var_6)))) : (var_2))))));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (4294967285U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_0 - 1])) ? (var_6) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))))))))))));
                    }
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) arr_36 [i_0 + 1] [i_1] [i_1 - 2] [i_0 + 1] [6]))));
                }
            } 
        } 
    }
}
