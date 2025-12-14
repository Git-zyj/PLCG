/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117741
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) arr_6 [i_0 - 1] [i_0 + 1]);
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) (((-(arr_9 [i_2] [i_2] [i_1 + 2]))) == (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-113)))))));
                        var_16 = arr_4 [i_0];
                    }
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */short) min((var_17), (arr_13 [i_1] [i_1 + 3] [i_1 - 1] [(short)2] [i_0 - 3])));
                        var_18 = ((/* implicit */long long int) (+(((((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2])) * (((/* implicit */int) arr_14 [(_Bool)1] [i_2] [i_1] [i_0]))))));
                        var_19 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_0 [i_1 + 3] [i_0 - 1]))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_2] [i_5] [i_0] |= (-(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5])));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_20 = (-(((/* implicit */int) arr_0 [i_0] [i_0])));
                            var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1] [i_5]))));
                        }
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */int) arr_8 [i_7] [i_5] [i_0]);
                            var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_7] [(signed char)12] [i_2] [(signed char)12] [i_0] [i_0])) && (arr_15 [i_0] [i_0] [i_2] [i_5]))))))) == ((+((~(arr_20 [i_0] [i_1] [i_2] [i_5] [i_5] [i_7])))))));
                            arr_24 [i_5] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (-(arr_10 [i_0 - 1] [i_1] [i_2] [(unsigned short)9] [(unsigned short)1] [i_0 - 1])));
                        }
                        var_24 = ((/* implicit */unsigned long long int) (-(arr_19 [i_5] [i_5])));
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_1]))) < (arr_23 [i_1] [i_0])));
                        arr_28 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) arr_21 [i_1 + 3] [i_1 + 3]);
                    }
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (~(arr_12 [i_0] [i_1] [i_2] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 2; i_9 < 17; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            {
                                var_27 = (~(((/* implicit */int) arr_15 [(short)14] [i_1] [i_1] [i_1])));
                                var_28 = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_18 [i_9] [i_9] [i_9] [i_9] [i_9]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) var_7);
    var_30 = ((/* implicit */short) (~(((/* implicit */int) var_8))));
    var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
}
