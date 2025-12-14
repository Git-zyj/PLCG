/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154311
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
    var_20 = max((((/* implicit */unsigned long long int) min((var_8), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)36585)) : (((/* implicit */int) (unsigned char)101))))))), (min((max((var_2), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((unsigned int) var_11))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((var_6) != (var_9))))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) (-(0ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_1))))) : (((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))))));
    var_22 = ((/* implicit */int) ((signed char) ((short) (unsigned short)19523)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_23 *= arr_3 [i_0];
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [11U] [11U])) ^ (arr_2 [i_0] [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)46012)), ((~(((/* implicit */int) arr_0 [i_1]))))))) : (min((((/* implicit */unsigned int) min((((/* implicit */short) arr_5 [7U] [i_1])), (arr_1 [i_1] [i_1])))), (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_9)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 4099611184U)), (14545252679563112391ULL)));
                    /* LoopSeq 4 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        arr_15 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_3] [i_3] [6ULL] [(signed char)12] [i_3 - 1]))))) ? (((/* implicit */unsigned long long int) (-(var_13)))) : (((min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])), (arr_13 [i_1] [i_1] [i_1] [i_1]))) % (((/* implicit */unsigned long long int) arr_12 [i_4] [i_1]))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            arr_18 [(signed char)17] [i_5] [i_5] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */int) arr_5 [i_1] [i_1]);
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_5] [6])) && (((/* implicit */_Bool) arr_2 [i_1] [i_1])))) && ((!(((/* implicit */_Bool) 13731227899455803739ULL))))))), (arr_7 [i_1] [i_1]))))));
                            var_27 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 + 1] [i_3 + 2])) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_3 + 1] [i_3 + 2])) : (((/* implicit */int) arr_11 [i_3 - 1] [i_3 + 1] [i_3 + 2])))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            var_28 &= ((/* implicit */int) arr_5 [i_3] [i_6]);
                            arr_21 [i_1] [i_2] [i_1] [i_2] [i_6] = var_2;
                            arr_22 [i_3] [i_6] [i_3] [i_3] [i_2] [i_2] [i_1] = ((arr_19 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 2]) % (arr_19 [i_3 + 2] [i_3 + 1] [i_3] [i_3 - 1]));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 17; i_7 += 4) 
                        {
                            arr_25 [i_4] = ((((/* implicit */_Bool) (-(arr_7 [i_1] [i_4])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_4] [i_3])) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_4])) && (((/* implicit */_Bool) arr_24 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 + 2]))))));
                            arr_26 [i_2] [i_4] = ((/* implicit */unsigned long long int) arr_24 [i_1] [i_2] [i_3] [0ULL] [i_7]);
                            var_29 = ((/* implicit */unsigned long long int) var_8);
                        }
                    }
                    for (short i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        var_30 -= ((/* implicit */long long int) ((int) (-(((((/* implicit */unsigned long long int) var_4)) ^ (6149193982092083820ULL))))));
                        arr_29 [i_1] [i_8] = ((/* implicit */int) ((unsigned long long int) max((16071261331440996058ULL), (((/* implicit */unsigned long long int) (unsigned short)46012)))));
                        arr_30 [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_3] [i_2])) ? ((-(14545252679563112400ULL))) : (((/* implicit */unsigned long long int) arr_17 [i_1] [i_3 + 2] [i_1] [i_8] [i_8])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_3 + 2]))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 4) 
                    {
                        arr_35 [i_1] [5ULL] [5ULL] [i_9] = ((/* implicit */long long int) (-(((/* implicit */int) arr_31 [i_9] [i_9 + 2] [i_3 - 1] [12ULL]))));
                        var_31 -= ((((/* implicit */unsigned long long int) ((unsigned int) var_2))) % ((~(arr_19 [i_9] [i_3] [i_2] [(unsigned char)4]))));
                        arr_36 [i_3] [i_9] [i_3] [i_2] [3ULL] = ((/* implicit */unsigned long long int) arr_20 [i_1] [i_2] [i_1]);
                        var_32 = ((/* implicit */unsigned int) var_12);
                        arr_37 [i_9] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_31 [i_1] [i_2] [i_1] [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        arr_41 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_28 [i_3 - 1] [i_3 + 2] [i_3] [i_3 + 1])) : (var_16)));
                        var_33 = ((/* implicit */short) ((arr_7 [i_3 + 1] [i_10]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_10] [i_3 + 2])))));
                        arr_42 [15] [i_3] [15] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_39 [i_3 + 1])) ^ (((/* implicit */int) arr_39 [i_3 + 1]))));
                    }
                }
            } 
        } 
        var_34 = ((/* implicit */_Bool) arr_23 [i_1] [i_1]);
        var_35 = ((/* implicit */signed char) min((arr_7 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_1]))));
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_45 [i_11] [i_11] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_13 [i_11] [i_11] [i_11] [i_11])))) ? ((-(((/* implicit */int) var_18)))) : ((-(arr_34 [i_11] [i_11] [i_11] [i_11])))));
        var_36 = ((/* implicit */unsigned int) ((long long int) arr_40 [i_11] [i_11] [i_11] [i_11]));
        var_37 = ((/* implicit */unsigned long long int) ((long long int) arr_34 [i_11] [i_11] [i_11] [i_11]));
        arr_46 [i_11] [i_11] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_27 [i_11])) < (arr_8 [i_11] [i_11]))))) ^ (arr_12 [i_11] [i_11]));
    }
}
