/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187240
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
    var_11 = ((((/* implicit */_Bool) min((var_7), (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) var_6)));
    var_12 = ((/* implicit */unsigned char) var_2);
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (var_7)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (max((((/* implicit */long long int) -2)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-121)), (arr_8 [i_0 + 2] [i_1] [i_2] [i_2] [i_2] [i_3])))))));
                            var_15 ^= (~((+(((/* implicit */int) var_2)))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) 1126657720);
                var_17 = ((/* implicit */_Bool) (-((+(arr_5 [i_0 + 1] [i_0 + 1] [i_0] [i_0])))));
            }
        } 
    } 
}
