/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161624
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
    var_10 = ((/* implicit */_Bool) var_8);
    var_11 = max(((_Bool)1), ((_Bool)1));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) min((268304384U), (4026662931U)));
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) arr_1 [i_0]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((((_Bool) 268304382U)), (var_3)));
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (((((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [21ULL]))) + (21U))) + (268304365U))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2])))))));
                arr_12 [4ULL] [i_2] [14ULL] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((4026662930U) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (3123226100U)))))))), ((~(1059545530U)))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        {
                            var_15 &= ((_Bool) ((((var_6) - (var_4))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_5])))));
                            var_16 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) var_5)));
                        }
                    } 
                } 
                var_17 ^= arr_10 [9U];
            }
        } 
    } 
}
