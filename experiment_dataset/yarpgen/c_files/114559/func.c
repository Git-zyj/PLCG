/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114559
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((((/* implicit */int) arr_0 [i_0 + 1])) / (((/* implicit */int) arr_0 [i_0 - 1]))))));
        var_20 = ((int) min((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0 - 2]))) : (7684529224376286565ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) max((((((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (10762214849333265041ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        arr_4 [i_0 - 2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1887414627), (((/* implicit */int) arr_1 [i_0] [i_0 - 2]))))) ? (((/* implicit */int) min((arr_1 [i_0] [i_0 - 1]), (arr_1 [i_0] [i_0 + 1])))) : (((/* implicit */int) arr_1 [i_0] [i_0 + 1]))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 19; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) arr_11 [i_1] [16U] [i_1] [i_1]);
                            arr_15 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */signed char) ((_Bool) max((arr_12 [i_1 + 1]), (arr_12 [i_1]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 19; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            arr_23 [i_1] [i_2 - 1] [i_1] [i_6] [i_6] [i_2 - 1] [i_1] = ((/* implicit */int) arr_13 [i_1] [i_1] [i_6] [i_7]);
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)(-32767 - 1)))))) & (((((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1])) & (arr_19 [i_1] [i_2 - 1] [i_5 - 1] [i_6] [i_7])))))));
                        }
                        arr_25 [i_1] [10U] [i_1] = ((/* implicit */int) (short)-32762);
                        arr_26 [i_6] [i_1] [i_5 - 1] [i_1] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_1] [i_2] [i_5 + 1] [i_1])) >= ((-(arr_5 [i_2 - 1] [i_1])))));
                    }
                    for (int i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_5] [i_5] [i_1] = ((((((/* implicit */_Bool) arr_14 [i_1] [i_5 - 1] [i_2 - 1])) ? (arr_10 [i_1] [i_2]) : (((/* implicit */unsigned long long int) arr_21 [i_8] [i_8] [i_5 - 1] [i_2 - 1])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))));
                        arr_32 [i_1 + 3] [i_1 + 3] [i_1] [i_1 + 3] [i_5 - 1] [i_2 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)3560))));
                    }
                    arr_33 [i_2] [i_1] = ((/* implicit */unsigned int) max(((~(((10762214849333265041ULL) | (((/* implicit */unsigned long long int) arr_18 [i_1] [i_2] [i_1] [i_2 - 1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)-34)) : (arr_17 [i_1] [i_2] [i_5])))) ? (((((/* implicit */int) (signed char)34)) & (arr_18 [i_1] [i_2] [i_5 + 1] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_20 [i_1 + 3] [(unsigned char)1] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_27 [i_1 + 1] [i_1 + 1] [i_5] [i_1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_6 [i_1])))))))));
                }
                var_23 = min((arr_17 [i_1] [i_1] [i_1]), (((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1])) ? (arr_17 [i_1] [i_1 + 2] [i_1]) : (arr_17 [i_1] [i_1] [i_1]))));
            }
        } 
    } 
}
