/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159187
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
    var_16 = ((/* implicit */short) min((((int) (~(((/* implicit */int) var_7))))), (var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) arr_3 [(unsigned short)12] [i_0])))) : (((/* implicit */int) min((arr_3 [i_0] [i_1]), (var_10))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((signed char) ((((/* implicit */_Bool) min((((/* implicit */short) arr_2 [i_0] [i_0])), (var_7)))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        var_19 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_5))))))), ((+(((unsigned long long int) 3ULL))))));
        /* LoopNest 3 */
        for (signed char i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 2) 
            {
                for (signed char i_5 = 2; i_5 < 16; i_5 += 2) 
                {
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5 - 1] [i_4 + 2] [i_3 - 1])) && (((/* implicit */_Bool) arr_11 [i_5 + 1] [i_4 - 1] [i_3 - 2])))))) : (((((((/* implicit */_Bool) arr_3 [(short)7] [i_3 - 1])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) * (((unsigned long long int) arr_1 [i_4]))))));
                        var_21 = ((/* implicit */unsigned long long int) ((((max((arr_4 [4ULL] [i_2]), (((/* implicit */unsigned long long int) var_13)))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_5))))) ? (((((/* implicit */_Bool) ((signed char) arr_4 [i_3] [i_4]))) ? (((/* implicit */int) arr_10 [i_5 - 2] [i_3 - 2] [i_4 + 1])) : ((~(((/* implicit */int) arr_13 [i_5])))))) : (((((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) var_12)) : (var_2))) & (((/* implicit */int) min((((/* implicit */short) var_14)), (var_4))))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_6 = 2; i_6 < 17; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            for (signed char i_8 = 2; i_8 < 18; i_8 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((min((arr_22 [(signed char)14]), (arr_24 [i_8] [i_8 - 1] [i_8 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_18 [i_6]))) != ((-(((/* implicit */int) var_9)))))))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_12))));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_21 [i_6] [i_6] [i_6 + 1])))))))))));
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_10])) ? (arr_18 [i_9]) : (arr_18 [i_7]))) ^ (((11706281785617071111ULL) ^ (5ULL))))))))));
                                var_26 = ((/* implicit */short) (+(min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_28 [i_7] [i_8] [i_8] [i_9] [i_10])) : (((/* implicit */int) var_14)))), (((/* implicit */int) arr_20 [i_8 - 1] [i_6 + 3]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_11 = 1; i_11 < 16; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_3))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_11 - 1] [i_6 + 2])))))));
                    var_28 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_30 [i_6] [i_11 + 4])) ? (((/* implicit */int) arr_27 [i_12] [i_12] [i_12] [i_12] [i_12] [(signed char)4] [i_12])) : (((/* implicit */int) arr_20 [i_11] [i_11]))))))));
                    var_29 = ((/* implicit */signed char) ((unsigned short) min((min((((/* implicit */unsigned long long int) arr_33 [i_11 - 1] [i_11 - 1] [i_12] [i_11 - 1])), (var_3))), (((/* implicit */unsigned long long int) arr_26 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_12] [i_12])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 0; i_14 < 20; i_14 += 3) 
                        {
                            var_30 += ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_13])) ? (arr_37 [(signed char)0] [i_11 + 3] [i_12] [i_13] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_6] [19] [i_12] [i_14])))))) ? (((((/* implicit */_Bool) var_4)) ? (arr_31 [i_6] [(short)12]) : (arr_23 [i_6] [i_6]))) : (((/* implicit */int) arr_16 [i_12] [i_6 - 1])))));
                            arr_39 [i_13] [0] [i_12] [(signed char)8] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) ((short) min((((/* implicit */short) var_13)), (arr_21 [i_11 - 1] [i_13] [i_14]))))) & ((~((~(((/* implicit */int) arr_27 [i_6 + 1] [i_6 + 2] [i_11] [i_11 - 1] [i_12] [i_13] [i_14]))))))));
                        }
                        for (int i_15 = 0; i_15 < 20; i_15 += 2) 
                        {
                            var_31 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_34 [i_6] [i_11] [i_6] [i_13] [i_15])) + (((/* implicit */int) var_10))));
                            var_32 = ((((/* implicit */_Bool) min((min((var_6), (var_6))), (arr_25 [i_11] [i_13] [i_13] [i_11])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_30 [i_6] [5ULL])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))) : (((((arr_40 [i_12] [i_13]) != (arr_31 [i_11 + 3] [i_12]))) ? (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (max((((/* implicit */unsigned long long int) var_0)), (arr_24 [i_15] [i_11 + 3] [i_6]))))));
                            arr_42 [12ULL] [i_11 + 2] [i_13] [4] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_15)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_27 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_27 [i_6] [i_6] [i_11 + 2] [i_11] [i_12] [i_13] [i_15]))))) : (max((var_15), (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                        }
                        var_33 = ((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_21 [i_11 + 1] [i_11] [i_11])))));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_26 [8] [i_12] [18] [i_11] [i_6 - 1] [i_6 - 1]), (((/* implicit */unsigned short) arr_16 [i_11] [i_11])))))))) / (((/* implicit */int) ((((/* implicit */int) arr_34 [(signed char)6] [(signed char)11] [i_11 + 4] [i_11 + 4] [i_6 + 2])) <= (((/* implicit */int) arr_34 [i_6] [i_13] [i_11 + 2] [i_6] [i_6 + 3])))))));
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_26 [i_6] [i_11 + 4] [i_12] [i_13] [i_13] [i_13])) : (((/* implicit */int) max((arr_33 [i_6] [i_11 + 1] [i_12] [i_13]), (((/* implicit */short) arr_20 [i_12] [i_11 - 1]))))))) : (((/* implicit */int) var_13))));
                    }
                    /* vectorizable */
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        var_36 = var_0;
                        arr_47 [i_6] [i_11] [i_12] [i_16] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [17ULL] [i_12] [(signed char)14] [i_6 + 2] [i_6 - 1] [i_6 + 2] [i_6 - 1]))) - (((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6 - 1] [15ULL] [i_11] [i_11] [i_12] [(unsigned short)9]))) : (arr_25 [16ULL] [i_11 + 1] [i_6] [i_16]))));
                    }
                    arr_48 [(signed char)11] [i_6] [(signed char)13] [i_6 + 2] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) var_7)), (max((18446744073709551613ULL), (19ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_41 [i_6] [i_12] [i_6] [18ULL] [18ULL] [i_12])))) ? (min((var_1), (((/* implicit */int) arr_17 [i_12])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                }
            } 
        } 
    }
}
