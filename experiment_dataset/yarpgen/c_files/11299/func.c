/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11299
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
    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)28359))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((unsigned char) ((arr_1 [(_Bool)1]) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_2 - 3]))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1])) * (((/* implicit */int) (_Bool)1))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_1] [i_1] [i_1] [(unsigned short)12] = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1]))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2 - 1] [i_2 + 1])))))));
                        arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) arr_5 [i_2] [i_2 + 1] [i_1] [i_1]);
                    }
                    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        arr_17 [i_5] [i_5] [(unsigned char)10] [i_5] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2 + 1] [i_0 + 1] [i_0 + 2]))));
                        arr_18 [i_5] [(signed char)0] [i_1] [i_1] [i_1] [(signed char)0] = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) ((unsigned char) arr_19 [i_6 + 2] [i_6 + 2] [i_6] [i_6 + 2]));
                        /* LoopSeq 1 */
                        for (short i_7 = 1; i_7 < 22; i_7 += 1) 
                        {
                            var_23 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_0 + 1] [i_0] [(signed char)14] [i_2 - 3] [i_6 - 1] [i_6 - 1])) * (((int) -1026997153))));
                            var_24 = ((/* implicit */_Bool) ((signed char) arr_1 [i_2 - 3]));
                            arr_25 [i_1] [i_1] [i_2] [i_6] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1] [i_2 - 1] [i_6 - 2])) ? (arr_7 [i_1] [i_2 - 1] [i_6 - 2]) : (arr_7 [i_1] [i_2 - 1] [i_6 - 2])));
                        }
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_28 [i_8] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_2 - 1] [i_1] [i_1])) ? (((/* implicit */int) (short)32739)) : (((/* implicit */int) arr_2 [i_2 + 1] [i_1] [i_0 - 1]))));
                        arr_29 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) arr_9 [i_1] [(_Bool)0] [i_2 - 2] [i_2 - 2] [i_8]));
                        arr_30 [i_1] [(short)20] = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 - 3] [i_1] [i_1] [i_0 + 1]);
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) arr_26 [i_1] [i_8 - 1] [i_2 - 3] [i_0]);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */short) arr_3 [4] [i_1]);
                        arr_34 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2 - 1])) ? (arr_7 [i_1] [i_1] [i_0]) : (arr_7 [i_1] [i_1] [i_1])));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) ((unsigned long long int) arr_24 [i_10] [i_0 - 1] [i_2 - 2] [i_10] [i_2 - 2]));
                                arr_39 [18] [i_1] [i_2] [i_10] [i_11] [i_1] = ((/* implicit */int) ((unsigned long long int) (unsigned short)37168));
                            }
                        } 
                    } 
                    arr_40 [i_1] [i_1] = ((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_1]);
                }
            } 
        } 
    }
    var_27 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
    var_28 = ((/* implicit */int) var_7);
}
