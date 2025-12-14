/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16391
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) var_12);
                                arr_14 [i_0] [i_4] [(_Bool)1] [i_0] [i_4] = ((/* implicit */_Bool) arr_13 [(signed char)13] [i_1 + 1] [i_2] [i_1 + 1] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) 1698061325)))));
                                var_15 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) var_9)))));
                                var_16 *= ((/* implicit */signed char) var_6);
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_2] [(unsigned char)11] [7ULL])) > (((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (arr_19 [(_Bool)1] [i_1 - 3])));
                        var_19 += ((/* implicit */unsigned char) arr_19 [i_1 - 3] [i_1 - 1]);
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)14), ((unsigned short)14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((17078210539108164696ULL) + (((/* implicit */unsigned long long int) 1698061325))))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) (-(arr_10 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_2] [i_1])));
                        var_22 *= ((/* implicit */int) arr_19 [i_1 - 3] [i_1 - 3]);
                    }
                    for (unsigned int i_9 = 2; i_9 < 15; i_9 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) 1698061325);
                        var_24 = ((/* implicit */unsigned char) arr_6 [(_Bool)1] [i_1 - 2]);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) 
    {
        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            {
                arr_33 [i_10] = arr_29 [i_10];
                var_25 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_32 [i_11] [i_10]) / (((/* implicit */unsigned long long int) arr_28 [i_10]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))));
            }
        } 
    } 
    var_26 -= ((/* implicit */unsigned short) (~(1368533534601386920ULL)));
}
