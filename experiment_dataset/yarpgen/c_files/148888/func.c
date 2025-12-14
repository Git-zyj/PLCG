/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148888
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
    var_13 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (~((+(((/* implicit */int) var_7)))))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (-(15387353593019648022ULL)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((3059390480689903594ULL) > (((/* implicit */unsigned long long int) var_10))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) var_4);
                            var_16 = ((/* implicit */int) arr_10 [i_0]);
                        }
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            arr_20 [i_1] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */int) ((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-17540)))))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)29329)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)159)) || (((/* implicit */_Bool) -1883850740))))) : (((arr_4 [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)13)) : (368860998)))));
                            arr_21 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)97))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))) == (var_1))))) : (((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [i_0] [i_0] [i_5] [i_5])))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                        {
                            arr_24 [i_2] [i_2] [i_2] [i_2] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) -1883850740));
                            arr_25 [i_0] [i_1] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) arr_23 [i_0] [i_0] [i_2] [i_3] [i_3] [i_6]));
                        }
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)97))))));
                        var_18 = ((/* implicit */short) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : ((~(((/* implicit */int) arr_1 [i_0]))))));
                    }
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_8 = 1; i_8 < 18; i_8 += 4) 
                        {
                            arr_33 [i_0] [i_0] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) 1883850739)) ? (((/* implicit */unsigned long long int) arr_18 [i_8 - 1] [i_0] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_4))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (~(3059390480689903594ULL))))));
                        }
                        arr_34 [i_7] [i_7] [i_0] [i_0] [i_7] [i_7] = ((/* implicit */unsigned short) (~(-295278470)));
                    }
                }
                arr_35 [i_0] = ((/* implicit */int) var_4);
            }
        } 
    } 
}
