/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188462
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
    var_14 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) var_9))))))), (((var_10) / (((/* implicit */long long int) ((/* implicit */int) max((var_12), (((/* implicit */signed char) (_Bool)1))))))))));
    var_15 *= ((/* implicit */long long int) ((((min((4178714765U), (((/* implicit */unsigned int) var_13)))) % (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967278U))))) << (((((-9223372036854775806LL) - (-9223372036854775795LL))) + (30LL)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0]))) * (1018006369U))) << (((arr_0 [(_Bool)1] [i_1]) ? ((-(4212072550U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_2] [i_2] [i_1] [i_0] [i_0] &= ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (18U));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) max((((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [4LL] [i_0] [i_0]))) : (4294967277U))), (((/* implicit */unsigned int) ((short) (_Bool)1)))))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), ((+(((/* implicit */int) var_4))))))) != (((((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) >> (((((2333200452U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))))) - (107U)))))));
                    arr_17 [i_0] [(_Bool)1] [i_2] [i_1] = ((4178714765U) & (82894738U));
                }
            } 
        } 
    } 
}
