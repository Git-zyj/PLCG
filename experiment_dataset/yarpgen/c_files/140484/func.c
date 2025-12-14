/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140484
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (arr_1 [i_0])))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) min(((-(arr_3 [i_0] [i_0 - 1]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))))))))));
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 2])) ? ((((!(((/* implicit */_Bool) arr_2 [i_0])))) ? ((-(arr_1 [i_0]))) : (((/* implicit */long long int) arr_3 [i_0] [i_0 + 4])))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((/* implicit */long long int) arr_2 [i_0])) / (arr_0 [i_0]))) : (arr_0 [i_0 - 2])))));
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) arr_1 [i_0 - 3]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        arr_8 [(short)3] |= ((arr_7 [i_1 + 1] [i_1 + 2]) * (arr_7 [i_1 + 2] [i_1 - 1]));
        var_12 = arr_5 [i_1];
    }
    for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [(unsigned short)0] [i_2])) ? ((+(arr_3 [i_2] [i_2]))) : (arr_3 [i_3] [i_2])))) : ((+((~(arr_1 [i_2])))))));
            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_3])))))))) ? (max((arr_2 [i_2]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2]))))))) : ((+(((/* implicit */int) (!(arr_6 [i_3])))))))))));
        }
        for (signed char i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            var_15 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [(unsigned char)2] [(_Bool)1])), (arr_16 [i_2] [i_2]))))))));
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_10 [i_4] [7ULL]))));
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    for (signed char i_7 = 1; i_7 < 11; i_7 += 2) 
                    {
                        {
                            arr_25 [i_2] [i_2 + 3] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_23 [i_7] [i_2] [i_5])))) && (((/* implicit */_Bool) ((arr_6 [i_7]) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_6 [(signed char)15])))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_5]))))) ? (arr_16 [i_4] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2] [i_2 + 4] [i_2 + 3])))))));
                            var_17 = ((/* implicit */unsigned char) arr_18 [i_2]);
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 2; i_8 < 12; i_8 += 4) 
        {
            for (int i_9 = 3; i_9 < 12; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    {
                        arr_34 [i_2] [i_8] [i_10] [(signed char)10] = ((/* implicit */signed char) (!(arr_6 [i_2 + 3])));
                        arr_35 [i_2] [i_2] [i_2] [(unsigned char)5] [i_2] [i_2] = (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_11 [i_8 + 1] [i_2])), (arr_19 [i_8 + 2] [i_8 + 1] [i_2])))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) arr_5 [i_2]);
        var_19 = ((/* implicit */unsigned char) arr_27 [i_2] [i_2] [i_2]);
        var_20 = ((/* implicit */int) max((var_20), ((~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [i_2] [i_2])), (arr_24 [i_2] [i_2] [i_2] [i_2] [4ULL])))) ? (((/* implicit */int) ((arr_6 [i_2]) || (((/* implicit */_Bool) arr_32 [i_2] [i_2] [i_2] [i_2] [i_2]))))) : (((/* implicit */int) max((arr_12 [i_2]), (((/* implicit */short) arr_10 [i_2] [i_2 - 1])))))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 2) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 12; i_13 += 1) 
                {
                    for (unsigned char i_14 = 4; i_14 < 10; i_14 += 2) 
                    {
                        {
                            arr_48 [i_11] [i_11 + 1] [i_11 + 3] [i_11] [i_11 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_11 + 2] [i_12] [i_14] [i_11 + 2] [i_12]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_13 - 2] [i_13 - 2] [i_13 - 1] [i_13] [i_13 - 1]))))) : (((/* implicit */int) min((arr_32 [i_14 - 2] [i_14] [i_13] [i_11] [i_11]), (arr_32 [i_14 - 4] [i_12] [i_14 - 4] [i_14 - 4] [i_12]))))));
                            var_21 = ((/* implicit */signed char) ((min((arr_14 [i_11 - 1]), (arr_14 [i_11 + 1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_11 - 1])))));
                            var_22 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)-15)))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7057)) ? (((/* implicit */int) arr_6 [i_12])) : ((-2147483647 - 1))))), (max((((/* implicit */unsigned long long int) 3200311757288366749LL)), (8421443945191224364ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [10]))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_26 [i_12] [i_11] [i_11])), ((~(arr_29 [i_11] [i_12] [i_11] [i_11])))))) ? (min((((/* implicit */long long int) arr_38 [i_11] [i_12])), (arr_29 [i_11] [i_11 + 1] [i_11] [i_11]))) : (((/* implicit */long long int) arr_2 [(short)16])))))));
                var_24 = ((/* implicit */int) arr_6 [i_11]);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) ? ((~(((/* implicit */int) var_8)))) : (var_5)));
}
