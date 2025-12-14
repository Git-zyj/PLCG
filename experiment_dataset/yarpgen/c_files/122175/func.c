/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122175
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
    var_18 ^= (~(((/* implicit */int) ((max((13436473591573230387ULL), (((/* implicit */unsigned long long int) var_11)))) > (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (var_9))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */_Bool) (-((+(263873873)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(arr_1 [i_0])))))) ? (((/* implicit */int) (!(arr_0 [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 13436473591573230387ULL)))))));
        arr_4 [i_0] = var_12;
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 11; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_14)) : (263873880))));
        arr_8 [i_1] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1]))))) : (((arr_5 [i_1] [i_1]) >> (((var_2) - (1400193511))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 14; i_2 += 2) 
        {
            for (int i_3 = 1; i_3 < 13; i_3 += 1) 
            {
                {
                    var_21 = ((int) -263873873);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 3; i_5 < 13; i_5 += 4) 
                        {
                            {
                                var_22 += ((((/* implicit */_Bool) -1012247502)) ? (((unsigned int) -263873873)) : (((/* implicit */unsigned int) arr_5 [i_1 + 4] [i_2 - 3])));
                                var_23 = ((/* implicit */_Bool) ((arr_17 [i_1 - 4] [i_3 - 1]) ^ (((/* implicit */unsigned long long int) arr_12 [i_1 + 4]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            {
                                var_24 ^= ((/* implicit */unsigned long long int) (~(var_0)));
                                arr_24 [i_1 - 4] [i_3] [i_2] [i_6] [i_3] [i_6 - 1] = (~(15787542251817323126ULL));
                                var_25 = ((/* implicit */int) arr_23 [i_1 - 3] [i_1 + 3] [i_1] [i_3 + 2] [i_7]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            {
                                arr_29 [i_9] [i_3] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1627316411))))) : (263873877)));
                                arr_30 [i_1 - 4] [i_3] [i_3 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_3])) & (((/* implicit */int) arr_22 [i_3]))));
                                arr_31 [i_1] [i_3] [i_1] [i_2] [i_9] [i_8] = 263873877;
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_32 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1966624537)) || (((/* implicit */_Bool) var_2))));
        arr_33 [i_1 - 4] = ((/* implicit */int) ((unsigned long long int) var_6));
    }
}
