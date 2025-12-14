/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150227
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_10))));
    var_18 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_20 = arr_4 [i_1];
                                var_21 = arr_10 [i_0] [i_0] [i_2] [i_3] [i_0];
                                var_22 = ((/* implicit */unsigned char) arr_0 [i_0]);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((102904521U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173))))))));
                        var_24 = ((/* implicit */signed char) ((_Bool) arr_15 [i_0] [(signed char)17] [i_5] [i_1] [i_2] [i_5]));
                    }
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */int) ((long long int) (!((!(((/* implicit */_Bool) (unsigned char)20)))))));
                        var_25 = ((/* implicit */long long int) ((signed char) ((arr_5 [i_1 - 1] [i_1 - 1]) && (((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                        var_26 = ((/* implicit */signed char) arr_4 [i_0]);
                        var_27 = ((/* implicit */long long int) max((var_27), (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) * (((((((/* implicit */long long int) arr_0 [i_6])) / (arr_14 [i_0] [i_0] [i_1] [i_2] [i_0]))) * (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))))))));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) arr_17 [i_0] [3U]))));
                    }
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) arr_20 [11] [i_0]);
                        var_30 = ((/* implicit */unsigned char) ((signed char) (+(arr_4 [i_1 - 1]))));
                        var_31 = ((/* implicit */long long int) arr_10 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1]);
                        var_32 = ((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (unsigned char)173)))));
                    }
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        var_33 = ((unsigned char) ((arr_3 [i_1 + 1]) + (((/* implicit */int) ((((/* implicit */int) arr_12 [12U] [i_0] [i_1] [12U] [12U])) != (((/* implicit */int) arr_20 [i_0] [i_0])))))));
                        var_34 = ((/* implicit */unsigned char) arr_0 [i_0]);
                        var_35 = ((/* implicit */unsigned char) arr_15 [6U] [i_2] [i_8] [i_8] [i_0] [i_0]);
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_3 [i_2])) == ((+(102904517U)))));
                    }
                    arr_23 [i_1] [i_1] [i_1 + 1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_8 [i_2] [i_1 + 1] [i_1 - 1] [i_1 + 1])) ^ (((/* implicit */int) arr_8 [8] [i_1 - 1] [i_1 + 1] [i_1 - 1])))) >> (((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))));
                    var_37 = ((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_1])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        for (signed char i_10 = 2; i_10 < 20; i_10 += 2) 
        {
            for (long long int i_11 = 3; i_11 < 17; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */signed char) arr_36 [i_9]);
                                arr_37 [(signed char)15] [i_10 - 2] [i_11] [i_9] [i_12] [i_13 + 1] = ((/* implicit */unsigned int) ((long long int) ((102904526U) <= ((+(4192062775U))))));
                                var_39 = ((/* implicit */unsigned int) ((long long int) (-(arr_33 [i_13] [i_13] [12U] [i_12] [i_12] [i_11 + 3]))));
                                arr_38 [(_Bool)1] [(signed char)8] [i_9] [i_12] [(_Bool)1] [i_10 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((int) arr_25 [i_9]))))) - (((unsigned int) ((int) arr_33 [i_9] [(signed char)12] [(signed char)12] [i_9] [i_12] [i_13 + 1])))));
                                var_40 = ((/* implicit */long long int) arr_28 [i_10 - 1] [8LL] [i_9] [i_11 - 1]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned int) arr_30 [i_9] [i_9] [i_9] [i_14]);
                        var_42 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) (signed char)34)))));
                        var_43 = ((/* implicit */signed char) ((unsigned char) ((long long int) (!(((/* implicit */_Bool) arr_39 [i_9] [i_9] [i_9] [i_9]))))));
                    }
                    var_44 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9] [10LL] [i_10] [(signed char)0]))) > (((long long int) (unsigned char)83))));
                    arr_41 [i_9] = ((/* implicit */unsigned int) ((((long long int) (+(((/* implicit */int) arr_30 [i_9] [i_9] [i_9] [i_9]))))) | (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10])))));
                }
            } 
        } 
    } 
}
