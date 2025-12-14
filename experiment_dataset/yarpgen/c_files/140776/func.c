/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140776
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((short) max((((/* implicit */short) arr_6 [i_0] [i_1] [i_1])), (arr_7 [i_0] [i_0] [i_1]))));
                var_10 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_1 + 1]), (arr_2 [i_1 + 1]))))) | (max((((/* implicit */long long int) (-(28)))), (((long long int) var_0))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 3; i_2 < 20; i_2 += 4) 
    {
        var_11 |= ((/* implicit */short) (~(((((/* implicit */int) min((var_0), (arr_1 [i_2 + 1])))) / (((((/* implicit */_Bool) 1409201923410704434LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            var_12 = ((/* implicit */unsigned int) ((unsigned char) (+(var_8))));
                            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (!((_Bool)1)))))))));
                            arr_22 [i_4] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */unsigned long long int) arr_13 [i_2 - 2] [i_2] [i_2] [i_2 - 3])) : (arr_12 [i_2])));
                        }
                        arr_23 [i_2] [i_2] [i_4] [i_4] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) max((-1480284055821037730LL), (((/* implicit */long long int) arr_6 [i_2] [i_3] [i_5]))))))));
                        /* LoopSeq 4 */
                        for (long long int i_7 = 1; i_7 < 21; i_7 += 4) 
                        {
                            var_14 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_26 [i_2 - 2])) ? (arr_26 [i_2 - 3]) : (arr_26 [i_2 - 1]))), (((/* implicit */unsigned long long int) 36011204832919552LL))));
                            var_15 = ((/* implicit */int) arr_17 [i_5] [i_4] [i_4] [i_5]);
                            var_16 = ((/* implicit */short) min(((-(((/* implicit */int) (short)-8590)))), (((/* implicit */int) min((min((var_2), (var_2))), (((/* implicit */unsigned short) arr_19 [i_2] [i_2] [i_4] [i_7] [i_7 - 1])))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_17 = ((/* implicit */short) var_9);
                            arr_30 [i_2] [i_4] [i_4] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) min((max((((/* implicit */unsigned short) arr_10 [i_4])), (var_1))), (((/* implicit */unsigned short) arr_14 [i_2] [i_3 + 1] [i_2 + 1] [i_5])))))));
                            var_18 = ((/* implicit */int) (unsigned char)0);
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
                        {
                            var_19 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_2 - 1])) && (((/* implicit */_Bool) 67043328U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_2] [i_2 + 2])) >= (((/* implicit */int) arr_10 [i_2 - 2])))))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_3] [i_4])) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_33 [i_2] [i_3] [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_2 - 3] [i_3 + 1] [i_4] [i_5] [i_9])) >= (((/* implicit */int) arr_21 [i_2] [i_4] [i_4] [i_5] [i_9]))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
                        {
                            arr_36 [i_10] [i_5] [i_4] [i_4] [i_4] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((max(((~(4294967295U))), (((/* implicit */unsigned int) arr_0 [i_2 - 2])))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_37 [i_4] [i_4] = max((((/* implicit */unsigned long long int) var_2)), (((unsigned long long int) ((((/* implicit */_Bool) 16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)41282))))));
                            arr_38 [i_2 + 1] [i_3] |= ((/* implicit */_Bool) min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) var_6))));
                        }
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_2 + 3] [i_2] [i_2] [i_2 - 1]))))), (arr_16 [i_2] [0LL] [i_2] [i_2] [i_2] [i_2])));
    }
}
