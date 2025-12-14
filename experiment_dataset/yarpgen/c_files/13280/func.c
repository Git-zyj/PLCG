/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13280
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
    var_12 -= ((/* implicit */signed char) ((min((min((var_1), (1371255269160175994ULL))), (((/* implicit */unsigned long long int) ((signed char) var_2))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_13 += ((/* implicit */short) min((((/* implicit */int) ((arr_4 [i_1 + 1]) > (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_1])), (arr_6 [i_2] [i_1 - 1]))))))), (min((((((/* implicit */_Bool) var_5)) ? (arr_2 [i_1 - 1]) : (arr_2 [i_2]))), (((/* implicit */int) (short)19192))))));
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) 3403900667U))));
                    var_15 = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) (_Bool)1)))));
                }
                for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    var_16 = ((/* implicit */unsigned short) ((short) arr_3 [i_0 - 3]));
                    var_17 &= 1928835634;
                    arr_12 [i_0] [i_1 - 1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)26666)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28265))) : (1371255269160175994ULL)));
                    var_18 = ((/* implicit */long long int) max((((/* implicit */int) min((arr_7 [i_1 + 1] [i_1] [i_0 - 2]), (arr_7 [i_1 + 1] [i_1 + 1] [i_0 - 2])))), (((((/* implicit */_Bool) 1804349986028038120LL)) ? (((/* implicit */int) (unsigned short)54705)) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1] [i_0 - 1]))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    var_19 = ((/* implicit */long long int) ((short) (-(arr_1 [i_0 - 3]))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((unsigned long long int) arr_13 [i_0 + 2] [i_0 - 3] [i_1 - 1]))));
                    var_21 *= ((/* implicit */unsigned long long int) max((min((-1804349986028038113LL), (((/* implicit */long long int) max(((unsigned char)192), (((/* implicit */unsigned char) (signed char)-5))))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)65517)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (min((((/* implicit */unsigned int) (unsigned short)36091)), (var_10))))))));
                    var_22 = ((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) (unsigned char)63)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        var_23 = (+(arr_5 [i_1 - 1] [3ULL]));
                        arr_18 [i_0] [4ULL] [(short)5] [i_5] [i_4] [i_0 + 2] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)30911))));
                        arr_19 [i_0] [i_0] [i_4] [i_0] [i_1] [i_5] = ((/* implicit */int) (signed char)-36);
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        var_24 = (+(((/* implicit */int) arr_7 [i_0] [i_0 - 3] [i_6])));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
                        arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6676615348730515058ULL)) && (((/* implicit */_Bool) arr_0 [i_0 - 3]))));
                    }
                    for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((max((857346672712556886ULL), (((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_1] [i_4]))))))));
                        arr_26 [i_1] [i_1] [10LL] [i_7] [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (-(arr_6 [i_0 + 2] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221))) : ((+(var_10)))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0 + 1] [i_1] [i_4] [i_0 + 1] [i_1])) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1 + 1]))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)247))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            var_28 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)29458))));
                            var_29 = (+(((/* implicit */int) (_Bool)1)));
                            var_30 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1 + 1] [i_4])) ? (arr_14 [i_0] [i_1 + 1] [i_4]) : (arr_14 [i_0 + 2] [i_1 + 1] [i_0])));
                        }
                        for (unsigned short i_9 = 4; i_9 < 14; i_9 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) min((((/* implicit */short) (signed char)-60)), (var_6)));
                            arr_33 [i_0 + 1] [i_1 - 1] [i_4] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_0] [i_1 - 1] [i_0] [i_7]))))) ? (arr_2 [i_0 + 2]) : (((/* implicit */int) max((var_11), (((/* implicit */short) arr_21 [i_0] [i_0 - 1] [i_0] [i_0 - 1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-84)))))) : ((~(var_4)))));
                            arr_34 [i_0] [i_1] [i_4] [i_7] [i_9 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (2773163556U) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_24 [i_0] [i_9 - 4] [i_4] [i_0 + 1])) - (13263))))))));
                            arr_35 [i_9] [i_7] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_2)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (min((10865953280333221074ULL), (((/* implicit */unsigned long long int) -245717009369790349LL))))))));
                            var_32 = ((/* implicit */unsigned char) ((arr_17 [i_9 - 4] [i_7]) ? (((/* implicit */int) (!(((((/* implicit */int) arr_16 [i_0] [i_9] [i_4] [i_1] [i_9] [i_9 + 1])) < (((/* implicit */int) arr_20 [i_0] [i_0] [(unsigned short)12] [i_0]))))))) : (((/* implicit */int) min((var_6), (arr_13 [i_0 - 3] [i_1] [0ULL]))))));
                        }
                        var_33 = ((/* implicit */long long int) (_Bool)1);
                    }
                }
                arr_36 [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_2 [i_0 - 3]) == (arr_2 [i_0 + 1])))) * (((((/* implicit */int) (short)-462)) / (arr_2 [i_0 - 2])))));
            }
        } 
    } 
}
