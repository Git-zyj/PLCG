/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132084
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
    var_20 = ((/* implicit */unsigned short) var_19);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_21 = min((((/* implicit */int) arr_1 [i_3 - 1] [i_4])), (((((/* implicit */int) (unsigned char)172)) * (((/* implicit */int) (signed char)-38)))));
                                var_22 |= ((/* implicit */unsigned short) max((((/* implicit */short) var_10)), (var_13)));
                                var_23 &= ((/* implicit */long long int) ((arr_7 [i_0] [i_1] [i_2] [i_1]) << (((((/* implicit */int) ((unsigned char) var_13))) - (112)))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((((((/* implicit */long long int) max((((/* implicit */int) var_13)), (var_18)))) % (((var_5) % (var_6))))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_11))))))))));
                                var_25 = ((min((((/* implicit */int) max((var_2), (var_2)))), (var_18))) * (((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 1] [i_1] [i_1] [i_1])) - (58160))))));
                            }
                        } 
                    } 
                } 
                var_26 |= ((/* implicit */long long int) ((unsigned char) ((short) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_14))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) var_13);
}
