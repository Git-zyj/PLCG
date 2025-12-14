/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189559
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
    var_18 = ((/* implicit */signed char) ((((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) var_6);
                            arr_11 [(signed char)10] [i_2] [i_2] [i_3] |= ((/* implicit */short) arr_0 [i_1] [i_1]);
                            arr_12 [i_0] [i_2] [i_1] [i_0] = min((2147483647), (((((/* implicit */_Bool) arr_2 [(signed char)0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-112)))));
                            arr_13 [i_0] = ((/* implicit */int) ((((arr_7 [i_0] [i_1] [i_2]) == (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_3] [(short)9] [i_1]))) : (arr_1 [i_0] [i_0]))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) != (var_1)))))))));
                            arr_14 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0] [i_1] [(short)2] [i_2] [i_3])) <= (((((((/* implicit */int) var_14)) == (((/* implicit */int) arr_5 [(signed char)4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (short)12222))))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] [4] = arr_6 [i_1] [i_0] [i_0];
                arr_16 [i_0] [i_0] = ((/* implicit */short) arr_7 [i_0] [5ULL] [i_0]);
                var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_1])) / (((/* implicit */int) arr_2 [i_0]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 1; i_4 < 23; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (arr_20 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4 - 1]))))) * (((arr_18 [5ULL]) + (((/* implicit */unsigned long long int) arr_24 [i_5] [i_4]))))))) ? (var_6) : (arr_22 [14ULL] [i_5] [i_6]));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_8] [i_7])) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)3)) || (((/* implicit */_Bool) (short)12222))))) : (((/* implicit */int) arr_28 [i_8] [i_7])))))));
                                var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_5] [(short)16])) - (((((/* implicit */_Bool) var_4)) ? (arr_24 [i_5] [16ULL]) : (((/* implicit */int) arr_19 [i_4]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (max((((/* implicit */unsigned long long int) ((int) var_0))), (arr_20 [i_5]))));
                                var_23 += arr_27 [i_4] [i_8];
                            }
                        } 
                    } 
                    arr_29 [23ULL] [i_5] [i_6] = ((/* implicit */short) arr_25 [10ULL]);
                }
            } 
        } 
        var_24 &= ((/* implicit */unsigned long long int) ((signed char) arr_21 [i_4] [i_4 - 1]));
        var_25 = var_11;
        arr_30 [i_4] = ((/* implicit */signed char) var_10);
    }
    var_26 = ((/* implicit */short) var_17);
    var_27 = ((/* implicit */signed char) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_12))));
}
