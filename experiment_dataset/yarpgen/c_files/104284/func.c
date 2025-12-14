/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104284
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
    var_13 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)-23865)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1062118655U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)32760)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_7 [(signed char)5] [i_1] |= ((/* implicit */short) arr_1 [5U] [5U]);
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 8; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4] = ((/* implicit */int) var_9);
                                arr_18 [i_0] [i_1] [7] [(signed char)9] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0 - 3] [(unsigned char)1] [i_0 + 1] [0LL])) || (((/* implicit */_Bool) (short)-23865))))), (var_2)));
                                arr_19 [i_0] [i_0] [i_2] [i_3] [i_4 - 1] = ((/* implicit */long long int) (short)23865);
                                arr_20 [2ULL] [i_1] [(short)3] [i_2 - 2] [i_2 - 2] [i_4] [i_4 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)21536)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) min((((/* implicit */short) (unsigned char)192)), ((short)-23872)))))));
                                arr_21 [i_3] [i_1] [i_3] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_2 [i_0 - 2]), (arr_2 [i_0])))) > (((((/* implicit */int) arr_2 [i_2 + 1])) & (((/* implicit */int) arr_2 [i_0 + 1]))))));
                            }
                        } 
                    } 
                } 
                arr_22 [i_0] [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [(unsigned char)3])) && (((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1] [i_1 + 1]))))) : (((/* implicit */int) min((min((arr_12 [i_0 - 3] [i_0 - 3] [i_0] [1U] [i_1 - 1]), (((/* implicit */unsigned char) arr_2 [i_0 + 1])))), (((/* implicit */unsigned char) (_Bool)0)))))));
            }
        } 
    } 
}
