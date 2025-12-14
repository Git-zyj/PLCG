/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17978
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
    var_16 = ((/* implicit */unsigned int) var_8);
    var_17 = ((/* implicit */signed char) var_3);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 9; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_3 [i_3] [i_1 + 1] [i_0])) * (144115188071661568ULL)));
                                arr_14 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 4] [i_3] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_13 [i_1 + 1] [i_3 - 4] [(signed char)9])))) > (var_0)));
                                var_19 = ((/* implicit */_Bool) max((arr_11 [i_4] [0]), (((/* implicit */unsigned int) (unsigned char)136))));
                            }
                        } 
                    } 
                    var_20 |= ((/* implicit */int) (+(min((((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_1 + 1] [i_0] [i_0])) ? (arr_9 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [9ULL]))))), (((/* implicit */unsigned long long int) (unsigned char)136))))));
                }
            } 
        } 
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned long long int) ((var_14) ^ (((/* implicit */int) arr_1 [i_0])))))))) ? ((-(((unsigned long long int) arr_3 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (var_3)))) ? (min((var_2), (((/* implicit */unsigned long long int) (unsigned char)136)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3))))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_22 = ((/* implicit */signed char) arr_15 [i_5] [6U]);
            var_23 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_6 + 1] [i_6 + 1] [i_6 + 1]))));
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_23 [i_8])) : (((/* implicit */int) var_10))));
                            arr_28 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((var_10) ? (10749874726884466694ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [i_5] [12U] [i_5]))) : (var_3))))));
                            arr_29 [i_8] = ((/* implicit */long long int) ((arr_16 [i_6 + 1] [i_7 + 1]) ? (((/* implicit */int) arr_16 [i_6 + 1] [i_7 + 1])) : (((/* implicit */int) arr_16 [i_6 + 1] [i_7 + 1]))));
                        }
                    } 
                } 
            } 
            var_25 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_5] [i_6 + 1])) ? (((/* implicit */int) arr_15 [i_5] [i_6 + 1])) : (((/* implicit */int) arr_15 [i_6 + 1] [i_6 + 1]))));
            var_26 = arr_25 [i_5] [i_5] [i_5] [i_5] [i_6 + 1] [i_6] [i_6 + 1];
        }
        arr_30 [i_5] = ((/* implicit */_Bool) arr_17 [i_5] [i_5]);
        arr_31 [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)119))));
    }
}
