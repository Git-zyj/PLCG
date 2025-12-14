/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113133
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((((((/* implicit */long long int) ((/* implicit */int) var_15))) + (var_6))), (((/* implicit */long long int) var_1))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_17))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0])) * (((/* implicit */int) (_Bool)1)))))))) ? ((-(((/* implicit */int) ((var_9) >= (((/* implicit */int) var_8))))))) : (((/* implicit */int) max(((short)-1), (((/* implicit */short) (_Bool)1)))))));
                    arr_7 [16ULL] [i_1] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)10842);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] [i_4 - 2] = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (arr_8 [i_2 + 1] [i_3])))))), ((!(var_5)))));
                                var_20 ^= ((/* implicit */int) var_5);
                                arr_15 [i_2] [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
