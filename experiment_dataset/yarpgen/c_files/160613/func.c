/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160613
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */int) (signed char)-35)) | ((~((~(((/* implicit */int) (signed char)-35))))))))));
                var_14 += ((/* implicit */int) (signed char)1);
            }
        } 
    } 
    var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_2), ((signed char)-38)))), (3655886701U)))) || (((/* implicit */_Bool) (((-(var_11))) / (((/* implicit */unsigned int) ((int) var_9))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        arr_8 [(signed char)6] &= ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(signed char)14]))));
        var_16 *= ((/* implicit */unsigned long long int) arr_6 [i_2] [20]);
    }
    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 1; i_4 < 20; i_4 += 4) 
        {
            var_17 -= (((+(3857149454U))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((-1747311921) + (2147483647))) >> (((2171003258U) - (2171003241U)))))))))));
            var_18 *= arr_14 [i_3] [i_3];
            var_19 = ((/* implicit */unsigned int) max((var_19), ((~(((((/* implicit */_Bool) max((arr_6 [i_3] [(_Bool)1]), (1747311921)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (arr_13 [i_3]))) : (((/* implicit */unsigned int) arr_11 [i_3 - 1]))))))));
            var_20 = ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [19] [i_4 - 1])) && (((/* implicit */_Bool) arr_6 [i_3 - 2] [i_4 - 1])))))) : (max((((/* implicit */unsigned long long int) max((arr_11 [i_3]), (((/* implicit */int) (signed char)113))))), (((var_0) - (var_12))))));
        }
        var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((int) arr_12 [i_3] [i_3] [i_3 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_14 [i_3] [i_3])))) : (var_10)));
    }
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (min((arr_12 [i_5] [15] [15]), (((/* implicit */unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
        arr_17 [i_5] = ((/* implicit */signed char) (-(((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_12 [i_5] [i_5] [i_5]))))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_23 -= ((/* implicit */signed char) arr_11 [i_6]);
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                arr_22 [8] [i_6] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((1747311917) ^ (arr_15 [i_5]))))));
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max((min((((arr_16 [i_7]) + (((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-78))))))), (((int) max((arr_5 [i_7]), (389209713U)))))))));
                var_25 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_6 [i_5] [i_5])) / (((unsigned int) arr_19 [i_5] [i_5] [i_5]))));
                var_26 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)6))))) ? (((/* implicit */unsigned int) ((int) var_11))) : (((((/* implicit */_Bool) -432820125)) ? (((/* implicit */unsigned int) 78286142)) : (0U))))) >> ((((~(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_7])) || (((/* implicit */_Bool) var_6))))))) + (7)))));
            }
            for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((signed char) min(((signed char)35), ((signed char)-110))))), (((unsigned int) arr_15 [i_6])))))));
                arr_25 [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3331697204U)))))))))));
                var_28 = (+(((unsigned int) arr_13 [i_5])));
            }
            arr_26 [i_5] [i_6] [i_6] = arr_15 [i_5];
            var_29 = max((((((/* implicit */unsigned int) var_8)) ^ (((unsigned int) arr_11 [i_6])))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-18)) / (201665575)))));
        }
    }
    for (unsigned int i_9 = 1; i_9 < 11; i_9 += 4) 
    {
        var_30 = ((/* implicit */signed char) var_10);
        var_31 ^= ((/* implicit */int) (!(((/* implicit */_Bool) 876402213))));
        /* LoopSeq 3 */
        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            var_32 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((arr_5 [i_10]) + (((/* implicit */unsigned int) arr_15 [i_10])))))))));
            arr_32 [i_9] [i_10] = ((/* implicit */signed char) ((arr_29 [i_10]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)120))))))));
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (~(-1))))));
                        var_34 = ((((((/* implicit */unsigned long long int) var_8)) / (arr_36 [i_11] [i_11]))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_11]))) % (63488ULL))));
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) arr_12 [i_12] [8U] [i_12]))));
                            arr_43 [i_14] [i_11] = ((/* implicit */unsigned long long int) (-(arr_33 [i_9])));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_11]))) + (((unsigned int) (_Bool)1))));
                        }
                    }
                } 
            } 
            var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (arr_28 [i_9 + 2]))))));
        }
        for (unsigned int i_15 = 2; i_15 < 11; i_15 += 1) 
        {
            arr_48 [i_15] = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) 0)))), ((!(((((/* implicit */_Bool) arr_41 [i_9] [i_15] [i_15])) && (((/* implicit */_Bool) arr_10 [i_15]))))))));
            var_38 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-6)) + (((arr_6 [8ULL] [i_9 + 2]) / (((/* implicit */int) arr_42 [i_15 - 2] [i_15] [i_15] [i_9 - 1] [i_9 - 1]))))));
        }
        var_39 = (+(((int) (+(373078947U)))));
    }
    var_40 |= var_1;
}
