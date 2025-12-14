/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171248
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
    for (long long int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 = arr_5 [i_0];
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_13 [13ULL] [13ULL] [13ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)4064)))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_12))))))) ? (((var_1) | (((/* implicit */unsigned long long int) arr_5 [i_2])))) : (((/* implicit */unsigned long long int) (+(((var_4) + (((/* implicit */long long int) var_10)))))))));
                                arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */int) (-((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [(short)13] [i_2] [4LL] [i_4 - 3]))) : (var_10)))))));
                                var_17 |= ((/* implicit */short) (-(max((((((/* implicit */_Bool) (short)1976)) ? (((/* implicit */unsigned int) var_5)) : (477383739U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_12)))))))));
                                arr_15 [(unsigned char)13] [i_0 - 4] [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) min((var_4), (var_2)))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [(short)8] [i_2] [i_3 + 3] [i_4 + 3])))))))), (((((/* implicit */_Bool) (short)-1977)) ? (((/* implicit */int) arr_10 [i_0] [i_3 - 1] [i_4 + 3] [i_4 + 3] [i_0 - 4])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0 + 1] [i_1] [i_2] = ((/* implicit */_Bool) (~(10442060558402397733ULL)));
                }
            } 
        } 
    } 
    var_18 = var_9;
}
