/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142797
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) max(((~(((/* implicit */int) arr_4 [i_0 - 2])))), ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_0 - 2])) < (var_3))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((int) arr_10 [i_1] [i_1] [i_2 - 1] [i_1] [i_2]))), (((((/* implicit */unsigned long long int) arr_10 [i_2] [i_2] [i_2 + 1] [i_3] [i_2 + 1])) - (var_3)))));
                            var_18 = ((/* implicit */unsigned long long int) arr_6 [i_3] [i_2 + 1] [i_1] [i_0]);
                        }
                    } 
                } 
                var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_0 [i_0 + 1])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((arr_1 [i_0 + 1]) == (min((arr_3 [i_0 - 2]), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9))))), (max((var_15), (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (max((var_14), (((/* implicit */int) var_10))))))) : ((+(var_13))))))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((int) ((unsigned short) var_2))))));
}
