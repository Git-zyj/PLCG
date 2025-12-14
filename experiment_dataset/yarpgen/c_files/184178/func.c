/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184178
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_11 = (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (2301339409586323456ULL))))))));
        var_12 = var_7;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_13 += ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) 7359604006239870937ULL)))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 4; i_2 < 23; i_2 += 1) 
            {
                arr_6 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) 11087140067469680678ULL));
                arr_7 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_3 [i_0] [i_1] [i_2 - 4]);
                var_14 += ((/* implicit */_Bool) (~(arr_4 [i_2] [i_2] [i_2 - 3] [i_2 - 4])));
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (1717153566171467133ULL))))))));
            }
            var_16 = (((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 11087140067469680678ULL)))));
            var_17 = ((/* implicit */long long int) 3253691326728044140ULL);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            arr_11 [i_0] [i_0] [i_0] = arr_10 [i_3] [i_3] [i_3];
            var_18 = ((/* implicit */signed char) var_4);
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                for (short i_5 = 3; i_5 < 22; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (~(((/* implicit */int) (_Bool)0)))))));
                            arr_19 [i_4] [i_3] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6] [i_5 - 2] [i_3] [i_0]))) < (((7359604006239870933ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_5 - 3] [i_6])))))));
                            var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5 - 3] [i_0]))) != (-4766062841956606033LL))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_22 = ((/* implicit */long long int) var_1);
}
