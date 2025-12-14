/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133085
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
    var_16 = ((/* implicit */int) max((var_15), (((/* implicit */short) ((unsigned char) max((((/* implicit */short) var_7)), (var_6)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) arr_1 [i_0]);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] = ((/* implicit */signed char) arr_6 [i_0] [5U] [i_0]);
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_0])), (((int) max((((/* implicit */int) arr_5 [i_2 - 1])), (arr_3 [(signed char)9] [i_1])))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2 - 1] [(unsigned short)13])) * (arr_8 [i_0] [i_1] [i_1] [i_2 + 2])));
                    arr_16 [i_0] = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) min((((/* implicit */int) max((arr_2 [i_0] [i_2 - 1] [14]), (arr_2 [i_0] [i_0] [i_1])))), (arr_18 [i_2 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])))), (min((((unsigned int) arr_6 [i_0] [i_1] [i_5])), (((/* implicit */unsigned int) arr_19 [i_1] [i_2 + 3] [i_2 - 2] [i_6 - 1]))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) arr_6 [i_0] [i_0] [i_5]))), (arr_9 [14U] [i_1] [14U])))) && (((/* implicit */_Bool) ((int) arr_18 [5U] [i_1] [5U] [i_6 - 1])))));
                                arr_22 [i_2 - 1] [(short)8] [(signed char)19] [i_2 + 2] [i_2 - 1] [(_Bool)1] = ((max((((/* implicit */unsigned int) ((arr_12 [i_6 - 1] [i_6] [(signed char)5] [i_6 - 1] [i_6] [i_6] [(signed char)5]) >> (((/* implicit */int) arr_4 [i_0]))))), (max((arr_1 [i_2 + 3]), (arr_21 [i_0] [7] [i_2 + 1] [i_2 + 1] [i_1]))))) & (min((min((((/* implicit */unsigned int) arr_12 [i_6] [i_6] [i_6 - 1] [i_6] [i_6] [i_6] [i_6])), (arr_9 [i_0] [i_0] [9U]))), (((/* implicit */unsigned int) max((arr_3 [i_2] [i_2]), (((/* implicit */int) arr_4 [i_5]))))))));
                                arr_23 [i_0] [i_6 - 1] [i_2 - 2] [i_5] [17U] = ((/* implicit */unsigned int) min(((~(((((/* implicit */int) arr_10 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_0])) >> (((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [14U] [i_0] [i_0] [i_0])) - (402))))))), (arr_18 [i_0] [17] [i_5] [i_5])));
                                var_21 = (-(arr_6 [i_0] [i_2 - 2] [i_5]));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 |= ((/* implicit */int) var_10);
}
