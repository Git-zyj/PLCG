/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121965
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
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((300170370970680043ULL) ^ (((/* implicit */unsigned long long int) 4294967276U)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)34974))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_11 [i_3] [5U] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((3), (((/* implicit */int) (unsigned short)65535))))), (((((((/* implicit */unsigned long long int) -1389476235)) - (4468332785166876213ULL))) - (((/* implicit */unsigned long long int) ((2210328205U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)15667))))))))));
                            var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)242)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)37)) < (((/* implicit */int) (_Bool)1)))))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 4294967274U)) ? (1475245130) : (((/* implicit */int) (unsigned short)51414))))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_2);
    var_14 = ((/* implicit */signed char) ((unsigned int) var_4));
}
