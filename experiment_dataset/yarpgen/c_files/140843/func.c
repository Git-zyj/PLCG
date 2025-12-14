/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140843
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1 - 3] [i_0] = ((/* implicit */short) arr_0 [i_1]);
                    var_19 = ((/* implicit */_Bool) var_2);
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (short)-19286))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1 - 2] [i_1 - 2]))))) ? (((/* implicit */int) ((signed char) arr_1 [i_2]))) : (((int) (~(2809960510U))))));
                    var_21 = ((/* implicit */int) ((unsigned int) ((unsigned int) ((int) arr_1 [i_0]))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_10 [i_1 - 2] [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned int) (+(((/* implicit */int) var_18)))))))) <= (3056024388115797094ULL)));
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            var_23 = ((/* implicit */short) arr_8 [i_4] [i_0] [i_4] [i_4] [i_4]);
                            var_24 = ((/* implicit */unsigned int) var_0);
                            arr_15 [i_0] [i_0] [i_2] [i_4] [i_4 + 3] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_13)) ? (arr_9 [i_0] [i_2]) : ((-(((/* implicit */int) var_6)))))));
                            arr_16 [i_0] [i_4] [i_2] [i_3] [i_4 - 1] = ((/* implicit */short) arr_5 [i_0] [i_0] [i_1] [i_1 + 1]);
                        }
                        var_25 = ((/* implicit */_Bool) var_0);
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) (((-(3056024388115797080ULL))) > (3056024388115797094ULL)));
    }
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_5]))))) ? (((/* implicit */int) max((arr_0 [i_5]), (arr_0 [i_5])))) : (((/* implicit */int) ((signed char) arr_0 [i_5])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((long long int) arr_18 [i_5] [i_6])))));
            arr_21 [i_5] [i_5] = ((/* implicit */int) var_15);
            arr_22 [i_6] = var_11;
            arr_23 [i_5] = ((/* implicit */short) arr_3 [i_5] [i_5] [i_5]);
        }
        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            var_29 = ((/* implicit */long long int) max((((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_7])), ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_5])) || (((/* implicit */_Bool) var_2)))))))));
            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_12 [i_5] [i_7] [i_5] [i_5] [i_7] [i_7]))));
            var_31 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-16))));
        }
    }
    var_32 = var_0;
}
