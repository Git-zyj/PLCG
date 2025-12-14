/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145600
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+((-(2313923059U))))))));
    }
    for (short i_1 = 4; i_1 < 21; i_1 += 4) 
    {
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_3 [i_1] [i_1]))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1]))))) && (((/* implicit */_Bool) (signed char)-99))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        var_20 = (~(((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_6))));
        /* LoopSeq 3 */
        for (signed char i_3 = 4; i_3 < 14; i_3 += 3) 
        {
            arr_12 [i_2] &= ((/* implicit */long long int) ((arr_4 [i_2] [i_3 - 1]) ? (18024151074209329276ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_3 - 4])))));
            var_21 = ((arr_4 [i_3 - 2] [i_3]) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2] [i_3]))))));
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2]))))) : (((arr_3 [i_2] [i_2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))));
        }
        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_15 [i_2] [i_2] [(short)12])) ^ (1981044255U))))));
            arr_17 [i_4] = ((/* implicit */long long int) ((var_3) != (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)241)) & (((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned int i_5 = 2; i_5 < 15; i_5 += 2) 
        {
            var_24 = ((((/* implicit */_Bool) arr_3 [i_5 + 2] [i_5 - 2])) ? (arr_3 [i_5 - 1] [i_5 + 2]) : (arr_3 [i_5 + 1] [i_5 + 2]));
            var_25 = ((/* implicit */int) ((8110083798274983868LL) & ((-(arr_13 [i_2] [i_2])))));
            arr_20 [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -97888479)))))) <= (((var_3) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2])))))));
        }
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_3))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 16; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                {
                    var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_8] [i_8]), (((/* implicit */long long int) arr_9 [i_7 + 1]))))) ? ((-(((/* implicit */int) arr_4 [i_6 - 1] [i_7 - 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) var_8))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (-5610017591862487847LL)))))))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */short) ((arr_24 [i_7] [i_7]) ? (var_3) : (((var_1) | (((/* implicit */long long int) -62323415))))));
                                var_29 = ((/* implicit */unsigned long long int) arr_10 [i_6]);
                                arr_35 [i_8] [i_7] [i_8] [i_7] &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_32 [i_6 - 1] [(_Bool)1] [i_8] [i_8] [i_9] [i_10]))));
                                arr_36 [i_8] [i_7] [i_8] [i_7] [i_6 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                    arr_37 [i_6] [i_7] [i_6] [7ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 950611739)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [13LL] [13LL] [(unsigned short)5] [i_7 + 1]))))) | (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)30891)) ^ (arr_15 [i_7] [i_7] [3LL]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 1365653075)))) : (var_16)));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 4; i_11 < 15; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 2; i_12 < 14; i_12 += 1) 
                        {
                            {
                                arr_43 [i_8] [i_11 - 4] [i_8] [i_8] [i_8] |= ((/* implicit */short) ((((((/* implicit */_Bool) ((long long int) var_5))) ? (((arr_4 [i_7] [i_12]) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_7 - 1] [i_12]))))) - (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                                var_30 = ((/* implicit */_Bool) 1097907124614642396ULL);
                                var_31 = ((/* implicit */unsigned long long int) min((arr_31 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_34 [i_7] [i_7 + 1] [i_8] [i_7 + 1] [i_12])) : (((/* implicit */int) var_8))))))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (-(min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (var_11))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_6 - 1]))))))))))));
                }
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) ((2313923074U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)6229)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_2))) : (max((13511877024571506643ULL), (((/* implicit */unsigned long long int) var_1)))))) : (var_6)))));
}
