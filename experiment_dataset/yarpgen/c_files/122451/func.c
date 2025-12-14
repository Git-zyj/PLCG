/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122451
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
    var_10 *= ((/* implicit */unsigned int) (+((-((+(var_7)))))));
    var_11 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_12 |= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    var_13 = (~(max((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (10431021760066713642ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_1]))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_13 [(signed char)1] [i_2] [i_1] [(signed char)1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 2]))))) < (((/* implicit */int) ((arr_2 [i_1] [i_1] [i_1 + 2]) && (((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 2])))))));
                                arr_14 [i_0] [(short)4] [i_2] [14LL] |= ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) arr_12 [i_0] [i_0] [i_2] [(signed char)4] [7ULL]))), (((((/* implicit */int) ((unsigned short) (_Bool)1))) << (((/* implicit */int) ((short) arr_1 [(short)1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
