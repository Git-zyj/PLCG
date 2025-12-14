/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133990
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
    var_17 = ((/* implicit */signed char) ((unsigned short) min((((var_1) * (var_7))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) -4)), (0LL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */short) min(((!(((/* implicit */_Bool) (unsigned char)150)))), ((!(var_16)))))), (max((var_0), (((/* implicit */short) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) 0LL)))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_10 [i_2 + 1] [(unsigned char)10] [i_1] [i_2])) : (((/* implicit */int) arr_10 [i_2 + 1] [i_2] [i_1] [i_2 - 1]))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_2 - 1] [i_2] [i_1] [i_2 - 1])) != (((/* implicit */int) arr_10 [i_2 + 1] [i_2] [i_1] [i_2]))))))));
                                var_19 -= ((/* implicit */unsigned int) (~(-1LL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
