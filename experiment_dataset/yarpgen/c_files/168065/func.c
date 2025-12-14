/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168065
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
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_15 = min((((/* implicit */long long int) ((_Bool) (_Bool)1))), (((arr_3 [i_2 + 1]) | (arr_3 [i_2 + 1]))));
                            arr_11 [i_0] [i_0 + 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_2 - 1]))) != (((arr_8 [i_2 + 1] [i_0 + 2] [i_2] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) ((var_3) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_2]))))))) : ((+(var_6)))))));
                        }
                    } 
                } 
                var_16 -= ((/* implicit */unsigned int) ((((arr_3 [i_0 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)93)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_12);
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (+((~(var_4))))))));
    var_19 = ((/* implicit */_Bool) (+(var_6)));
}
