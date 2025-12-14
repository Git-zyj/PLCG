/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181163
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
    var_17 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((var_11) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) - (((((/* implicit */_Bool) var_13)) ? (3071625832U) : (((/* implicit */unsigned int) 1579834244))))))));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_4))))))) : (max((((/* implicit */long long int) (-(((/* implicit */int) var_0))))), ((+(-768647598836773359LL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    var_19 = ((/* implicit */signed char) ((min((-768647598836773374LL), (((/* implicit */long long int) (_Bool)1)))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (var_9))))) <= (min((var_10), (((/* implicit */unsigned long long int) var_6))))))))));
                    arr_6 [i_0 - 1] [i_1] = ((/* implicit */long long int) ((int) (~(((1073741823ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                    var_20 = ((/* implicit */short) 1586699333);
                    var_21 = ((/* implicit */short) arr_5 [i_0] [i_0 - 1] [i_0] [i_0 - 1]);
                }
                var_22 = ((/* implicit */_Bool) arr_0 [i_0]);
            }
        } 
    } 
}
