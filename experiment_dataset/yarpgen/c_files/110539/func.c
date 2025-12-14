/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110539
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
    var_16 = var_8;
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (17448491105358531856ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_12 [(unsigned short)14] [i_1] [i_3] [i_1] &= ((/* implicit */unsigned short) ((arr_8 [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101)))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_1 - 2] [i_2] [i_3])), (arr_2 [i_0] [i_0])))) ? (var_11) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3]))))))))));
                                arr_13 [i_1] [i_1] [(signed char)18] [(unsigned short)11] = (+(((/* implicit */int) var_2)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_6))))));
                                var_20 = ((/* implicit */short) min((((18044958558048204317ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) (((+(arr_16 [i_1] [i_5] [(_Bool)1] [i_1] [i_0] [i_1]))) > (arr_17 [i_0] [i_1 + 2] [(short)4] [i_0] [i_0]))))));
                                arr_18 [(unsigned short)13] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (min((arr_6 [i_1]), (arr_2 [i_2] [i_2 - 1]))) : (((/* implicit */unsigned long long int) (~(arr_9 [13] [13] [13] [i_2 + 1]))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0] [i_1] = ((/* implicit */short) ((unsigned long long int) arr_14 [i_0] [i_0] [i_1 - 2] [i_1 - 1] [i_0]));
                }
                arr_20 [4ULL] &= ((/* implicit */unsigned long long int) var_6);
                var_21 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_14)), (arr_2 [5ULL] [5ULL]))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)54697))))), (arr_14 [i_0] [8ULL] [i_0] [i_0] [0])))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_8);
    var_23 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (_Bool)0))))) ? ((-(var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((3952270) > (((/* implicit */int) (_Bool)1))))))))));
}
