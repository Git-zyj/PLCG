/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185879
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
    var_13 = ((/* implicit */_Bool) var_11);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_14 -= ((4294967295U) >> (((((/* implicit */int) (unsigned short)58630)) - (58617))));
                                arr_16 [i_0] [i_1] [i_0] [(unsigned short)19] = ((/* implicit */_Bool) arr_11 [i_0] [i_1 + 1] [i_2 - 1] [i_3]);
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_4 + 1] = ((/* implicit */signed char) (!(arr_4 [i_0] [i_3 + 3])));
                                var_15 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((unsigned short) arr_12 [i_0] [14LL] [i_0] [12U] [(short)13])))))));
                                var_16 = ((/* implicit */int) max(((~(arr_1 [i_1 + 1]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_1 + 1])))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [(signed char)11] = ((/* implicit */long long int) var_3);
                    var_17 = ((/* implicit */_Bool) (+(arr_1 [i_0 + 1])));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-811075011), (((/* implicit */int) (unsigned short)127))))) ? (((arr_8 [i_1]) - (arr_6 [2ULL]))) : (((/* implicit */int) (!(arr_12 [i_2] [i_1 + 1] [(unsigned short)8] [i_1 + 1] [i_2]))))))))))));
                }
            } 
        } 
    } 
}
