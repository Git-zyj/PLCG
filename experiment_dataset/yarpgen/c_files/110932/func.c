/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110932
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned long long int) -268435456)) : (min((9334357848373664437ULL), (((/* implicit */unsigned long long int) var_7))))));
                            arr_10 [(_Bool)1] [(_Bool)1] [i_1] [i_2] [i_1] |= 3619739161U;
                            var_12 -= ((/* implicit */long long int) ((_Bool) -268435456));
                            var_13 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) arr_3 [i_3] [i_1]))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 597765720))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */signed char) ((unsigned int) var_4));
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */unsigned long long int) -1397744301)) : (4611686018427387903ULL)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((unsigned char) var_2));
}
