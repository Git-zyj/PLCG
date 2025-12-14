/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134120
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) -1152034902);
                            var_18 ^= ((/* implicit */signed char) min(((+(((((/* implicit */int) (unsigned char)245)) << (((1590626630) - (1590626617))))))), (((int) 4294967281U))));
                            var_19 = ((/* implicit */signed char) -1152034910);
                            var_20 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(-1152034902)))), (max((((/* implicit */unsigned int) -1152034902)), (4294967281U)))));
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 1152034918)), (4294967281U)))) / (max((((/* implicit */unsigned long long int) 496329916U)), (14199115765573947609ULL))))), (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) (unsigned short)65535))))))));
                var_22 -= ((/* implicit */_Bool) max((min((max((((/* implicit */unsigned int) (unsigned char)248)), (4294967295U))), (((/* implicit */unsigned int) ((unsigned char) 3544108313U))))), ((-((-(496329916U)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((unsigned int) var_12));
    var_24 = ((/* implicit */long long int) -1152034910);
    var_25 = ((/* implicit */_Bool) ((signed char) 1629377367U));
}
