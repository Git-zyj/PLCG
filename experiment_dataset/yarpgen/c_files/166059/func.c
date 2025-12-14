/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166059
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
    var_14 = ((/* implicit */unsigned short) ((short) var_13));
    var_15 |= ((/* implicit */short) min((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 = (-(min((arr_1 [i_2 + 1]), (arr_1 [i_2 - 2]))));
                    var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((0ULL) - (var_3)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 1] [i_1] [i_0]))) & (arr_5 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) max((arr_1 [i_1]), (((/* implicit */int) arr_0 [i_1] [i_1])))))))) : ((((!(((/* implicit */_Bool) arr_1 [16ULL])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (min((((/* implicit */long long int) var_10)), (var_12)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) ((short) arr_1 [i_3]));
                                arr_13 [i_4] [i_4] [i_3] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_9 [i_1] [i_3] [i_0] [i_1] [i_1] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_0)))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))))), (var_0)));
}
