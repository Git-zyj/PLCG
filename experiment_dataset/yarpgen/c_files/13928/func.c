/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13928
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
    var_12 = ((((/* implicit */int) ((_Bool) (unsigned char)13))) >> (((var_7) - (983740989))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_13 ^= ((_Bool) ((arr_2 [20] [i_1]) & (max((arr_7 [(unsigned char)16] [10] [i_0]), (((/* implicit */long long int) -474013614))))));
                    var_14 |= ((/* implicit */unsigned int) (-(arr_4 [i_2] [i_0])));
                    var_15 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */unsigned int) 474013601)) / (var_0))) != (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) >> (((arr_3 [15] [15] [3]) - (3119328436U)))));
                    var_16 = ((/* implicit */long long int) arr_8 [(_Bool)1] [i_1]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 23; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_13 [(short)2] [i_1] [i_3] [8] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -474013616)), (3160501490U)))) ? (-474013614) : (((((((arr_8 [i_0] [i_2]) + (2147483647))) << (((4132479592U) - (4132479592U))))) >> (((3160501493U) - (3160501487U)))))));
                                var_17 = ((/* implicit */unsigned long long int) -474013614);
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */int) arr_12 [i_3 - 3] [i_3 + 2] [i_3] [i_4] [i_3 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [20] [24LL] [i_2]))))))))))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((((((/* implicit */unsigned int) 16383)) / (2621524875U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) -130166185)) != (3160501488U)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
