/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166815
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
    var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) % (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned int) var_14)), (var_0)))))) ? (var_13) : (min((min((var_13), (var_6))), (((/* implicit */unsigned long long int) var_8))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_0]) || (((/* implicit */_Bool) arr_3 [(_Bool)1]))))), (((var_1) ? (arr_1 [i_1 - 1]) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) arr_10 [i_1 - 1] [i_2 + 1] [i_3 - 1]);
                            var_16 = arr_4 [i_0];
                        }
                    } 
                } 
                var_17 &= ((/* implicit */unsigned int) var_7);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */unsigned long long int) var_5)) : (((var_7) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (min((var_13), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))));
}
