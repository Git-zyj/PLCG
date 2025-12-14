/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119504
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (4294967292U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1897672994)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((signed char) (signed char)-83))))), (((/* implicit */int) var_3)));
                arr_6 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) (-2147483647 - 1))), (((long long int) ((int) 9858928948423798720ULL)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (unsigned char)252))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)-83))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) (signed char)98))))) ? (((/* implicit */int) min((arr_9 [i_0]), (((/* implicit */signed char) var_9))))) : (((/* implicit */int) (unsigned char)111))))) : (((long long int) ((unsigned char) var_8)))));
                        }
                    } 
                } 
                arr_12 [10] [i_0] = ((/* implicit */unsigned long long int) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))));
            }
        } 
    } 
}
