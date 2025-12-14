/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180919
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
    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_0)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        arr_4 [(short)8] [i_0] = ((/* implicit */unsigned char) arr_3 [(_Bool)1]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_0 - 2]))));
                    arr_10 [i_0] [i_0] [i_1] = ((/* implicit */short) arr_3 [i_1]);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_2] [i_1]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_1] [i_4] [i_1] [i_4] [i_4] = ((/* implicit */short) arr_3 [i_0]);
                            var_20 = (+(arr_11 [i_0] [(short)7] [i_3] [i_1]));
                            arr_16 [i_1] = ((/* implicit */long long int) arr_1 [i_0 + 1] [i_1]);
                            var_21 = ((/* implicit */_Bool) (+(1073741823ULL)));
                        }
                        var_22 = ((/* implicit */signed char) arr_13 [i_3] [i_1] [(unsigned short)5] [i_1] [i_0]);
                        var_23 = ((/* implicit */unsigned int) (-((~(arr_5 [i_1] [i_1])))));
                    }
                    for (unsigned short i_5 = 3; i_5 < 20; i_5 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_6 = 4; i_6 < 18; i_6 += 3) 
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_5] [i_6 - 4] = (~(((/* implicit */int) arr_20 [i_6 - 4] [i_1] [i_2] [i_2] [i_6 + 2])));
                            var_24 = ((/* implicit */unsigned long long int) (+((+((-(arr_3 [i_0 + 3])))))));
                        }
                        for (unsigned char i_7 = 2; i_7 < 20; i_7 += 3) /* same iter space */
                        {
                            var_25 += ((/* implicit */unsigned int) (-((+((-(arr_13 [i_1] [0] [i_2] [12U] [i_7])))))));
                            var_26 ^= ((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_1] [i_7 - 2])))))))));
                            arr_27 [i_0 + 1] [i_1] [i_1] [i_1] [(unsigned short)14] [i_1] = ((/* implicit */_Bool) (-(arr_24 [i_1] [i_1])));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 2; i_8 < 20; i_8 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */_Bool) (+((~(arr_26 [i_8])))));
                            var_28 = ((/* implicit */short) (~((~(arr_19 [i_1] [i_5] [i_8])))));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 2; i_9 < 20; i_9 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_0] [i_1] [i_5] [(signed char)11]))));
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (-((+(-421907302064601014LL))))))));
                        }
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) arr_1 [i_0 - 2] [i_1]))));
                        var_32 = arr_1 [i_0] [i_1];
                    }
                    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (-(arr_21 [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
        var_34 = ((/* implicit */int) arr_14 [(unsigned short)10] [(unsigned short)10] [i_0]);
        var_35 = (!(((/* implicit */_Bool) (-((~(((/* implicit */int) arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
    {
        arr_34 [i_10] = ((/* implicit */int) arr_28 [i_10] [i_10] [i_10]);
        var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1LL))));
        var_37 = ((/* implicit */unsigned int) arr_14 [i_10] [i_10] [i_10]);
        arr_35 [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-14366))));
    }
}
