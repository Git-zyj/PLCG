/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101970
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 4; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_0] &= (((((-2147483647 - 1)) | (((/* implicit */int) var_11)))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-18734))) == (var_12)))));
                                var_13 = ((/* implicit */long long int) 1302715420);
                                var_14 = ((/* implicit */_Bool) min((var_14), (((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 2] [i_2 - 2] [i_2 + 2])) - (0)))) == (((((/* implicit */_Bool) arr_11 [i_2 - 3] [i_2 - 4] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-20644))) : (var_7)))))));
                            }
                        } 
                    } 
                } 
                var_15 = (i_1 % 2 == zero) ? (((/* implicit */long long int) ((((arr_5 [i_1] [i_1] [i_1 - 1]) + (var_12))) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (~(4177920))))))))) : (((/* implicit */long long int) ((((arr_5 [i_1] [i_1] [i_1 - 1]) - (var_12))) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (~(4177920)))))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */short) ((((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)20666))))));
}
