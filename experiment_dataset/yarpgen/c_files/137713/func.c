/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137713
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
    var_10 -= ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 1750914610U)) ? (((/* implicit */int) arr_1 [0U])) : (arr_6 [(signed char)12] [i_1] [i_1]))) : (((arr_6 [6LL] [i_2] [i_4]) + (286246614))))))));
                                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-60)) + (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (signed char)-122))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [10LL])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)33))) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))))))));
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_5 - 1] [i_0 - 2] [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_0] [(signed char)10] [i_5 + 1] [i_0 - 1])))))));
                    }
                    var_15 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [(short)20] [i_0 - 2] [i_0 + 2] [i_0 - 1]))) * (((((/* implicit */_Bool) arr_7 [i_0 + 2] [2] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_2 [i_2])))));
                    var_16 += ((/* implicit */_Bool) arr_5 [i_0] [(short)18] [(short)18] [i_0]);
                    /* LoopSeq 1 */
                    for (signed char i_6 = 2; i_6 < 20; i_6 += 1) 
                    {
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)89)))))))))));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_6] [i_6 + 1] [i_6] [i_0] [i_0 - 1] [i_0])))))));
                    }
                }
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [0ULL]))) / (((((/* implicit */_Bool) (signed char)122)) ? (arr_12 [i_0] [i_0] [i_0 - 1] [i_1] [6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [18ULL])))))))) ? (((/* implicit */int) ((((/* implicit */int) ((signed char) var_1))) != (((/* implicit */int) min((((/* implicit */signed char) var_4)), ((signed char)107))))))) : (((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) < (var_8)))) << (min((((/* implicit */int) var_3)), (var_8))))))))));
            }
        } 
    } 
}
